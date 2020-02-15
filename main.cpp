/**********|**********|**********|
Program: TT02.1191302208.Wan Aqil Qayyim Bin Wan Nor Asmadi.cpp
Course: Bachelor of Computer Science
Year: 2019/20 Trimester 2
Name: Wan Aqil Qayyim Bin Wan Nor Asmadi
ID: 1191302208
Lecture Section: TC01
Tutorial Section: TT02
Email: 1aqilqayyim@gmail.com
Phone: 017-3148442
**********|**********|**********/
#include <iostream>
#include <stdlib.h>
#include "headers/checker_input.h"

using namespace std;

//Additional functions to make the program more efficient for users to use
void clearscreen() {
    system("cls");
}

int main() {
    int choice;
    string player = "a";

    cout << " ***************WELCOME TO****************" << endl;
    cout << " *************CHECKERS GAME***************" << endl;

    cout << "             1. Start Game " << endl;
    cout << "             2. Exit " << endl;
    cout << "     Please Enter your choice to continue " << endl;
    cout << " *****************************************" << endl;
    cin >> choice;
    clearscreen();

    if (choice == 1) {
        while (player != "c") {
            checker_board::display_board();
            cout << "LIGHT PIECE makes the first move\n";
            checker_input::input("a");

            clearscreen();
            checker_board::display_board();

            cout << "DARK PIECE makes the second move\n";
            checker_input::input("b");
            clearscreen();
        }
    } else {
        cout << " ***************GAME OVER*****************" << endl;
        cout << " **********THANK YOU FOR PLAYING**********" << endl;
    }
    return 0;
}