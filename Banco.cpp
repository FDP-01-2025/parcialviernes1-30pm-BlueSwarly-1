#include <iostream>
#include <cmath>

using namespace std;

int main(){

    int dui[9], cuenta[6], quemados, pistacho, sinquemar, newv, tt2, parte, tt1, pony, pino;

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

do{
cout <<"bienvenido a mecaduca"<<endl;

cout <<"Que desea comprar hoy?"<<endl;
cout <<"1. Flores $15 \n";
cout <<"2. brownies $10 \n";
cout <<"3. Dulces $5 \n";
cout <<"4. churros $1 \n";

cin >> parte;

cout << "deseas llevar otro producto?"<<endl;
cout <<"1. Si \n";
cout <<"2. No \n";
cin >> pony;

}while(pony == 1);
return parte;

cout << "El total de su carrito es " << parte++ <<endl;

pino = tt2 - parte++;

cout << "El saldo restante es " << pino << endl;

}