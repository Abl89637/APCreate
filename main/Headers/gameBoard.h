

class gameBoard {
    public:
    gameBoard();
    
    private:
    int values [9] [9] = {0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0, 0},;
    int selectedValues [9] = {0, 0, 0, 0, 0, 0, 0, 0, 0};
    

    column column0;
    column column1;
    column column2;
    column column3;
    column column4;
    column column5;
    column column6;
    column column7;
    column column8;
    row row0;
    row row1;
    row row2;
    row row3;
    row row4;
    row row5;
    row row6;
    row row7;
    row row8;
    int rowsArr[9] = {row0, row1, row2, row3, row4, row5,row6, row7, row8}
    int columnsArr[9] = {column0, column1, column2, column3, column4, column5,column6, column7, column8}

    void randomBoard();

    void isConflict();

    void pickSquare();

    void showBoard();
}


