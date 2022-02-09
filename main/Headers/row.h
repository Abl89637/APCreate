#include <iostream>
#include "gameBoard.h"


class row {

    private:
    int rowValues [9];

    public:
    column(int rowNumber);


    int updateValues(int rowNumber) {

        for (int i; i < 9; i++) {

            rowValues [i] = gameBoard [rowNumber][i];
        }

    }


}