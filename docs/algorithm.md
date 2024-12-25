### 1. 게임 진행:
  1. 게임 시작 시 각 Round를 담당하는 `GameThread`를 배치, 각 라운드는 Player마다 새로운 `RoundThread`를 가진다.
  2. 게임 이벤트는 `RoundThread`의 메서드에서 관리되며, 상대 puyopuyo.Player 데이터 접근은 `RoundThread`를 통해서 전달된다.
  3. `RoundThread`의 시각적인 부분은 `GroundService`를 통해서만 접근이 가능하다. 상대방 Ui는 `RoundThread`에서 MapService를 통해 접근된다.  
            ※ 자세한 사항은 _의존성 주입_ 에서 설명
### 2. 주변 뿌요 탐색: `Flood Fill` 알고리즘
   1. 6*12 사이즈의 이중 배열 화면과 픽셀 영역 채우기에 사용하는 `Flood Fill` 알고리즘의 작동 방식이 유사하다 판단
   2. 최하단까지 내려운 뿌요의 4면에 자신과 동일한 뿌요가 몇 개 있는지 판단한다. (알고리즘 1회 사용)
   3. 동일한 뿌요가 4개 이상 존재한다면, 뿌요 삭제 함수를 작동한다. (알고리즘 추가 1회 사용) <- __수정 예정__
### 3. 졈수 계산:
   1. 다음 사이트를 참고하여 제작하였다. [득점 계산](https://puyopuyo.fandom.com/ko/wiki/%EB%93%9D%EC%A0%90_%EA%B3%84%EC%82%B0)
   2. player `dropPuyos()`가 작동된 횟수를 Combo로 판단한다.
