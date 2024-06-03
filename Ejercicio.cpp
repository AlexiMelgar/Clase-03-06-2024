#include <iostream>
using namespace std;

int suma(int entero1, int entero2){
int resultado=0;
resultado=(entero1+entero2);
    return resultado;
}

int resta(int entero1, int entero2){
int resultado=0;
resultado=(entero1-entero2);
    return resultado;
}

int multiplicacion(int entero1, int entero2){
int resultado=0;
resultado=(entero1*entero2);
    return resultado;
}

int division(int entero1, int entero2){
int resultado=0;
resultado=(entero1/entero2);
    return resultado;
}
int media(int entero1, int entero2){
int resultado=0;
resultado=((entero1+entero2)/2);
    return resultado;
}

int main(){
    int n1=0, n2=0, respuesta=0;
    cin>>n1;
    cin>>n2;

    respuesta =suma(n1,n2);
    cout<<respuesta<<endl;
    respuesta =resta(n1,n2);
    cout<<respuesta<<endl;
    respuesta =multiplicacion(n1,n2);
    cout<<respuesta<<endl;
    respuesta =division(n1,n2);
    cout<<respuesta<<endl;
    respuesta =media(n1,n2);
    cout<<media<<endl;
    return 0;
}


