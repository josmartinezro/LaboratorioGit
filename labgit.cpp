#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;
int main () {
    
    ifstream archivoentrada("input/archivoentrada.txt");
    
    if (archivoentrada.is_open()) {
    cout<<"archivo abierto"<<endl;
    string linea;
    
    while (getline(archivoentrada, linea)) {
    
}
}
    
    
}
