# PuyoPuyo_by_Java 리뉴얼

## :memo: 목차
[1. 프로젝트의 주요 기능과 목적](#1-프로젝트의-주요-기능과-목적)  
[2. 작동 영상](#2-작동-영상)  
[3. 설치 방법](#3-실행-방법)  
[4. 문제 해결 방법](#4-문제-해결-방법)  
[5. 라이선스, API 정보](#6-라이선스-API-정보)  
[6. 심화 자료와 문서 링크](#7-심화-자료와-문서-링크)  
[7. 사전 요구사항](#8-사전-요구사항)  
<br><br>  

## :triangular_flag_on_post: 1. 프로젝트의 주요 기능과 목적
### 프로젝트 목적
  1. 2024 한성대학교 네트워크 프로그래밍 기말 프로젝트 제출품
  2. 기존 [v2.0.0](docs/v2.0.0.md)의 코드 가독성을 높임
  3. 해당 학기 학습한 [설계패턴](docs/design_pattern.md)을 바탕으로 코드를 강화
<br>  

### 프로젝트 기능
  1. 고전 오락 PuyoPuyo 게임 제작하기
  2. 멀티 유저 게임을 제작하여, 배틀 기능 구현
  3. 게임 규칙은 Sega의 PuyoPuyo Tetris을 기반으로 제작 PuyoPuyo_by_Java 리뉴얼
  4. **동작 알고리즘은 모두 해당 프로젝트에서 직접 제작**
  5. 소켓 통신을 이용한, 멀티 플레이 게임 제작
<br>  

### 아키텍처
  1. 클래스 다이어그램
      - 이용상황: 기존에 만들어둔 프로젝트 v1.0.0의 알고리즘과 Ui가 존재하는 상황
      - 사용이유: 개발에 적합 새로운 흐름도 제작보단, 타 인원(v3.0.0 팀원) 이해를 위한 규칙 작성 및 코드 구조 가독성 향상이 중요하다 판단
![메뉴 구성도](https://github.com/user-attachments/assets/bdf61e39-750d-4510-80b5-e690044fb7f9)
<br><br>
## :movie_camera: 2. 작동 영상
[영상 링크](https://youtu.be/oCgn4VIoAEQ)
<br><br>

## :runner: 3. 실행 방법
  1. git clone 후 `IntelliJ`에서 열기
  2. Server.java 실행 (소켓 서버)
  3. Client.java, Client2.java 실행 (소켓 클라이언트)
  ※ 사용하는 port는 9999로, 실행 전 포트가 비어있는 것 확인 필요
<br><br>

## :information_desk_person: 4. 문제 해결 방법
  1. 화면 생성(그래픽스): Java Swing을 이용한 그래픽 디자인
  2. Ui 디자인: `PuyoPuyo Tetris`의 이미지 참고, 메뉴 배치는 자체 디자인. ※ 저작권 위배 시 원격 깃 private로 변경 예정  
  3. 알고리즘: [참고](docs/algorithm.md)
  4. 소켓 통신:
      1. 서버: 9999 포트를 열고, 게임을 진행한다. 클라이언트의 방향 조작 정보를 바탕으로 게임 맵을 수정하고 클라이언트에게 전달한다.
      2. 클라이언트: 서버에 접속하고, 사용자에게 게임을 시각적으로 보여준다. 서버 접속 순서에 따라 1P, 2P가 결정된다.
<br><br>

## :file_folder: 5. 라이선스, API 정보, 라이브러리
  - [Gson](https://mvnrepository.com/artifact/com.google.code.gson/gson): 소켓 통신 간 객체 전달을 위해 활용
<br><br>

## :page_with_curl: 6. 심화 자료와 문서 링크
### 버전 별 ReadMe.md
  - [\[PuyoPuyo_by_Java\] v1.0.0](docs/v1.0.0.md) `Eclips`에서 작동하는 버전 (프로토타입)
  - [\[PuyoPuyo_by_Java\] v2.0.0](docs/v2.0.0.md) `IntelliJ`에서 작동하는 버전 (로컬 2인용 + 구조 체계화)
  - [PuyoPuyo_by_Java] v3.0.0 `IntelliJ`에서 작동하는 버전 (네트워크 통신 적용) **현재 버전**
<br>  

### 참고 자료
  - [명품 JAVA Programming (개정4판)](https://www.booksr.co.kr/product/%EB%AA%85%ED%92%88-java-programming/)
  - [자바 Swing 공식 문서](https://docs.oracle.com/javase/tutorial/uiswing/index.html)
  - [득점 계산](https://puyopuyo.fandom.com/ko/wiki/%EB%93%9D%EC%A0%90_%EA%B3%84%EC%82%B0)
  - [Gson](https://github.com/google/gson)
<br>

### 추가 정보
  - [파일 구조도](docs/project_tree.md)

## :seedling: 7. 사전 요구사항
  - `Java Virtual Machine`
