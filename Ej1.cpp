#include <iostream>
using namespace std;
#include "Pila/Pila.h"
int main() {
string palabra;
Pila<char>palabra1;
cout<<"Decime la palabra \n";
    cin>>palabra;
    for (int i = 0; i < palabra.length(); ++i) {
        palabra1.push(palabra[i]);
    }
    while (!palabra1.esVacia()){
        cout<<palabra1.pop();
    }
}
