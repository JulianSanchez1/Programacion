#include<iostream>
using namespace std;
int main(){
	float *xptr;//El * dice que mi variable es un apuntador
	float x;
	x=39.8;
	cout<<"x="<< x<< endl;
    xptr= &x;// me ubica x en la tabla creada xptr
	// & operador dirección
	cout <<"xptr="<<xptr<<endl;// Muestra la dirrecion donde guarda la variable
    float y,*yptr;
    y=25.3;
    yptr=&y;
    cout<<"yptr="<<yptr<<endl;
    int numeros[12];
    numeros[0]=3;
    cout<<"numeros[0]="<<numeros[0]<<endl;
    cout<<numeros<<endl;
    cout<<&numeros[0]<<endl;
    cout<<numeros+1<<endl;//mostrar los siguientes elementos de un arreglo 
    cout<<*numeros<<endl;//operador de direccion muestra lo que hay en la posicion
    numeros[11] = -108;
    cout<<*(numeros+11)<<endl;
}
