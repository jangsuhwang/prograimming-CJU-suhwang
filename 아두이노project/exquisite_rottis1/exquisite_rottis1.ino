#include <Servo.h>

Servo myServo; //서보모터 제어를 위한 전역변수 선언
#define nRedPin 2
#define nYellowPin 5
#define nGreenPin 4
#define nBluePin 3
#define nPushSwPinn 6
#define MINANALOG 0
#define MAXANALOG 1023
#define MINDEGREE 0
#define MAXDEGREE 180

int nLEDPIN[4]={nRedPin,nBluePin,nGreenPin,nYellowPin};//ledpin 배열//
int *pLED=nLEDPIN;//nLEDPIN 배열을 가리키는 포인터 선언
int nPushSwPin=6;               

// led 점멸함수//
void GenLEDDigitalOutput(int nNumPin, int nCmd, int nDelay)
{
  digitalWrite(nNumPin, nCmd);
  delay(nDelay);
}
void setup()
{
  myServo.attach(7);//아두이노 디지털 7핀을 서보모터 제어에 사용
  pinMode(*pLED, OUTPUT);// 빨강 입출력 셋팅
  pinMode(*(pLED+1), OUTPUT);// 파랑 입출력 셋팅
  pinMode(*(pLED+2), OUTPUT);// 초록 입출력 셋팅
  pinMode(*(pLED+3), OUTPUT);// 노랑 입출력 셋팅
  pinMode(nPushSwPin, INPUT);// 스위치 입출력 셋팅
  Serial.begin(9600);
}

void loop()
{
  int nKnobblink = analogRead(A0); //가변 저항 값 끌어다 씀 
  int readValue = map(nKnobblink,MINANALOG,MAXANALOG,MINDEGREE,MAXDEGREE);// map 함수를 통해 가변저항 크기 비율 조정
 
  
  if(digitalRead(nPushSwPin) == HIGH){    
    Serial.print("Switch:ON\n");
    
    for(int angle=0; angle<=readValue; angle++)// 가변저항 값에 따라 서보모터 회전
    {
     myServo.write(angle);
    }
    
    if(readValue<=45)// 45도 이하로 서보모터 회전하면 빨간불만 점멸
    {
      GenLEDDigitalOutput(*pLED,nKnobblink,50);
      GenLEDDigitalOutput(*pLED,LOW,50);
    }
    if(readValue<=90)// 90도 이하로 서보모터 회전하면 빨간불 파란불 점멸
    {
     GenLEDDigitalOutput(*(pLED+1),nKnobblink,50);
     GenLEDDigitalOutput(*(pLED+1),LOW,50);
    }
    if(readValue<=135)//135도 이하로 서보모터 회전하면 빨간불 파란불 초록불 점멸
    {
     GenLEDDigitalOutput(*(pLED+2),nKnobblink,50);
     GenLEDDigitalOutput(*(pLED+2),LOW,50);
    }
    if(readValue<=180)// 180도 이하로 서보모터 회전하면 모두 점멸
    {
     GenLEDDigitalOutput(*(pLED+3),nKnobblink,50);
     GenLEDDigitalOutput(*(pLED+3),LOW,50);
    }
  }
  else
  {
    
  Serial.print("Switch:OFF\n");
    delay(1000);
    
  }
    
}
