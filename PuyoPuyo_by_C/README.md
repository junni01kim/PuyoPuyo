# PuyoPuyo_by_C
2023년 1학기 프로그래밍 랩 C언어로 만든 뿌요뿌요 입니다.

[데모영상 링크](https://www.youtube.com/watch?v=XhJlx1Pf0bw)

## :triangular_flag_on_post: 파일 설명
해당 프로그램은 다음과 같은 구조로 되어 있습니다.
1. 함수 이름들이 선언되어 있는 standard.h
    - 이용할 수 있는 함수들의 이름이 구현되어 있습니다.
2. 프로그램의 main()이 구현 되어있는 main.c
    - 메인메뉴와 각 메뉴에 맞는 switch()가 구현 되어있다.
3. 프로그램에 이용되는 함수가 작성된 done.c
    - 제작이 완료된 코드들만 옮기는 .c 파일이라 최종적으로 모든 코드가 done.c에 있게 되었다.
<br><br>

## :information_desk_person: 프로그램 설명
해당 프로그램에 이용된 코드들은 다음과 같습니다.
  - 1개의 전역변수, 2개의 구조체, 36개의 함수로 구성되어 있습니다.

### 전역변수 설명
1. BackGround[28][112]: 112x28 픽셀로 된 그래픽 숫자입니다. 뿌요뿌요 시작 메뉴화면의 그래픽을 의미합니다.

### 구조체 설명
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

### 함수 설명
__\* 교수님이 제공해주신 함수입니다.__  

1. void removeCursor(void);
    - 터미널의 커서를 안보이게 한다.
2. void gotoxy(int x, int y);
    - 터미널의 커서 좌표를 `x, y`가 되게 한다.
3. void textcolor(int fg_color, int bg_color);
    - 이후 작성할 글자의 색상을 바꾼다.
4. void cls(int bg_color, int text_color);
    - 화면 전체를 초기화하고 배경색을 설정한다.
5. void draw_box(int x1, int y1, int x2, int y2, char ch);
    - `ch` 문자로 box를 그린다.
6. void draw_box2(int x1, int y1, int x2, int y2);
    - 아스키코드 `─`를 이용하여 box를 그린다.
7. void draw_hline(int y, int x1, int x2, char ch);
    - x1부터 x2에 선을 line을 그린다.


__\* 본인이 제작한 함수입니다.__  

8. void printBackground();
    - `mainMenu()`에서 메뉴화면에 그림을 그리는 함수힙니다.
    - 그림을 그리는데에는 `BackGround[ ][ ]`를 이용한다.
9. void printMenuOption(int* selectPosition, int* status);
    - `mainMenu()`에서 메뉴화면의 메뉴 내용을 깜빡이게 한다.
    - selectPosition: 본인이 어떤 버튼을 누르고 있는지 상태를 받는다.
    - 본인의 패널이 toggle을 위한 입력 변수이다.
10. int moveUpDownSelect();
    - 메뉴화면에서 어느 메뉴를 선택할지 방향을 선택하는 함수이다.
    - 상하로 조정이 가능하며, 스페이스바로 항목을 선택할 수 있다.
    - 이동하고 싶다면 ±1을 하되, 선택(space)을 할 시 100을 리턴한다.
11. int mainMenu();
    - 메인메뉴 전체를 관리하는 함수이다.
    - `moveUpDownSelect()`에서 100을 받으면 `selectPosition` 값을 리턴한다.
12. void explain();
    - 뿌요뿌요 세번째 메뉴를 담당하는 함수로 게임 방식을 설명하는 함수이다.
    - 아래에서 위로 텍스트가 올라가는 효과가 있으며, 아무 키나 누르면 이전화면으로 돌아갈 수 있다.
13. void gameMap();
    - 게임 맵을 디자인하는 함수이다.
    - 콘솔창 특성상 한번 생성된 텍스트는 잔상이 남기 때문에 최적화를 위해 한번만 출력되도록 제작하였다.
14. int mapClear(player* Player1, player* Player2);
    - 플레이 화면을 정리하는 함수이다.
    - 게임 내 남아있는 텍스트 잔상을 지우고, 실제 `PuyoStack[ ][ ]`안에 남아있는 값들고 초기화한다.
15. void puyoLogic(int* logic);
    - 한 라운드에 사용될 뿌요의 순서를 설정하는 함수이다.
    - 뿌요들은 총 5*5개로 구성되며, 생성되는 두 뿌요는 10의 자리 값과 1의 자리 값으로 구분해서 저장된다.
    - 나중에 이 값은 %10과 /10으로 분리하여 각 puyo구조체로 저장된다.
16. void counter();
    - 게임 라운드 시작 전 3초의 카운트를 시작하는 함수이다.
17. void printPuyo(puyo* PuyoX);
    - puyo 구조체의 `type`에 맞는 캐릭터 디자인을 입혀주는 함수이다.
18. void printBlank(player* playerX, int indexX, int indexY);
    - 뿌요 한개 크기의 공백을 그리는 함수이다.
    - 뿌요가 4개 이상이 모여 사라질 때 `player.PuyoStack[ ][ ]` 값을 기준으로 공백을 그린다.
19. void clearNowZone(puyo* PuyoX);
    - 뿌요 한개 크기의 공백을 그리는 함수이다.
    - 뿌요가 아래로 이동할 때 뿌요의 잔상을 삭제하는 역할을 한다.
    - puyo 구조체의 위치를 기반으로 공백을 그린다.
20. void move(player* Player1, player* Player2, puyo* Puyo1, puyo* Puyo2, puyo* Puyo3, puyo* Puyo4, int* spin1, int* spin2);
    - 플레이어 1,2의 방향키를 조정해주는 함수이다.
21. void printTimer(clock_t* duration);
    - 한 라운드가 진행되고 있는 시간을 출력하는 함수이다.
22. void printScore(player* PlayerX);
    - 플레이어의 실시간 점수를 보여주는 함수이다.
23. void soloPuyoMove(player* PlayerX, puyo* PuyoX);
    - 플레이어가 조종하는 두 뿌요 중 한 뿌요가 위치가 정해진 후 남은 뿌요의 행동을 관리하는 함수이다.
    - 다른 뿌요가 아직 공중에 있다면 바닥으로 내려가는 모션을 보여준다.
24. void nextPuyo(int* logic, player* playerX);
    - 플레이어가 조종하는 두 뿌요의 위치가 모두 확정된 후 다음 뿌요를 화면에 생성하는 함수
25.void checkPuyoCount(player* PlayerX, puyo* PuyoX, int checker[][6], int x, int y);
    - 해당 뿌요가 부숴질 뿌요인지 판단하는 함수이다.
    - 재귀함수를 이용해 사방으로 같은 색상의 뿌요를 탐색한다.
26. void deletePuyo(player* PlayerX, puyo* PuyoX, int checker[][6], int x, int y);
    - 4개 이상 뭉친 뿌요들을 부수는 함수이다.
    - `checkPuyoCount( )`와 동일한 알고리즘을 활용하고 있다. 마찬가지로 수정필요.
    - 재귀함수를 이용해 사방으로 같은 색상의 뿌요를 탐색한다.
27. void splashObstructPuyo(player* PlayerX, int* x, int* y);
    - 폭발한 뿌요의 좌표(x, y)의 ±1에 방해뿌요가 있다면 지우는 함수이다.
28. void dropPuyos(player* PlayerX);
    - 뿌요가 n차 폭발이 일어난 후 빈 공간을 정렬해주는 함수이다.
29. void scanPuyo(player* PlayerX, int* colorChecker);
    - 새로 배치된 뿌요들에게 일어날 동작들을 수행해 주는 함수이다.
    - `checkPuyoCount()`, `deletePuyo()`, `printScore()`, `dropPuyos()` 함수가 이곳에서 실행된다.
    - `deletePuyo()`가 진행되었다면 함수가 한번 더 호출된다.(추후 개선예정)
    - 플레이어의 점수계산이 이곳에서 진행된다.
    - 반약 deletePuyo()가 실행된다면, 모든 뿌요 dropPuyos() 진행 후 한번 더 재귀 시킨다.
30. void printObstructPuyo(player* PlayerX);
    - 뿌요를 없앤 후 만들어야 할 방해뿌요를 ●와 ○로 출력한다.
    - 10개의 방해뿌요는 ●로 1개의 방해뿌요는 ○로 표시된다.
31. void clearObstructPuyo(player* PlayerX);
    - `printObstructPuyo()` 된 텍스트를 지우는 함수이다.
32. void getObstructPuyo(player* PlayerX);
    - 플레이어가 받게될 뿌요 수를 기반으로 방해뿌요를 맵 전체에 고르게 분포 시켜주는 함수이다.
    - 받게될 방해뿌요가 6개 이상(맵 x축 인덱스 값)을 넘어가면 맵 한줄에 방해 뿌요를 배치하고, 그 값보다 적거나 나머지인 값은 랜덤함수를 이용해 랜덤배치한다.
33. int playerLose(player* PlayerX);
    - 플레이어의 뿌요가 일정 높이를 넘게된다면 게임 패배의 문구와 함께 현재 라운드 승리 횟수를 수정해주는 함수이다.
    - 플레이어가 이긴 판수를 리턴한다.
34. int everySecond( player* PlayerX, puyo* Puyo1, puyo* Puyo2);
    - 조종가능한 두 뿌요 동작을 구현하는 함수이다.
    - 각 뿌요가 정지될 때 뿌요를 동작시키고 나머지 뿌요의 동작을 단독으로 진행한다.
35. int everySeconds(player* Player1, player* Player2, puyo* Puyo1, puyo* Puyo2, puyo* Puyo3, puyo* Puyo4, int* colorChecker1, int* colorChecker2);
    - 뿌요들의 초당 활동을 관리하는 함수이다.
    - everySecond()와 수행과정에 일어난 방해뿌요의 연산을 진행하는 함수이다.
36. void start();
    - 게임을 시작하는 함수이다.
    - 음악을 재생하고, 라운드를 관리하며 각 라운드에 필요한 지역 변수들을 관리한다.
    - 루프를 반복시키며 조건에 맞는 함수들을 동작시킨다.
