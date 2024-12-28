## :speech_balloon: 페이지 설명
해당 페이지는 게임 내 알고리즘을 설명하는 페이지로써, 각 문제를 해결한 방법을 설명한 페이지이다.

### :file_folder: 내부 구조:
1. `Server`를 실행하면, `ServerProcess`는 두개의 `ClientProcess`(클라이언트 소켓)를 기다린다.
2. 접속 시 서버는 `GameThread`를 생성하며, 게임(`RoundThread`)을 시작한다.
3. 클라이언트는 각 `Panel`을 `PanelService`를 통해서 접근할 수 있다.
4. 방향키 조작
   - 클라이언트는 `ClientKeyListener`를 통해서 서버에게 방향키 정보를 전달한다.
   - 서버는 전달된 정보에 맞춰 `MoveCommandFactory`를 통해 로직(`MoveCommand`)이 실행된다.
5. 클라이언트 조작
   - 서버는 `toAllClient()`를 통해서 클라이언트에게 각종 정보를 전달한다.
   - 클라이언트는 `SocketFactory`를 통해 `MessageType`에 맞는 로직(`SocketCommand`)이 실행된다.

### :computer: 주변 뿌요 탐색: `Flood Fill` 알고리즘
1. 6*12 사이즈의 이중 배열 화면과 픽셀 영역 채우기에 사용하는 `Flood Fill` 알고리즘의 작동 방식이 유사하다 판단
2. 최하단까지 내려운 뿌요의 4면에 자신과 동일한 뿌요가 몇 개 있는지 판단한다. (알고리즘 1회 사용)
3. 동일한 뿌요가 4개 이상 존재한다면, 뿌요 삭제 함수를 작동한다. (알고리즘 추가 1회 사용) <- __수정 예정__
   
### :bar_chart: 졈수 계산:
1. 다음 사이트를 참고하여 제작하였다. [득점 계산](https://puyopuyo.fandom.com/ko/wiki/%EB%93%9D%EC%A0%90_%EA%B3%84%EC%82%B0)
2. player `dropPuyos()`가 작동된 횟수를 Combo로 판단한다.
