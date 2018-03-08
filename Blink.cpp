#include "Arduino.h"
#include "Blink.h"

Blink::Blink(int pin) {        // 생성자 함수 작성, 클래스 인스턴스를 생성할 때 호출
  pinMode(pin, OUTPUT);
  _pin = pin;                           // _pin의 _은 private 변수의 관례적 표현이며 입력 인수 pin과 구분 역할
}

void Blink::on(int n) {
  digitalWrite(_pin, HIGH);  // 클래스의 멤버 변수 _pin 사용
  delay(n);
}

void Blink::off(int n) {
  digitalWrite(_pin, LOW);  // 클래스의 멤버 변수 _pin 사용
  delay(n);
}
