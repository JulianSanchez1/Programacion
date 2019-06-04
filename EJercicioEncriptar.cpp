#include<string.h>
#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
	char abecedario[]{"abcdefghijklmnopqrstuvwxyz"};
	int letras[100], abecedarioT = strlen(abecedario),enodes=0;
	char matriz[abecedarioT][abecedarioT],frase[100], clave[100];
	int z = 0;
	for (int n = 0; n < abecedarioT; n++) {// Funcion para la creación de la matriz
		for (int m = 0; m < abecedarioT; m++) {
			if (n + m < abecedarioT) { //Para la secuencia para que se mueva uno hacia la izquierda
				matriz[n][m] = abecedario[m + n];
			}
			else {
				matriz[n][m] = abecedario[z];//Coloca los valores se pasa de rango
				z++;
			}
		}
		z = 0;
	}
	/*for (int n = 0; n < abecedarioT; n++) {//Mostrar la Matriz
		for (int m = 0; m < abecedarioT; m++) {
			cout << matriz[n][m]<<" ");
		}
	 cout<<"\n";
}*/

	cout<< "Encriptado de Vigènere"<< endl << "Si desea encriptar digite 1 y desea desencriptar digite 2"<< endl;
	cin >>enodes;
	if(enodes == 1){
		cout << "Escriba la frase para encriptar, por favor escribirlo pegado en minuscula y sin ningun simbolo" << endl;
		cin >> frase;
		cout << "Escriba la contraseña para encriptar, por favor escribirlo pegado en minuscula y sin ningun simbolo" << endl;
		cin >> clave;
		int tamanofrase = strlen(frase),tamanoclave = strlen(clave),contador=0;//convierte la clave de la misma extencion de la frase
			if (tamanoclave < tamanofrase) {
				for (int n = 0; n < tamanofrase; n++) {
					if (contador >= tamanoclave){
						contador = 0;
					}
					clave[n] = clave[contador];
					contador++;
				}
			}
			else { // Si la clave es mas larga que el mensaje se recortara la clave
				for (int n = 0; n < tamanofrase; n++) {
					clave[tamanofrase + n] = 0;
				}
			}
			int frasenum[tamanofrase],clavenum[tamanofrase];
			for (int n = 0; n < tamanofrase; n++) {//convierte la frase en numeros con la posicion que se necesita
				for (int i = 0; i < abecedarioT; i++) {
					if (frase[n] == abecedario[i]) {
						frasenum[n] = i;
					}
				}
		}
			for (int n = 0; n < tamanofrase; n++) {//convierte la clave en numeros con la posicion que se necesita
				for (int i = 0; i < abecedarioT; i++) {
					if (clave[n] == abecedario[i]) {
						clavenum[n] = i;
					}
				}
		}
		char frasencriptada[tamanofrase];
		for (int n = 0; n < tamanofrase; n++) {//Encripta el mensaje
					frasencriptada[n]= matriz[frasenum[n]][clavenum[n]];
			}
			cout<< "La frase encriptada es: " << endl;
			for (int n = 0; n < tamanofrase; n++) {//Encripta el mensaje
				cout	<<	frasencriptada[n];
				}
	}
	if(enodes == 2){
		cout << "Escriba la frase para desencriptar, por favor escribirlo pegado en minuscula y sin ningun simbolo" << endl;
		cin >> frase;
		cout << "Escriba la contraseña para desencriptar, por favor escribirlo pegado en minuscula y sin ningun simbolo" << endl;
		cin >> clave;
		int tamanofrase = strlen(frase),tamanoclave = strlen(clave),contador=0;//convierte la clave de la misma extencion de la frase
			if (tamanoclave < tamanofrase) {
				for (int n = 0; n < tamanofrase; n++) {
					if (contador >= tamanoclave){
						contador = 0;
					}
					clave[n] = clave[contador];
					contador++;
				}
			}
			else { // Si la clave es mas larga que el mensaje se recortara la clave
				for (int n = 0; n < tamanofrase; n++) {
					clave[tamanofrase + n] = 0;
				}
			}
			int frasenum[tamanofrase],clavenum[tamanofrase],frasepronum[tamanofrase];
			for (int n = 0; n < tamanofrase; n++) {//convierte la frase encriptada en numeros con la posicion que se necesita
				for (int i = 0; i < abecedarioT; i++) {
					if (frase[n] == abecedario[i]) {
						frasenum[n] = i;
					}
				}
		}
			for (int n = 0; n < tamanofrase; n++) {//convierte la clave en numeros con la posicion que se necesita
				for (int i = 0; i < abecedarioT; i++) {
					if (clave[n] == abecedario[i]) {
						clavenum[n] = i;
					}
				}
		}
		for (int n = 0; n < tamanofrase; n++) {//Consige el numero en la Matriz para desencriptar
			for (int i = 0; i < abecedarioT; i++) {
				if (matriz[clavenum[n]][i] == abecedario[frasenum[n]]) {
					frasepronum[n] = i;
				}
			}
	}
	char frasedesencriptada[tamanofrase];
	for (int n = 0; n < tamanofrase; n++) {//Desencripta
				frasedesencriptada[n]= matriz[0][frasepronum[n]];
		}
		cout << "La frase Desencriptada es: "<< endl;
			for (int n = 0; n < tamanofrase; n++) {//Muestra el mensaje Desencriptado
				cout	<<	frasedesencriptada[n];
				}
	}
}
