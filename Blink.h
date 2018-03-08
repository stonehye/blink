
#ifndef Blink_h      // 전처리문 시작, 특정 헤더 파일(여기서는 Morse.h) 중복 포함 방지
#define Blink_h

#include "Arduino.h" // 아두이노 헤더 파일 포함, 표준 함수 사용하기 위함

class Blink
{     
  public:            // 외부에서 호출해야 하는 함수 선언
    Blink(int pin);  // 생성자 함수
    void on(int);
    void off(int);
  private:          // 외부에 노출이 필요 없는 함수, 변수 선언
    int _pin;
};                  // 클래스 선언 끝

#endif            
