#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
void ordenar();
main(){
    int cant=2;
    float porcena=0,porcenr=0,apro=0,repro=0,contador=0;
    struct datos{
    char nombre[50];
    float notas[4],notaf,cd,codigo;
    };
    cout<<"Programa para saber el porcentaje de los alumnos aprobados y reprobados y el número de estudiantes con codigo anterior a 20182"<<endl<<endl;
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
        if(curso[i].notaf>=3)
		{
            apro++;
        } 
        else
		{
            repro++;
        }
        if(curso[i].codigo<20182000000)
		{
            contador++;
		}
		cout<<"----------------------------------------------------------";
      }
    porcena=apro*100/cant;
    porcenr=repro*100/cant;
    cout<<"\nPorcentaje de estudiantes aprobados es:  "<<porcena<<"%"<<endl;
    cout<<"\nPorcentaje de estudiantes reprobados es:  "<<porcenr<<"%"<<endl;
    cout<<"\nNumero de estudiantes con codigo menor a 20182:  "<<contador<<endl<<endl;
    float aux;
    for(int i=0;i<cant;i++){
    	for(int j=i+1;j<cant;j++){
    	      if(curso[i].notaf>curso[j].notaf){
    			aux=curso[i].notaf;
    			curso[i].notaf=curso[j].notaf;
    			curso[j].notaf=aux;
		}
          }
   }
   cout<<curso[0].notaf<<endl<<curso[1].notaf;
    ordenar();
}

void ordenar(){
    cout<<"profe, esta es la funcion, pero no pude :("<<endl;
}
