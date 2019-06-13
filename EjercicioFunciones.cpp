#include<iostream>
using namespace std;
void calcularprecio(float valor,float porc);
float solicpor();
int main(){
  float pproducto;
  cout<<"Ingrese precio del producto:";
  cin>>pproducto;
  calcularprecio(pproducto,solicpor());
}
void calcularprecio(float valor,float porc){
    float nuevoprecio;
    nuevoprecio=valor*(1-porc);
    cout<<"El valor con descuento es: "<<nuevoprecio<<endl;
}
float solicpor(){
    float porcentaje;
    cout<<"Ingrese el porcentaje de descuento: ";
    cin>>porcentaje;
    return porcentaje;
}

