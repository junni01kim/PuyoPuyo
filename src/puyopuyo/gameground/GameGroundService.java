package puyopuyo.gameground;

import puyopuyo.Puyo;
import puyopuyo.game.GameService;

import java.awt.*;

public class GameGroundService {
    private final GameGroundRepository gameGroundRepository;
    private final GameService gameService;

    public GameGroundService(GameGroundRepository gameGroundRepository, GameService gameService) {
        this.gameGroundRepository = gameGroundRepository;
        this.gameService = gameService;
    }

    public Puyo getLeftPuyo() { return gameGroundRepository.getLeftPuyo(); }
    public Puyo getRightPuyo() { return gameGroundRepository.getRightPuyo(); }

    public void setUi() {
        var gameGroundPanel = gameGroundRepository.getGameGroundPanel();
        var leftPuyo = gameGroundRepository.getLeftPuyo();
        var rightPuyo = gameGroundRepository.getRightPuyo();

        gameGroundPanel.setBackground(Color.CYAN);
        gameGroundPanel.setLayout(null);
        gameGroundPanel.setSize(400,750);

        gameGroundPanel.add(leftPuyo);
        gameGroundPanel.add(rightPuyo);
    }

    public void repaint() {
        var gameGroundPanel = gameGroundRepository.getGameGroundPanel();
        gameGroundPanel.repaint();
    }

    public void add(Puyo puyo) {
        var gameGroundPanel = gameGroundRepository.getGameGroundPanel();
        gameGroundPanel.add(puyo);
    }
}