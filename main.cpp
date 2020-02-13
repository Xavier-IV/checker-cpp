/**********|**********|**********|
Program: TT02.1191302208.Wan Aqil Qayyim Bin Wan Nor Asmadi.cpp
Course: Programming Fundamentals
Year: 2019/20 Trimester 2
Name: Wan Aqil Qayyim Bin Wan Nor Asmadi
ID: 1191302208
Lecture Section: TT02
Tutorial Section: TT02
Email: 1aqilqayyim@gmail.com
Phone: 017-3148442
**********|**********|**********/

#include <iostream>
using namespace std;

char board[10][10]=
{
    {' ', 'b', ' ', 'b', ' ', 'b', ' ', 'b', ' ', 'b'},
    {'b', ' ', 'b', ' ', 'b', ' ', 'b', ' ', 'b', ' '},
    {' ', 'b', ' ', 'b', ' ', 'b', ' ', 'b', ' ', 'b'},
    {'b', ' ', 'b', ' ', 'b', ' ', 'b', ' ', 'b', ' '},
    {' ', '#', ' ', '#', ' ', '#', ' ', '#', ' ', '#'},
    {'#', ' ', '#', ' ', '#', ' ', '#', ' ', '#', ' '},
    {' ', 'a', ' ', 'a', ' ', 'a', ' ', 'a', ' ', 'a'},
    {'a', ' ', 'a', ' ', 'a', ' ', 'a', ' ', ' ', ' '},
    {' ', 'a', ' ', 'a', ' ', 'a', ' ', 'a', ' ', 'a'},
    {'a', ' ', 'a', ' ', 'a', ' ', 'a', ' ', 'a', ' '},

};

