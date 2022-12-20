#include <LiquidCrystal.h>
#include <Servo.h> //서보라이브러리
#define nRedPin 3
#define nBluePin 4
#define nYellowPin 5
LiquidCrystal lcd(6, 7, 8, 9, 10, 11);//lcd에 필요한 위치
Servo servo;//서보모터
int value = 0;
int nLEDPIN[3]={nRedPin,nBluePin,nYellowPin};//ledpin 배열//
int *pLED=nLEDPIN;//nLEDPIN 배열을 가리키는 포인터 선언


// led 함수//
void GenLEDanalogOutput(int nNumPin, int nCmd, int nDelay)
{
  digitalWrite(nNumPin,nCmd);
  delay(nDelay);
}

void setup()
{
  lcd.begin(16, 2);//16*2 lcd 출력셋팅
  lcd.print("safe situation");
  delay(1000);
  servo.attach(2); //2번 포트를 통해 서브모터 데이터값 가져옴
  Serial.begin(9600);
  pinMode(*pLED, OUTPUT);// 빨강 입출력 셋팅
  pinMode(*(pLED+1), OUTPUT);// 파랑 출력 셋팅
  pinMode(*(pLED+2), OUTPUT);// 노랑 출력 셋팅
}

void loop()
{      
  Serial.println(analogRead(A0));//시니얼 모니터에 수치값 프린다
  delay(20);
  if(100<analogRead(A0))//가스 수치가 100이상
  { lcd.setCursor(0,0);// (0,0)좌표부터 입력
    lcd.print("figure: ");
    lcd.setCursor(8,0);// (8,0)부터 쓰레기값 초기화
    lcd.print("              ");
    lcd.setCursor(9,0);// 가스수치 lcd 판에 출력
    lcd.print(analogRead(A0));
    lcd.setCursor(0,1);
    lcd.print("call: 1599-3131"); //청주 도시가스 전화번호 출력
   
    value=90;// 가스수치가 100이상 올라가면 서브모터가 90도로 회전하여 가스밸브를 잠금
    digitalWrite(*(pLED+2),0);//가스 수치가 100이상이면 황색등 꺼지고
    GenLEDanalogOutput(*(pLED),1000,50);//적색등으로 점등
    delay(50);
  }
  else if(0<analogRead(A0)&&analogRead(A0)<=100)//가스수치가 100보다 낮으면 황색등
  {
    lcd.setCursor(0,0);// (0,0)좌표부터 입력
    lcd.print("figure: ");
    lcd.setCursor(8,0);// (8,0)부터 쓰레기값 초기화
    lcd.print("              ");
    lcd.setCursor(9,0);// 좌표값
    lcd.print(analogRead(A0));//가스수치 led에 출력
    value =0;
    digitalWrite(*(pLED),0);//가스수치 100 이하면 적색등은 꺼짐
    GenLEDanalogOutput(*(pLED+2),1000,50);//황색등 점등
  }
  else if(analogRead(A0)==0)//평소는 파란등
  {
    GenLEDanalogOutput(*(pLED+1),1000,50);
  }
    
  servo.write(value);
}