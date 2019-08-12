#include <iostream>
#include <conio.h>
#include "windows.h"
#include "string.h"

HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
COORD CursorPosition;
CONSOLE_SCREEN_BUFFER_INFO csInfo;


void gotoXY(int x, int y){
    CursorPosition.X = x;
    CursorPosition.Y = y;
    SetConsoleCursorPosition(console, CursorPosition);
}

inline int wherex(){return CursorPosition.X;}
inline int wherey(){return CursorPosition.Y;}
inline void clsSrc(){system("cls");}


struct Player{
    std::string str = ">>";
    __int8 x;
    __int8 y;
    void const operator++(){this->x++;}
    void const operator--(){this->x--;}
    void const operator*(){this->y++;}
    void const operator!(){this->y--;}
};




int main(){
    // Take The default word
    WORD word;
    int cols, rows;

    // Construct a player
    Player a;a.x=0;a.y=0;

    // store console colors
    GetConsoleScreenBufferInfo(console, &csInfo);
    word = csInfo.wAttributes;
    cols = csInfo.srWindow.Right - csInfo.srWindow.Left + 1;
    rows = csInfo.srWindow.Bottom - csInfo.srWindow.Top + 1;

    // change console color
    SetConsoleTextAttribute(console, FOREGROUND_RED | BACKGROUND_INTENSITY);

    bool run = true;
    // Games mainloop
    while(run){
        //clear the screen
        clsSrc();

        gotoXY(a.x, a.y);
        std::cout << a.str;


        // delay the game
        Sleep(10);

        // get user input
        switch(getch()){
            case 'd':a.str=">>";++a;break;
            case 'a':a.str="<<";--a;break;
            case 's':*a;break;
            case 'w':a.y>0?!a:*a;break;
            default:run=false;break;
        }
    }

    // restore console color and exit
    SetConsoleTextAttribute(console, word);

    clsSrc();

    gotoXY(rows, cols);
    std::cout << ".........Goodbye Word..........." << std::endl;

    return EXIT_SUCCESS;
}