void display_board()
{
    cout<<"  |---+---+---+---+---+---+---+---+---+---|" << endl;
    cout<<"1 | "<<board[0][0]<<" | "<<board[0][1]<<" | "<<board[0][2]<<" | "<<board[0][3]<<" | "<<board[0][4]<<" | "
        <<board[0][5]<<" | "<<board[0][6]<<" | "<<board[0][7]<<" | "<<board[0][8]<<" | "<<board[0][9]<<" | "<<endl;
    cout<<"  |---+---+---+---+---+---+---+---+---+---|" << endl;
    cout<<"2 | "<<board[1][0]<<" | "<<board[1][1]<<" | "<<board[1][2]<<" | "<<board[1][3]<<" | "<<board[1][4]<<" | "
        <<board[1][5]<<" | "<<board[1][6]<<" | "<<board[1][7]<<" | "<<board[1][8]<<" | "<<board[1][9]<<" | "<<endl;
    cout<<"  |---+---+---+---+---+---+---+---+---+---|" << endl;
    cout<<"3 | "<<board[2][0]<<" | "<<board[2][1]<<" | "<<board[2][2]<<" | "<<board[2][3]<<" | "<<board[0][4]<<" | "
        <<board[2][5]<<" | "<<board[2][6]<<" | "<<board[2][7]<<" | "<<board[2][8]<<" | "<<board[2][9]<<" | "<<endl;
    cout<<"  |---+---+---+---+---+---+---+---+---+---|" << endl;
    cout<<"4 | "<<board[3][0]<<" | "<<board[3][1]<<" | "<<board[3][2]<<" | "<<board[3][3]<<" | "<<board[3][4]<<" | "
        <<board[3][5]<<" | "<<board[3][6]<<" | "<<board[3][7]<<" | "<<board[3][8]<<" | "<<board[3][9]<<" | "<<endl;
    cout<<"  |---+---+---+---+---+---+---+---+---+---|" << endl;
    cout<<"5 | "<<board[4][0]<<" | "<<board[4][1]<<" | "<<board[4][2]<<" | "<<board[4][3]<<" | "<<board[0][4]<<" | "
        <<board[4][5]<<" | "<<board[4][6]<<" | "<<board[4][7]<<" | "<<board[4][8]<<" | "<<board[4][9]<<" | "<<endl;
    cout<<"  |---+---+---+---+---+---+---+---+---+---|" << endl;
    cout<<"6 | "<<board[5][0]<<" | "<<board[5][1]<<" | "<<board[5][2]<<" | "<<board[5][3]<<" | "<<board[5][4]<<" | "
        <<board[5][5]<<" | "<<board[5][6]<<" | "<<board[5][7]<<" | "<<board[5][8]<<" | "<<board[5][9]<<" | "<<endl;
    cout<<"  |---+---+---+---+---+---+---+---+---+---|" << endl;
    cout<<"7 | "<<board[6][0]<<" | "<<board[6][1]<<" | "<<board[6][2]<<" | "<<board[6][3]<<" | "<<board[6][4]<<" | "
        <<board[6][5]<<" | "<<board[6][6]<<" | "<<board[6][7]<<" | "<<board[6][8]<<" | "<<board[6][9]<<" | "<<endl;
    cout<<"  |---+---+---+---+---+---+---+---+---+---|" << endl;
    cout<<"8 | "<<board[7][0]<<" | "<<board[7][1]<<" | "<<board[7][2]<<" | "<<board[7][3]<<" | "<<board[7][4]<<" | "
        <<board[7][5]<<" | "<<board[7][6]<<" | "<<board[7][7]<<" | "<<board[7][8]<<" | "<<board[7][9]<<" | "<<endl;
    cout<<"  |---+---+---+---+---+---+---+---+---+---|" << endl;
    cout<<"9 | "<<board[8][0]<<" | "<<board[8][1]<<" | "<<board[8][2]<<" | "<<board[8][3]<<" | "<<board[8][4]<<" | "
        <<board[8][5]<<" | "<<board[8][6]<<" | "<<board[8][7]<<" | "<<board[8][8]<<" | "<<board[8][9]<<" | "<<endl;
    cout<<"  |---+---+---+---+---+---+---+---+---+---|" << endl;
    cout<<"10| "<<board[9][0]<<" | "<<board[9][1]<<" | "<<board[9][2]<<" | "<<board[9][3]<<" | "<<board[9][4]<<" | "
        <<board[9][5]<<" | "<<board[9][6]<<" | "<<board[9][7]<<" | "<<board[9][8]<<" | "<<board[9][9]<<" | "<<endl;
    cout<<"  |---+---+---+---+---+---+---+---+---+---|" << endl;
    cout<<"    a   b   c   d   e   f   g   h   i   j  " << endl;
}

void OutputDark()
{
    display_board();
    char a, b;
    int player1=0, player2=0, i, j;
    for(i=0; i<10; i++)
    {
        for(j=0; j<10; j++)
        {
            if(board[i][j] == b)
            player1++;
        }
    }
    for(i=0; i<10; i++)
    {
        for(j=0; j<10; j++)
        {
            if(board[i][j] == a)
            player2++;
        }
    }
}

