package puyopuyo.Panel.map.subpanel.ground.round;

import puyopuyo.Panel.map.subpanel.ground.Puyo;

public class Round2 {
    private final int player;

    public Round2(int player) {
        this.player = player;
    }

    public int getPlayer() { return player; }

    private boolean endFlag = false;
    public boolean isEnd() {return endFlag;}
    public boolean setEnd(boolean state) {
        endFlag = state;
        return endFlag;
    }

    // nextPuyo()에서 사용한다.
    private int puyoIndex = 0;

    boolean oneWin = false;

    private int score = 0;

    // 점수 계산 용 변수들
    // checkNumberOfSamePuyo()에서 사용한다.
    private int puyoRemovedSum;
    private int puyoConnect;
    private int puyoCombo;
    private int puyoColor;

    private int garbagePuyo = 0;

    // setter TODO: 세터도 수정된 값을 다시 반환하도록 만들기
    public void setPuyoIndex(int i) { puyoIndex = i; }

    // TODO: 필요없음
    public boolean changeOneWin() {
        oneWin = !oneWin;
        return oneWin;
    }

    public void setScore(int i) { score = i; }

    public void setPuyoRemovedSum(int i) { puyoRemovedSum = i; }
    public int setPuyoConnect(int i) {
        puyoConnect = i;
        return puyoConnect;
    }
    public void setPuyoCombo(int i) { puyoCombo = i; }
    public void setPuyoColor(int i) { puyoColor = i; }

    public void setGarbagePuyo(int i) { garbagePuyo = i; }

    public int plusScore(int i) {
        score += i;
        return score;
    }
    public int plusPuyoRemovedSum(int i) {
        puyoRemovedSum += i;
        return puyoRemovedSum;
    }

    // getter
    public int getPuyoIndex() { return puyoIndex; }

    public boolean getOneWin() { return oneWin; }

    public int getScore() { return score; }

    public int getPuyoRemovedSum() { return puyoRemovedSum; }
    public int getPuyoConnect() { return puyoConnect; }
    public int getPuyoCombo() { return puyoCombo; }
    public int getPuyoColor() { return puyoColor; }

    public int getGarbagePuyo() { return garbagePuyo; }

    public boolean isOneWin() { return oneWin; }
}
