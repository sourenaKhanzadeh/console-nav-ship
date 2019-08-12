//
// Created by Owner on 8/11/2019.
//

#ifndef ASTEROID_PREFS_H
#define ASTEROID_PREFS_H

#include <conio.h>
#include "windows.h"
#include "string"
#include <iostream>

extern HANDLE console;
inline COORD CursorPosition;
inline CONSOLE_SCREEN_BUFFER_INFO csInfo;


void gotoXY(int x, int y);

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
#endif //ASTEROID_PREFS_H
