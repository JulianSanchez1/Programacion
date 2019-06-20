#include <winbgim.h>
#include <iostream>

using namespace std;

void waitForLeftMouseClick();
void dibujarfigura();

int main()
{
  
}

void dibujarfigura(){ 

    t=r+50;
    initwindow(t,t);

    arc(253,96,315,135,37);
    line((50+(2*r)),(50+r),(50+(4*r)),(50+r));
    line(50,(50+r),(50+((3*r)/2)),(50+((3*r)/2)));
    line((50+((3*r)/2)),(50+((5*r)/2)),50,(50+((7*r)/2));
    line(50,(50+((7*r)/2)),(50+((3*r)/2)),(50+((7*r)/2)));
    line((50+((3*r)/2)),(50+((7*r)/2)),(50+((3*r)/2)),(50+(10*r)));
    waitForLeftMouseClick();
    closegraph();
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
