#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
main(){
    struct datos{
    char nombre[30],apellido[30],sexo[30],direccion[30];
    int edad,telefono;    
    };
    struct datos datosam[5];
    for (int i=0;i<5;i++){
    	cout<<"ingrese el nombre "<<i+1<<" : ";
    	fflush(stdin);
        gets(datosam[i].nombre);
        cout<<"ingrese el apellido "<<i+1<<" : ";
        fflush(stdin);
        gets(datosam[i].apellido);
        cout<<"ingrese la edad "<<i+1<<" : ";
        cin>>datosam[i].edad;
        cout<<"ingrese el sexo "<<i+1<<" : ";
        fflush(stdin);
		gets(datosam[i].sexo);
        cout<<"ingrese la direccion "<<i+1<<" : ";
        fflush(stdin);
		gets(datosam[i].direccion);
        cout<<"ingrese la telefono "<<i+1<<" : ";
        cin>>datosam[i].telefono;
        cout<<endl;
    }
    for (int i=0;i<5;i++){
    	cout<<"El nombre "<<i+1<<" es : "<< datosam[i].nombre<<endl;
    	cout<<"El apellido "<<i+1<<" es : "<< datosam[i].apellido<<endl;
    	cout<<"El edad "<<i+1<<" es : "<< datosam[i].edad<<endl;
    	cout<<"El sexo "<<i+1<<" es : "<< datosam[i].sexo<<endl;
    	cout<<"La direccion "<<i+1<<" es : "<< datosam[i].direccion<<endl;
    	cout<<"El telefono "<<i+1<<" es : "<< datosam[i].telefono<<endl;
        cout<<endl;
    }
  
}
