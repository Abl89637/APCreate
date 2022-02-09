#include <iostream>
#include "gameBoard.h"


class column {

    private:
    int columnValues [9];

    public:
    column(int columnNmber);


    int updateValues(int coulumnNumber) {

        for (int i; i < 9; i++) {

            columnValues [i] = gameBoard [i][columnNumber]
        }

    }


}