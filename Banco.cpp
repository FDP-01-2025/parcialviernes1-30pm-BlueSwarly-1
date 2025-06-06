#include <iostream>
#include <cmath>

using namespace std;

int main(){

    int dui[9], cuenta[6], quemados, pistacho, sinquemar, newv, tt2;

    quemados = 500000;

    cout << "Ingrese su numero de dui: ";
    cin>> dui[9];
    cout << "Ingrese su numero de cuenta: ";
    cin >> cuenta[6];

    do{
    cout <<"Que operacion le gustaria realizar?: \n";
    cout <<"1. Deporcito \n";
    cout <<"2. Retiro \n";
    cout <<"3. consulta de fondos \n";
    cout <<"4. Exit \n";
    cin >> pistacho;
    
    if (pistacho == 4){
        cout <<"Gracias por usar el programa";
        return 0;
    }

    switch(pistacho){

        case 1:
        cout <<"Ingre la cantidad que desea depositar: ";
        cin >> sinquemar;

        tt2 = sinquemar + quemados;

        cout <<"Su nuevo saldo es de $" << tt2 << endl;
        break;

        case 2:
        cout <<"Ingre la cantidad que desea retirar: ";
        cin >> sinquemar;

         if(quemados > sinquemar) {
        tt2 = quemados - sinquemar;

        cout <<"Su nuevo saldo es de $" << tt2 << endl;
         } else {
            cout <<"Posee fondos insufiecientes para realizar esta accion"<<endl;
         }
        break;

        case 3:
        cout <<"Su nuevo saldo es de $" << quemados << endl;
        break;
    }

    cout <<"Que operacion le gustaria realizar otra operacion?: \n";
    cout <<"1. Si \n";
    cout <<"2. No \n";
    cin >> newv;


} while (newv == 1);
return newv;

}