#include <iostream>
#include <cmath>

using namespace std;

int main(){

    int stars; 
    string player, mango;

    cout <<"Ingresa el nombre del jugador al que quieres calificar: ";
    cin >> player;
    cout <<"Ingresa cuantas estrellas deseas darle a "<< player <<"\n";
    cin >> stars;

    switch(stars){

        case 1: 
        cout << "El jugador "<< player << " a recibido 1 estrella por su desempeño"<<endl;
        break;

        case 2: 
        cout << "El jugador "<< player << " a recibido 2 estrellas por su desempeño"<<endl;
        break;

        case 3: 
        cout << "El jugador "<< player << " a recibido 3 estrellas por su desempeño"<<endl;
        break;

        case 4: 
        cout << "El jugador "<< player << " a recibido 4 estrellas por su desempeño"<<endl;
        break;

        case 5: 
        cout << "El jugador "<< player << " a recibido 5 estrellas por su desempeño"<<endl;
        break;

    }


}