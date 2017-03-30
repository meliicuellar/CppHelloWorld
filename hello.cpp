#include <iostream>
#include <stdlib.h>
#include <fstream>

/*programa que imprime por pantalla el mensaje "Hola mundo!" y lo guarda en un archivo .txt 
melina cuellar
30032017*/

using namespace std;

int main() {
	
	string palabra = "Hola mundo!";
	
	cout<<palabra;
	
	ofstream archivo;
	
	archivo.open("salida.txt",ios::out); //abriendo archivo
	
	if(archivo.fail()){
		cout<<"No se pudo abrir el archivo";
		exit(1);
	}
	
	archivo<<palabra;
	
	archivo.close(); // cerrar el archivo
	
	return 0;
}
