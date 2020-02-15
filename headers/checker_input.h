//
// Created by LENOVO on 13/2/2020.
//
#include <iostream>
#include "checker_board.h"
#include <bits/stdc++.h>

#ifndef CHECKER_CHECKER_INPUT_H
#define CHECKER_CHECKER_INPUT_H

#endif //CHECKER_CHECKER_INPUT_H

using namespace std;

namespace checker_input {
    int dir, x = 0, y = 0;
    string columnInput;
    int rowInput;

    map<string, int> columnReference{
            {"a", 1},
            {"b", 2},
            {"c", 3},
            {"d", 4},
            {"e", 5},
            {"f", 6},
            {"g", 7},
            {"h", 8},
            {"i", 9},
            {"j", 10}};

    void inputColumn() {
        cout << "Please enter which column for light piece? [a, b, c, ..., j]" << endl;
        cin >> columnInput;

        if (columnReference[columnInput]) {
            y = columnReference[columnInput] - 1;
        } else {
            cout << " Please Enter Again " << endl;
            return inputColumn();
        }
    }

    void inputRow() {
        cout << "Please enter which row for light piece?" << endl;
        cin >> rowInput;

        if (rowInput >= 1 && rowInput <= 10) {
            x = rowInput - 1;
        } else {
            cout << " Please Enter Again " << endl;
            inputRow();
        }
    }

    void promptDirectionMove(const string& pieceColor, bool isKing = false) {
        // Users are allowed to select which direction to move the light pieces
        cout << "Please choose which direction would you like to move?" << endl;
        cout << "Choose the following direction below:" << endl;

        if (pieceColor == "a") {
            cout << "1.Upper Left Diagonal , 2.Upper Right Diagonal " << endl;
        } else if (pieceColor == "b"){
            cout << "3.Lower Left Diagonal , 4.Lower Right Diagonal " << endl;
        } else if (isKing) {
            cout << "1.Upper Left Diagonal , 2.Upper Right Diagonal " << endl;
            cout << "3.Lower Left Diagonal , 4.Lower Right Diagonal " << endl;
        }

        cin >> dir;
    }

    void canEat(int pieceCode) {
        cout << " ================ " << endl;
        cout << " CAN EAT ? " << pieceCode << endl;
        cout << " TARGET TO EAT ? " << checker_board::board[x][y] << "x" << x << "y" << y << endl;
        cout << " ================ " << endl;
        if(checker_board::board[x][y] != pieceCode && checker_board::board[x][y] != 3) {
            cout << " ================ " << endl;
            cout << " CONSUMED A PIECE " << endl;
            cout << " ================ " << endl;

            switch (dir) {
                case 1 :
                    x = x - 2;
                    y = y - 2;
                    checker_board::board[x-1][y-1] = 3;
                    break;
                case 2 :
                    x = x - 2;
                    y = y + 2;
                    checker_board::board[x-1][y+1] = 3;
                    break;
                case 3 :
                    x = x + 2;
                    y = y - 2;
                    checker_board::board[x+1][y-1] = 3;
                    break;
                case 4 :
                    x = x + 2;
                    y = y + 2;
                    checker_board::board[x+1][y+1] = 3;
                    break;
            }
        }
    }

    void input(string pieceColor) {
        checker_input::inputColumn();
        checker_input::inputRow();

        checker_board::board[x][y] = 3;

        checker_input::promptDirectionMove(pieceColor);
        switch (dir) {
            case 1 :
                x = x - 1;
                y = y - 1;
                break;
            case 2 :
                x = x - 1;
                y = y + 1;
                break;
            case 3 :
                x = x + 1;
                y = y - 1;
                break;
            case 4 :
                x = x + 1;
                y = y + 1;
                break;
            default :
                cout << " Invalid Move Please Try Again " << endl;
                return pieceColor == "a" ? promptDirectionMove("a") : promptDirectionMove("b");
        }
        checker_input::canEat(pieceColor == "a" ? 1 : 2);

        checker_board::board[x][y] = pieceColor == "a" ? 1 : 2;
    }

}