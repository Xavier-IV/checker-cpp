//
// Created by LENOVO on 13/2/2020.
//
#include <iostream>
#include "checker_converter.h"

#ifndef CHECKER_BOARD_H
#define CHECKER_BOARD_H

#endif //CHECKER_BOARD_H

using namespace std;

namespace checker_board {
    //initialize the checkers board by implementing 2D Array interface
    int board[10][10] =
            {
                    {0, 2, 0, 2, 0, 2, 0, 2, 0, 2},
                    {2, 0, 2, 0, 2, 0, 2, 0, 2, 0},
                    {0, 2, 0, 2, 0, 2, 0, 2, 0, 2},
                    {2, 0, 2, 0, 2, 0, 2, 0, 2, 0},
                    {0, 3, 0, 3, 0, 3, 0, 3, 0, 3},
                    {3, 0, 3, 0, 3, 0, 3, 0, 3, 0},
                    {0, 1, 0, 1, 0, 1, 0, 1, 0, 1},
                    {1, 0, 1, 0, 1, 0, 1, 0, 1, 0},
                    {0, 1, 0, 1, 0, 1, 0, 1, 0, 1},
                    {1, 0, 1, 0, 1, 0, 1, 0, 1, 0},
            };

    //Display the checkers board for users
    void display_board() {
        int i;
        for (i = 0; i < 9; i++) {
            cout << "  |---+---+---+---+---+---+---+---+---+---|" << endl;
            cout << i + 1 << " | " << checker_converter::convert(board[i][0])
                 << " | " << checker_converter::convert(board[i][1]) << " | " << checker_converter::convert(board[i][2])
                 << " | " << checker_converter::convert(board[i][3]) << " | " << checker_converter::convert(board[i][4])
                 << " | " << checker_converter::convert(board[i][5]) << " | " << checker_converter::convert(board[i][6])
                 << " | " << checker_converter::convert(board[i][7]) << " | " << checker_converter::convert(board[i][8])
                 << " | " << checker_converter::convert(board[i][9]) << " |" << endl;
        }
        cout << "  |---+---+---+---+---+---+---+---+---+---|" << endl;
        cout << "10| " << checker_converter::convert(board[i][0])
             << " | " << checker_converter::convert(board[i][1]) << " | " << checker_converter::convert(board[i][2])
             << " | " << checker_converter::convert(board[i][3]) << " | " << checker_converter::convert(board[i][4])
             << " | " << checker_converter::convert(board[i][5]) << " | " << checker_converter::convert(board[i][6])
             << " | " << checker_converter::convert(board[i][7]) << " | " << checker_converter::convert(board[i][8])
             << " | " << checker_converter::convert(board[i][9]) << " |" << endl;
        cout << "  |---+---+---+---+---+---+---+---+---+---|" << endl;
        cout << "    a   b   c   d   e   f   g   h   i   j  " << endl;
    }
}