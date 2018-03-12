3월 7일 과제 입니다.
=======

파일 목록
----
1. Blink.cpp - 라이브러리 cpp 파일
2. Blink.h - 라이브러리 헤더 파일
3. blink.ino - 스케치 파일

라이브러리 구성
----
* Blink::Blink(int pin)
> 생성자 함수입니다. private 변수 _pin을 셋팅합니다.
* Blink::off(int n)
> _pin안에 들어있는 핀 넘버에 해당하는 led를 끕니다. 파라미터인 n msec만큼 지속됩니다.
* Blink::on(int n)
> _pin안에 들어있는 핀 넘버에 해당하는 led를 킵니다. 파라미터인 n msec만큼 지속됩니다.

비고
----
* 직접 만든 헤더파일의 경로설정?







3월 9일 과제 입니다.
=======

파일 목록
----
1. ds18b20.ino - ds18b20으로 수집한 데이터를 thingspeak 계정에 전송하는 스케치 파일

비고
----
* ThingSpeak URL: https://thingspeak.com/channels/446957
* 수집 시작 시각:
* 1분(60초) 주기로 데이터 수집
