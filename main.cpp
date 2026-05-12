#include <iomanip>
#include "tictactoe.h"
#include <string>

using namespace std;

int main() {


    int xMove;
    char menu;

    TicTacToe* play = new TicTacToe();


    cout << string(10, ' ') << string(60, '-') << endl;
    cout << string(34, ' ') << "TIC TAC TOE" << endl;
    cout << string(10, ' ') << string(60, '-') << endl;


    for (int j = 0; j < 3; j++) {
        cout << string(25, ' ') << "|" << string(25, ' ') <<  "|" << endl;
        cout << string(18, ' ') << j << string(6, ' ') << "|"
             << string(12, ' ') << j + 3 << string(12, ' ') << "|"
             << string(6, ' ') << j + 6 << string(18, ' ') << endl;
        cout << string(25, ' ') << "|" << string(25, ' ') <<  "|" << endl;
        cout << string(10, ' ') << string(15, '-') << "T" << string(25, '-') << "T" << string(15, '-') << endl;

    }

    cout << endl << "Welcome to the TicTacToe!" << endl << "Your are player X! " << endl;


    do {

        int counter = 0;
        bool gameOver = false;

        do {

            try {
                cout << endl << "Please enter the number of the position you wish to take from 0-9: ";
                cin >> xMove;
                if (xMove < 0 || xMove > 8) {
                    throw ("Sorry, the value you entered is incorrect. Please try again.");
                }
            }

            catch (const char* error) {
                cout << error << endl;
            }


            try {
                play -> setPlayerMove(xMove);
            }

            catch (const char* error) {
                cout << error << endl;
            }

             gameOver = play -> checkWinner(counter);

            if (!gameOver) {
                play->randomMove();
            }

            play -> displayBoard();

            counter ++;

        } while (!gameOver);

        cout << endl << "The score is: " << endl;
        cout << "Your Score(X): " << play -> getxScore() << string(10, ' ')
             << "Player2 Score(O): " << play -> getyScore() << endl;

        bool keepGoing = false;
        do {
            try {
                cout << endl << " Do you wish to keep playing(Y/N)? ";
                cin >> menu;

                if (menu != 'Y' && menu != 'N') {
                    throw ("Sorry the value you entered is incorrect, please try again.");
                }
                play -> resetBoard();
                keepGoing = true;
            }

            catch (const char* error) {
                cout << error << endl;
            }
        } while (!keepGoing);



    } while (menu == 'Y');


    cout <<  endl << "The Final score is: " << endl;
    cout << "Your Score(X): " << play -> getxScore() << string(10, ' ')
         << "Player2 Score(O): " << play -> getyScore() << endl;
    cout << endl << "Thank you for playing!";

    delete play;

    return 0;

}



void TicTacToe::setPlayerMove(int move) {

    if (board[move] == 'X' || board[move] == 'O') {
        throw("That position is already taken. Please try another one");
    }

    playerMove = move;
    board[playerMove] = 'X';


}

void TicTacToe::randomMove() {

    do {
        computerMove = rand() % 9;
    } while (board[computerMove] == 'X' || board[computerMove] == 'O');

    board[computerMove] = 'O';

}



void TicTacToe::displayBoard() {

    cout << string(10, ' ') << string(60, '-') << endl;
    cout << string(34, ' ') << "TIC TAC TOE" << endl;
    cout << string(10, ' ') << string(60, '-') << endl;


    for (int j = 0; j < 3; j++) {
            cout << string(25, ' ') << "|" << string(25, ' ') <<  "|" << endl;
            cout << string(18, ' ') << board[j] << string(6, ' ') << "|"
                 << string(12, ' ') << board[j + 3] << string(12, ' ') << "|"
                 << string(6, ' ') << board[j + 6] << string(18, ' ') << endl;
            cout << string(25, ' ') << "|" << string(25, ' ') <<  "|" << endl;
            cout << string(10, ' ') << string(15, '-') << "T" << string(25, '-') << "T" << string(15, '-') << endl;

        }


}


bool TicTacToe::checkWinner(int counter) {

    for (int i = 0; i < 3; i++) {
        // check rows
        if (board[i] == 'X' && board[i + 3] == 'X' && board[i + 6] == 'X') {
            winner = 'X';
            xScore +=1;
            return true;
        }
        if (board[i] == 'O' && board[i + 3] == 'O' && board[i + 6] == 'O') {
            winner = 'O';
            yScore +=1;
            return true;
        }
        //check columns
        if (board[i * 3] == 'X' && board[i * 3 + 1] == 'X' && board[i * 3 + 2] == 'X') {
            winner = 'X';
            xScore +=1;
            return true;
        }
        if (board[i * 3] == 'O' && board[i * 3 + 1] == 'O' && board[i * 3 + 2] == 'O') {
            winner = 'O';
            yScore +=1;
            return true;
        }

    }


    //  check diagonal left to right
    if (board[0] == 'X' && board[4] == 'X' && board[8] == 'X') {
        winner = 'X';
        xScore++;
        return true;
    }

    if (board[0] == 'O' && board[4] == 'O' && board[8] == 'O') {
        winner = 'O';
        yScore++;
        return true;
    }

    // check diagonal right to left
    if (board[2] == 'X' && board[4] == 'X' && board[6] == 'X') {
        winner = 'X';
        xScore++;
        return true;
    }

    if (board[2] == 'O' && board[4] == 'O' && board[6] == 'O') {
        winner = 'O';
        yScore++;
        return true;
    }

    if (counter > 8) {
        winner = '-';
        cout << "All the positions were used. There is no winner";
        return true;
    }

    return false;

}

void TicTacToe:: resetBoard() {
    for (int i = 0; i < 9; i++) {
        board[i] = '-';
    }
    winner = '-';
}

char TicTacToe::getWinner() {
    return winner;
}

int TicTacToe::getxScore() {
    return xScore;
}

int TicTacToe::getyScore() {
    return yScore;
}
