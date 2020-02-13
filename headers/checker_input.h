//
// Created by LENOVO on 13/2/2020.
//
#include <iostream>
#include "board.h"

#ifndef CHECKER_CHECKER_INPUT_H
#define CHECKER_CHECKER_INPUT_H

#endif //CHECKER_CHECKER_INPUT_H

using namespace std;

namespace checker_input {
    void inputDark();
    void inputLight();

    void handle_input() {
        int input;
        char turn = 'b';
        bool game_running = false;
        cout<< "***********CHECKER GAME************\n";
        cout<< "Player 1 [b represents DARK piece]\n";
        cout<< "Player 2 [a represent LIGHT piece]\n";
        cout<< "3 Exit\n";
        cout<< "PLEASE CHOOSE A PLAYER (1 OR 2) TO PLAY:"<<endl;
        cin >> input;
        while(input == 1 || input == 2)
        {
            checker_board::display_board();
            switch(input) {
                case 1:
                    cout<< "--Player 1 [b]--\n";
                    inputDark();
                    checker_input::inputDark();
                    checker_board::OutputDark();
                    break;
                case 2:
                    cout<< "--Player 2 [a]--\n";
                    checker_input::inputLight();
                    checker_board::OutputLight();
                    break;
                default:
                    break;
            }
        }
        cout << "Exiting game...";
    }

    void inputDark() {
        char Board[10][10], a, b, pos[2];
        int x, y, dir;
        Board[0][0] = b;
        Board[0][2] = b;
        Board[0][4] = b;
        Board[0][6] = b;
        Board[1][1] = b;
        Board[1][3] = b;
        Board[1][5] = b;
        Board[1][7] = b;
        Board[2][0] = b;
        Board[2][2] = b;
        Board[2][4] = b;
        Board[2][6] = b;
        Board[3][1] = b;
        Board[3][3] = b;
        Board[3][5] = b;
        Board[3][7] = b;

        cout << "Enter Position ( Like A1, G6, C3 etc....)" << endl;
        cin >> pos;

        if (pos[0] == 'A')
            x = 0;
        else if (pos[0] == 'B')
            x = 1;
        else if (pos[0] == 'C')
            x = 2;
        else if (pos[0] == 'D')
            x = 3;
        else if (pos[0] == 'E')
            x = 4;
        else if (pos[0] == 'F')
            x = 5;
        else if (pos[0] == 'G')
            x = 6;
        else if (pos[0] == 'H')
            x = 7;
        else if (pos[0] == 'I')
            x = 8;
        else if (pos[0] == 'J')
            x = 9;
        else
            cout << "Enter Again" << endl;

        cout << " Which Direction? " << endl;
        cout << "1 Upper-Left Diagonal , 2 Upper-Right Diagonal " << endl;
        cout << "3 Lower-Left Diagonal , 4 Lower-Right Diagonal " << endl;
        cin >> dir;

        // Upper Left Diagonal
        if (dir == 1) {
            Board[y][x] = ' ';
            Board[y - 1][x - 1] = ' ';
            y -= 2;
            x -= 2;
            Board[y][x] = b;
            checker_board::OutputDark();
        }
            //Upper Right Diagonal
        else if (dir == 2) {
            Board[y][x] = ' ';
            Board[y - 1][x + 1] = ' ';
            y -= 2;
            x += 2;
            Board[y][x] = a;
            checker_board::OutputDark();
        }
            //Lower Left Diagonal
        else if (dir == 3) {
            Board[y][x] = ' ';
            Board[y + 1][x - 1] = ' ';
            y += 2;
            x -= 2;
            Board[y][x];
            checker_board::OutputDark();
        }
            //Lower Right Diagonal
        else if (dir == 4) {
            Board[y][x] = ' ';
            Board[y + 1][x + 1] = ' ';
            y += 2;
            x += 2;
            Board[y][x] = a;
            checker_board::OutputDark();
        } else
            cout << "Please Try Again" << endl;
    }

    void inputLight() {
        char Board[10][10], a, b, pos[2];
        int x, y, dir;
        Board[6][0] = a;
        Board[6][2] = a;
        Board[6][4] = a;
        Board[6][6] = a;
        Board[7][1] = a;
        Board[7][3] = a;
        Board[7][5] = a;
        Board[7][7] = a;
        Board[8][0] = a;
        Board[8][2] = a;
        Board[8][4] = a;
        Board[8][6] = a;
        Board[9][1] = a;
        Board[9][3] = a;
        Board[9][5] = a;
        Board[9][7] = a;

        cout << "Enter Position ( Like A1, G6, C3 etc....)" << endl;
        cin >> pos;

        if (pos[1] == 'A')
            y = 0;
        else if (pos[1] == 'B')
            y = 1;
        else if (pos[1] == 'C')
            y = 2;
        else if (pos[1] == 'D')
            y = 3;
        else if (pos[1] == 'E')
            y = 4;
        else if (pos[1] == 'F')
            y = 5;
        else if (pos[1] == 'G')
            y = 6;
        else if (pos[1] == 'H')
            y = 7;
        else if (pos[1] == 'I')
            y = 8;
        else if (pos[1] == 'J')
            y = 9;
        else
            cout << "Enter Again" << endl;

        cout << " Which Direction? " << endl;
        cout << "1 Upper-Left Diagonal , 2 Upper-Right Diagonal " << endl;
        cout << "3 Lower-Left Diagonal , 4 Lower-Right Diagonal " << endl;
        cin >> dir;

        // Upper Left Diagonal
        if (dir == 1) {
            Board[y][x] = ' ';
            Board[y - 1][x - 1] = ' ';
            y -= 2;
            x -= 2;
            Board[y][x];
            checker_board::OutputLight();
        }
            //Upper Right Diagonal
        else if (dir == 2) {
            Board[y][x] = ' ';
            Board[y - 1][x + 1] = ' ';
            y -= 2;
            x += 2;
            Board[y][x] = a;
            checker_board::OutputLight();
        }
            //Lower Left Diagonal
        else if (dir == 3) {
            Board[y][x] = ' ';
            Board[y + 1][x - 1] = ' ';
            y += 2;
            x -= 2;
            Board[y][x];
            checker_board::OutputLight();
        }
            //Lower Right Diagonal
        else if (dir == 4) {
            Board[y][x] = ' ';
            Board[y + 1][x + 1] = ' ';
            y += 2;
            x += 2;
            Board[y][x] = a;
            checker_board::OutputLight;
        } else
            cout << " Please Try Again " << endl;
    }
}