void OutputLight()
{
    display_board();
    char a, b;
    int player1=0, player2=0, i, j;
    for(i=0; i<10; i++)
    {
        for(j=0; j<10; j++)
        {
            if(board[i][j] == b)
            player1++;
        }
    }
    for(i=0; i<10; i++)
    {
        for(j=0; j<10; j++)
        {
            if(board[i][j] == a)
            player2++;
        }
    }
}
void inputDark()
{
    char Board[10][10], a, b, pos[2];
    int x, y, dir;
    Board[0][0] = b; Board[0][2] = b; Board[0][4] = b; Board[0][6] = b;
    Board[1][1] = b; Board[1][3] = b; Board[1][5] = b; Board[1][7] = b;
    Board[2][0] = b; Board[2][2] = b; Board[2][4] = b; Board[2][6] = b;
    Board[3][1] = b; Board[3][3] = b; Board[3][5] = b; Board[3][7] = b;

    cout<<"Enter Position ( Like A1, G6, C3 etc....)"<<endl;
    cin>> pos;

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
        cout<<"Enter Again"<<endl;

    cout<<" Which Direction? " << endl;
    cout<<"1 Upper-Left Diagonal , 2 Upper-Right Diagonal "<<endl;
    cout<<"3 Lower-Left Diagonal , 4 Lower-Right Diagonal "<<endl;
    cin >> dir;

    // Upper Left Diagonal
    if (dir == 1)
    {
        Board[y][x] = ' ';
        Board[y-1][x-1]= ' ';
        y-=2; x-=2;
        Board[y][x] = b;
        OutputDark();
    }
    //Upper Right Diagonal
    else if (dir == 2)
    {
        Board[y][x] = ' ';
        Board[y-1][x+1] = ' ';
        y-=2; x+=2;
        Board[y][x] = a;
        OutputDark();
    }
    //Lower Left Diagonal
    else if(dir == 3)
    {
        Board[y][x] = ' ';
        Board[y+1][x-1] = ' ';
        y+=2; x-=2;
        Board[y][x];
        OutputDark();
    }
    //Lower Right Diagonal
    else if (dir == 4)
    {
       Board[y][x] = ' ';
       Board[y+1][x+1] = ' ';
       y+=2; x+=2;
       Board[y][x] = a;
       OutputDark();
    }
    else
        cout<< "Please Try Again" << endl;
}

void inputLight()
{
    char Board[10][10], a, b, pos[2];
    int x, y, dir;
    Board[6][0] = a; Board[6][2] = a; Board[6][4] = a; Board[6][6] = a;
    Board[7][1] = a; Board[7][3] = a; Board[7][5] = a; Board[7][7] = a;
    Board[8][0] = a; Board[8][2] = a; Board[8][4] = a; Board[8][6] = a;
    Board[9][1] = a; Board[9][3] = a; Board[9][5] = a; Board[9][7] = a;

    cout<<"Enter Position ( Like A1, G6, C3 etc....)"<<endl;
    cin>> pos;

     if(pos[1] == 'A')
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
        cout<<"Enter Again"<<endl;

    cout<<" Which Direction? " << endl;
    cout<<"1 Upper-Left Diagonal , 2 Upper-Right Diagonal "<<endl;
    cout<<"3 Lower-Left Diagonal , 4 Lower-Right Diagonal "<<endl;
    cin >> dir;

    // Upper Left Diagonal
    if (dir == 1)
    {
        Board[y][x] = ' ';
        Board[y-1][x-1]= ' ';
        y-=2; x-=2;
        Board[y][x];
        OutputLight();
    }
    //Upper Right Diagonal
    else if (dir == 2)
    {
        Board[y][x] = ' ';
        Board[y-1][x+1] = ' ';
        y-=2; x+=2;
        Board[y][x] = a;
        OutputLight();
    }
    //Lower Left Diagonal
     else if(dir == 3)
    {
        Board[y][x] = ' ';
        Board[y+1][x-1] = ' ';
        y+=2; x-=2;
        Board[y][x];
        OutputLight();
    }
    //Lower Right Diagonal
    else if (dir == 4)
    {
       Board[y][x] = ' ';
       Board[y+1][x+1] = ' ';
       y+=2; x+=2;
       Board[y][x] = a;
       OutputLight;
    }
    else
        cout<<" Please Try Again "<<endl;
}

int main()
{
    int player;
    char turn = 'b';
    bool game_running = false;
    cout<< "***********CHECKER GAME************\n";
    cout<< "Player 1 [b represents DARK piece]\n";
    cout<< "Player 2 [a represent LIGHT piece]\n";
    cout<< "PLEASE CHOOSE A PLAYER (1 OR 2) TO PLAY:"<<endl;
    cin >> player;
    while(game_running != true)
    {
        display_board();
        if (player == 1)
        {
            cout<< "--Player 1 [b]--\n";
            inputDark();
            OutputDark();
        }
        else if (player == 2)
        {
            cout<< "--Player 2 [a]--\n";
            inputLight();
            OutputLight();
        }
    }
    return 0;
}