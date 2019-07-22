#include<iostream>
#include<stdio.h>
#include <winbgim.h>
#include<string.h>
using namespace std;
void waitForLeftMouseClick();
void dibujar(struct datos *curse,int largo);
void ordenar(struct datos *curse, int Long);
    struct datos{
    char nombre[50];
    float notas[4],notaf,codigo;
    };
 int main(){
    int cant=4;
    float porcena=0,porcenr=0,apro=0,repro=0,contador=0;
    cout<<"Programa para saber el porcentaje de los alumnos aprobados y reprobados y el numero de estudiantes con codigo anterior a 20182"<<endl<<endl;
    struct datos curso[cant];
    for (int i=0;i<cant;i++){
        cout<<"\ningrese el codigo del alumno "<<i+1<<" : ";
        cin>>curso[i].codigo;
        fflush(stdin);
        cout<<"\ningrese el nombre del alumno "<<i+1<<" : ";
        gets(curso[i].nombre);
        for (int a=0;a<4;a++){
        cout<< "\ningrese la nota "<< a+1 <<" : ";
        cin>>curso[i].notas[a];
        cout<<endl;
		}
        curso[i].notaf=(curso[i].notas[0]+curso[i].notas[1]+curso[i].notas[2]+curso[i].notas[3])/4;
        if(curso[i].notaf>=3){
            apro++;
        }
        else{
            repro++;
        }
        if(curso[i].codigo<20182000000){
            contador++;
		}
		cout<<"----------------------------------------------------------";
      }
    porcena=apro*100/cant;
    porcenr=repro*100/cant;
    cout<<"\nPorcentaje de estudiantes aprobados es:  "<<porcena<<"%"<<endl;
    cout<<"\nPorcentaje de estudiantes reprobados es:  "<<porcenr<<"%"<<endl;
    cout<<"\nNumero de estudiantes con codigo menor a 20182:  "<<contador<<endl<<endl;

    ordenar(&curso[0],cant);
}

void ordenar(struct datos *curse, int Long){
    struct datos m;
    for(int i=0;i<Long;i++){
    	for(int j=i+1;j<Long;j++){
    	      if(curse[i].notaf>curse[j].notaf){
    			m=curse[i];
    			curse[i]=curse[j];
    			curse[j]=m;
		}
          }
   }
   for(int i=0;i<Long;i++){
   	cout<<"----------------------------------------------------------";
   	 cout<<"\nEl codigo del alumno "<<i+1<<" es : "<<curse[i].codigo<<endl;
     cout<<"\nEl nombre del alumno "<<i+1<<" es : "<<curse[i].nombre<<endl;
     for (int a=0;a<4;a++){
        cout<< "\n la nota "<< a+1 <<" es : "<<curse[i].notas[a]<<endl;
		}
   	cout<<"\nla nota final del del alumno "<<i+1<<" es : "<<curse[i].notaf<<endl;
}
 dibujar(&curse[0],Long);
}
void dibujar(struct datos *curse,int largo){
     int a[10],b[6];
     float c;
     for(int i=0;i<10;i++){
      if(i<5){
        a[i]=0;
      }
      else{
        a[i]=520;
      }
     }
     for(int i=0;i<largo;i++){
      if(curse[i].notaf<=1){
        a[0]++;
      }
      if(1<curse[i].notaf && curse[i].notaf<=2){
        a[1]++;
      }
      if(2<curse[i].notaf && curse[i].notaf<=3){
        a[2]++;
      }
      if(3<curse[i].notaf && curse[i].notaf<=4){
        a[3]++;
      }
      if(4<curse[i].notaf && curse[i].notaf<=5){
        a[4]++;
      }
   }
    c=470/largo;
    for(int i=0;i<5;i++){
        a[i+5]=520-(a[i]*c);
    }
    initwindow(600,600);
    setbkcolor(15);
    bar(0,0,600,600);
    setcolor(0);
    for (int y = 50; y <= 520; y+=47) {
     line(40,y,560,y);
    }
    settextstyle(1,0,1.5);
    setcolor(0);
    outtextxy(150,0,"NOTAS DEL CURSO");
    settextstyle(1,0,1);
    setcolor(0);
    outtextxy(0,40,"100%");
    outtextxy(0,87,"90%");
    outtextxy(0,134,"80%");
    outtextxy(0,181,"70%");
    outtextxy(0,228,"60%");
    outtextxy(0,275,"50%");
    outtextxy(0,322,"40%");
    outtextxy(0,369,"30%");
    outtextxy(0,416,"20%");
    outtextxy(0,463,"10%");
    outtextxy(0,510,"0%");
    outtextxy(80,525,"0-1");
    outtextxy(184,525,"1-2");
    outtextxy(288,525,"2-3");
    outtextxy(392,525,"3-4");
    outtextxy(496,525,"4-5");
    setfillstyle(1,1);
    bar(75,a[5],129,520);
    bar(179,a[6],233,520);
    bar(283,a[7],337,520);
    bar(387,a[8],441,520);
    bar(491,a[9],545,520);
    waitForLeftMouseClick();
    closegraph();
    //Grafico De Torta
    c=360/largo;
    for(int i=0;i<5;i++){
     b[i]=a[i]*c;
     if(i>0){
     b[i]=b[i]+b[i-1];
     }
    }
  b[5]=0;
    initwindow(600,600);
    setbkcolor(15);
    bar(0,0,600,600);
    settextstyle(1,0,2);
    setcolor(0);
    outtextxy(150,0,"NOTAS DEL CURSO");

    for(int i=0;i<150;i++){
    if(b[5] != b[0]){
    setcolor(14);
    arc(300,300,b[5],b[0],i);
    }
    if(b[0] != b[1]){
    setcolor(6);
    arc(300,300,b[0],b[1],i);
    }
    if(b[1] != b[2]){
    setcolor(7);
    arc(300,300,b[1],b[2],i);
    }
    if(b[2] != b[3]){
    setcolor(8);
    arc(300,300,b[2],b[3],i);
    }
    if(b[3] != b[4]){
    setcolor(9);
    arc(300,300,b[3],b[4],i);
    }
    }
    settextstyle(1,0,1);
    setcolor(0);
    outtextxy(50,500,"0 a 1: ");
    outtextxy(50,550,"1 a 2: ");
    outtextxy(200,500,"2 a 3: ");
    outtextxy(200,550,"3 a 4: ");
    outtextxy(350,500,"4 a 5: ");
    setfillstyle(1,14);
    fillellipse(135,510,10,10);
    setfillstyle(1,6);
    fillellipse(135,560,10,10);
    setfillstyle(1,7);
    fillellipse(285,510,10,10);
    setfillstyle(1,8);
    fillellipse(285,560,10,10);
    setfillstyle(1,9);
    fillellipse(435,510,10,10);
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

