#include<iostream>
#include<cmath>
using namespace std;
void areaf4(float r);
void areaf10(float r);
float volumen10(float apot,float lado,float altura);
float volumen4(float base,float alturat,float alturap);
int main()
{
  int a,b;
  float base,alturapi,alturapr,alturatr,apotema,lado,rf4,rf10;
do
{
 cout<<"Seleccione la opcion que desee \n 0.Salir\n 1.Calcular el area \n 2.Calcular el volumen "<<endl;
 cin>>a;
 switch (a) {//calcular area
  case 1:
    cout<<"Seleccione la opcion que desee \n 1.Calcular el area de la figura 4\n 2.Calcular el area de la figura 10\n 3.volver"<<endl;
    cin>>b;
    switch(b){
    case 1://area figura 4
      cout<<"Ingrese R de la figura 4"<<endl;
      cin>>rf4;
      areaf4(rf4);
      break;
      case 2://area figura 10
      cout<<"Ingrese R de la figura 10"<<endl;
      cin>>rf10;
      areaf10(rf10);
      break;
      default:
      a=3;
    }
  break;
  case 2://calcular volumen
  cout<<"Seleccione la opcion que desee \n 1.Calcular el volumen de la figura 4\n 2.Calcular el volumen de la figura 10\n 3.volver"<<endl;
  cin>>b;
  switch(b){
  case 1://volumen figura 4 "Prisma Rectangular"
    cout<<"Ingrese la base del triangulo"<<endl;
    cin>>base;
    cout<<"Ingrese la altura del triangulo"<<endl;
    cin>>alturatr;
    cout<<"Ingrese la altura del prisma"<<endl;
    cin>>alturapr;
    cout<<"El volumen de la figura 4 es: "<<volumen4(base,alturatr,alturapr)<<endl;
    break;
    case 2://volumen figura 10 "Piramide pentagonal"
    cout<<"Ingrese la apotema"<<endl;
    cin>>apotema;
    cout<<"Ingrese el valor de un lado"<<endl;
    cin>>lado;
    cout<<"Ingrese la altura"<<endl;
    cin>>alturapi;
    cout<<"El volumen de la figura 10 es: "<<volumen10(apotema,lado,alturapi)<<endl;
    break;
    default:
    a=3;
  }
  break;
 }
}
while(a != 0);
}

void areaf4(float r)
{
    float areafi4;
    areafi4=(pow(r,2)*6)-(r*r)-(pow((r/2),2)*M_PI)-((2*pow(r,2))/2);
    cout<<"El valor del area de la figura 4 es: "<<areafi4<<endl;
}
void areaf10(float r){
    float areafi10;
    float cir4;
    cir4=(M_PI*pow((3*r),2))/4;
    areafi10=(M_PI*pow(r,2)/2)+cir4+((9*pow(r,2))-cir4);
    cout<<"El valor del area de la figura 10 es: "<<areafi10<<endl;
}
float volumen10(float apot,float lado,float altura) {
    float volumen;
    volumen=(5*lado*apot*altura)/6;
    return volumen;
}
float volumen4(float base,float alturat,float alturap) {
    float volumen;
    volumen=((base*alturat)/2)*alturap;
    return volumen;
}
