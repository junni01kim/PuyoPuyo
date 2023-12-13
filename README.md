# PuyoPuyo_by_C
2023년 1학기 프로그래밍 랩 C언어로 만든 뿌요뿌요 입니다.

## 파일 설명
해당 프로그램은 다음과 같은 구조로 되어 있습니다.
1. 함수 이름들이 선언되어 있는 standard.h
    - 이용할 수 있는 함수들의 이름이 구현되어 있습니다.
2. 프로그램의 main()이 구현 되어있는 main.c
    - 메인메뉴와 각 메뉴에 맞는 switch()가 구현 되어있다.
3. 프로그램에 이용되는 함수가 작성된 done.c
    - 제작이 완료된 코드들만 옮기는 .c 파일이라 최종적으로 모든 코드가 done.c에 있게 되었다.

## 프로그램 설명
해당 프로그램에 이용된 코드들은 다음과 같습니다.
  - 1개의 전역변수, 2개의 구조체, 36개의 함수로 구성되어 있습니다.

#### 전역변수 설명
해당 전역변수는 1개는 112x28 픽셀로 된 그래픽 숫자입니다. 뿌요뿌요 시작 메뉴화면의 그래픽을 의미합니다.

#### 구조체 설명
1. puyo: 하나의 뿌요를 구성하는 구조체
    - `type`, `x`, `y`, `player`로 구성 되어있다.
        - type: 해당 구조체의 색상을 나타낸다.  
        - x, y: 해당 구조체의 위치를 나타낸다.  
        - player: 해당 구조체가 사용될 플레이어를 나타낸다.  
2. player: 하나의 플레이어를 구성하는 구조체
    - `PlayerX`, `puyoIndex`, `obstructPuyoNum`, `getObstructPuyo`, `PuyoStack[ ][ ]`, `lastScore`, `score`, `lose`, `puyoRemoved`, `puyoRemovedSum`, `puyoColor`, `puyoConnect`, `puyoCombo`로 구성 되어있다.
        - PlayerX: 어떤 플레이언지 알려준다. 좌측과 우측 플레이어를 구분하기 위함이다.    
        - puyoIndex: 다음에 나타날 뿌요 로직을 알려주는 함수이다.    
        - obstructPuyoNum: 상대 플레이어에게 줄 방해뿌요 수를 저장해두는 변수이다.    
        - getObstructPuyo: 상대 플레이어에게서 받은 방해뿌요를 저장하는 변수이다.    
        - PuyoStack: 현재 라운드의 맵에 있는 뿌요의 배치도를 배열로 저장한다.    
        - lastScore: 추가될 총 점수이다.    
        - score: 현재 라운드의 점수이다.    
        - lose: 패배 횟수이다.    
        - puyoRemoved: 없어진 뿌요 수; 점수 추가에 이용된다.    
        - puyoRemovedSum: 한 연쇄에서 없어진 뿌요 수 총합; 점수 추가에 이용된다.    
        - puyoColor: 색 수 보너스; 점수 추가에 이용된다.    
        - puyoConnect: 연결 보너스; 점수 추가에 이용된다.    
        - puyoCombo: 연쇄 보너스; 점수 추가에 이용된다.    
