#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int main(){
    char texto[30]="Masculino";
     char texto1[30]="masculino";
     int con=0;
    struct datos{
    char nombre[30],apellido[30],sexo[30],direccion[30];
    int edad,telefono;
    };
    struct datos datosam[5];
    for (int i=0;i<5;i++)
    {
    	cout<<"ingrese el nombre "<<i+1<<" : ";
    	fflush(stdin);
        gets(datosam[i].nombre);
        cout<<"ingrese el apellido "<<i+1<<" : ";
        fflush(stdin);
        gets(datosam[i].apellido);
        cout<<"ingrese la edad "<<i+1<<" : ";
        cin>>datosam[i].edad;
        cout<<"ingrese el sexo "<<i+1<<" : "<<endl;
        cout<<"-Masculino \n-Femenino"<< endl;
        fflush(stdin);
		gets(datosam[i].sexo);
        cout<<"ingrese la direccion "<<i+1<<" : ";
        fflush(stdin);
		gets(datosam[i].direccion);
		fflush(stdin);
        cout<<"ingrese la telefono "<<i+1<<" : ";
        cin>>datosam[i].telefono;
        cout<<endl;
    }
    for (int i=0;i<5;i++)
    {
       if( (strcmp(datosam[i].sexo,texto) == 0 || strcmp(datosam[i].sexo,texto1) == 0) && datosam[i].edad<25 )
        {
         con++;
        }
    }
    cout<<" El numero de amigos que son hombres y menores de 25 anios es: "<< con;
}
