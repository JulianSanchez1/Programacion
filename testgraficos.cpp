#include <graphics.h>
#include <iostream>

using namespace std;

void waitForLeftMouseClick();


int main()
{
  int gd = DETECT,gm;
initgraph (& gd,& gm,NULL);
    initwindow(800,600); //open a 400x300 graphics window

    // delete these lines and replace them with your own code:
    settextstyle(1,0,3);
    setcolor(2);
    outtextxy(100,200,"Consola grafica");
    setcolor(4);
    outtextxy(100,300,"Ahora un circulo:");
    setcolor( 14 );
    circle(200,400,50);

    // while(!kbhit());     // wait for user to press a key
    waitForLeftMouseClick(); // use one or the other of these--not both


    closegraph();        //close graphics window
	return 0;
}

void waitForLeftMouseClick()
{
    clearmouseclick(WM_LBUTTONDOWN);
    const int DELAY = 50; // Milliseconds of delay between checks
    int x, y;
    while (!ismouseclick(WM_LBUTTONDOWN))
        delay(DELAY);
    getmouseclick(WM_LBUTTONDOWN, x, y);
}
