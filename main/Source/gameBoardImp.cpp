#include "gameBoard.h"

gameBoard::gameBoard() {

    cout << values;
}

void gameBoard::randomBoard() {

    srand(time(0));

        int temp;
        temp = (rand() % 9) + 1;
        if(isConflict(temp) == false) {

            

        }
            

        
}

void gameBoard::isConflict(int temp) {

    for (int i = 0; i < 9; i++) {


        if (temp == selectedValues[i]) {

            return true;
        }

        
    }

    return false;
}

void gameBoard::pickSquare() {

    srand(time(0));

    row = rand()%3

    


}

void gameBoard::showBoard() {

    rows[rowNumber] = input;
    rows[columnNumber] = input;

    


}
