## :speech_balloon: 페이지 설명
해당 페이지는 게임 내 적용된 디자인 패턴을 설명하는 페이지로써, 각 문제를 해결한 방법을 설명한 페이지이다.

### :file_folder: 적용이유
1. [Singleton Pattern](src/puyopuyo/client/panel/map/MapPanel.java): 생성 패턴의 일환으로, 프로세스에서 단일 인스턴스를 활용하도록 만든 패턴이다.
    - 재사용성이 높은 클래스(각종 패널, 팩토리 클래스)를 관리하기 위해 사용한다.
    - `Singleton Pattern`으로 제작된 클래스는 `getInstance()`를 이용하여 참조할 수 있다.
   
2. [FactoryMethod Pattern](src/puyopuyo/server/move_command/MoveCommandFactory.java): 생성 패턴의 일환으로, 클래스 생성 과정을 별도로 분리하여 관리 하는 서브 클래스를 이용하는 패턴이다.
    - 전달된 메세지 타입과 방향키 정보를 통해, 알맞는 `Command` 클래스를 할당하는 역할
    - 주어진 `parameter`에 따라서, 객체를 할당하고 생성한 객체를 return한다.
    - 단순 할당 및 고유한 `property`는 없는 관계로 `singleton`으로 만들어 관리한다.
   
3. [Command Pattern](src/puyopuyo/server/move_command/LeftMoveCommand.java): 행위 패턴의 일환으로, 요청을 캡슐화하여 이벤트를 재사용성 높은 객체로 만드는 패턴이다.
    - 수신된 정보는 정해진 이벤트를 반복적으로 수행하기에 동작을 모듈화 하고, [인터페이스](src/puyopuyo/server/move_command/MoveCommand.java)를 생성하여 상위 클래스에서의 변경 사항을 최소화
    - [controlPuyo()](src/puyopuyo/server/ServerProcess.java)참고
   
5. Template Pattern
    - 

7. Observer Pattern (못씀)

8. MVC Pattern (못씀)
