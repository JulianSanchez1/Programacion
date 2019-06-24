#include <winbgim.h>
#include <iostream>

using namespace std;

void waitForLeftMouseClick();
void dibujarfigura();

int main()
{
  dibujarfigura();
}

void dibujarfigura(){
    int r,lx,ly;
    cout<<"Digite el valor de r";
    cin>>r;
    lx=r*4;
    ly=r*5;
    initwindow(lx,ly);
    arc(r,r,0,180,r);
    arc((r*3),r,270,360,r);
    arc(((3*r)/2),((7*r)/2),270,360,((3*r)/2));
    line(50,r,((3*r)/2),((3*r)/2));
    line(((3*r)/2),((5*r)/2),50,((7*r)/2));
    line(50,((7*r)/2),((3*r)/2),((7*r)/2));
    line(((3*r)/2),((7*r)/2),((3*r)/2),(5*r));
    line((2*r),r,(4*r),r);
    line((3*r),(r*2),(3*r),((7*r)/2));
    waitForLeftMouseClick();
    closegraph();

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
