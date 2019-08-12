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



struct Tele{
    const char amm = '*';
    __int8 x;
    __int8 y;
    bool dir;
    void update();
    void const operator++(){this->x++;}
    void const operator--(){this->x--;}
    void const operator*(){this->y++;}
    void const operator!(){this->y--;}
};

void Tele::update() {
    int len = 55;
    while(len >=0){
        switch (dir){
            case true:++(*this);break;
            default:--(*this);break;
        }

        gotoXY(this->x, this->y);
        std::cout << this->amm;
        len--;
        Sleep(10);
        gotoXY(dir?this->x-1:this->x+2, this->y);
        std::cout << " ";
    }

}

struct Player{
    std::string str = ">>";
    __int8 x;
    __int8 y;
    Tele tele;
    void fire();
    void collision();
    void const operator++(){this->x++;}
    void const operator--(){this->x--;}
    void const operator*(){this->y++;}
    void const operator!(){this->y--;}
};

void Player::fire() {
    tele.x = this->x;
    tele.y = this->y;
    tele.update();

    // set to the position of ammo
    this->x = tele.x;
    this->y = tele.y;
}

void Player::collision() {
    if(this->x < 0 )this->x=1;
}

int main(){
    // Take The default word
    WORD word;
    int cols, rows;

    // Construct a player
    Player player;player.x=0;player.y=0;

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

        gotoXY(player.x, player.y);
        std::cout << player.str;


        // delay the game
        Sleep(10);

        // get user input
        switch(getch()){
            case 'd':player.tele.dir=true;player.str=">>";++player;break;
            case 'a':player.tele.dir=false;player.str="<<";--player;break;
            case 's':*player;break;
            case 'w':player.y>0?!player:*player;break;
            case 'f':player.fire();break;
            default:run=false;break;
        }

        // detect player collision
        player.collision();
    }

    // restore console color and exit
    SetConsoleTextAttribute(console, word);

    clsSrc();

    gotoXY(rows, cols);
    std::cout << ".........Goodbye Word..........." << std::endl;
    std::cout << rows  << " " << cols << std::endl;
    return EXIT_SUCCESS;
}