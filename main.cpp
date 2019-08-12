#include <iostream>
#include "prefs.h"

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
    std::cout << "("  << rows  << ", " << cols  << ")" << std::endl;

    Sleep(1000);
    // press to quit
    getch();

    return EXIT_SUCCESS;
}