#include<iostream>
#include<stdio.h>
using namespace std;
main(){
    struct estudiante{
    char codigo[12];
    char nombre[30];
    float nota;
    };
    /*
    struct estudiante est1;
    cout<<"ingrese el codigo: ";
    cin>>est1.codigo;
    cout<<"ingrese el nombre: ";
    cin>>est1.nombre;
    cout<<"ingrese la nota: ";
    cin>>est1.nota;

    cout<<"el codigo del estudiante es: "<<est1.codigo<<endl;
    cout<<"el nombre del estudiante es: "<<est1.nombre<<endl;
    cout<<"la nota del estudiante es: "<<est1.nota<<endl;
    */
    struct estudiante curso[5];
    for (int i=0;i<5;i++){
        cout<<"ingrese el codigo "<<i<<" : ";
        cin>>curso[i].codigo;
        cout<<"ingrese el nombre "<<i<<" : ";
        cin>>curso[i].nombre;
        cout<<"ingrese la nota "<<i<<" : ";
        cin>>curso[i].nota;
        cout<<endl;
    }
    for(int i=0;i<5;i++){
        cout<<"el codigo del estudiante "<<i<<" es: "<<curso[i].codigo<<endl;
        cout<<"el nombre del estudiante "<<i<<" es: "<<curso[i].nombre<<endl;
        cout<<"la nota del estudiante "<<i<<" es: "<<curso[i].nota<<endl;
    }
}
