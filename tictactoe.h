
#ifndef CIS_242_ASSIGNMENTS_OFFICIAL_TICTACTOE_H
#define CIS_242_ASSIGNMENTS_OFFICIAL_TICTACTOE_H

#include <iostream>

using namespace std;

class Game {

    public:
    virtual bool checkWinner(int counter) = 0;


};

class TicTacToe : public Game {

    private:
        char board[9];
        char playerX, playerO;
        int xScore, yScore, playerMove, computerMove;
        char winner;



    public:
        void setPlayerMove(int move);
        bool checkWinner(int counter) override;
        void randomMove();
        char getWinner();
        void displayBoard();
        int getxScore();
        int getyScore();
        void resetBoard();


    TicTacToe() {
        playerX = 'X';
        playerO = 'O';
        xScore = 0;
        yScore = 0;
        winner = '-';
        for (int i = 0; i < 9; i++) {
            board[i] = '-';
        }
    }


};


#endif //CIS_242_ASSIGNMENTS_OFFICIAL_TICTACTOE_H
