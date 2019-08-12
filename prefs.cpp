//
// Created by Owner on 8/11/2019.
//

#include "prefs.h"

HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);

void gotoXY(int x, int y){
    CursorPosition.X = x;
    CursorPosition.Y = y;
    SetConsoleCursorPosition(console, CursorPosition);
}

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
