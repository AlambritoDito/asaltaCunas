#include <iostream>

using namespace std;

int main(){
    int edad_usuario;
    float edad_pareja;
    cout << "Este programa sirve para saber que tantos años puede tener tu pareja sin parecer asalta cunas" << endl;
    cout << "Introduce tu edad" << endl;
    cin >> edad_usuario;
    edad_pareja = edad_usuario /2 +7;
    cout << "La edad minima de tu pareja para que no te veas como un asalta cunas es: " << edad_pareja;

}
