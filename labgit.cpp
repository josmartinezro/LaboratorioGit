#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;
int main () {
    
    ifstream archivoentrada("input/archivoentrada.txt");
    ofstream archivosalida("output/archivosalida.txt");
    
    if (archivoentrada.is_open()&& archivosalida.is_open()){
		  cout<<"archivo abierto"<<endl;
      string linea;
    
    while (getline(archivoentrada, linea)){
    archivosalida <<linea;
		}
		cout<<"Archivo copiado correctamente"<<endl;
		}
      
}
