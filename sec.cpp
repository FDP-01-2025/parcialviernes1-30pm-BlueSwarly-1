#include <iostream>
#include <cmath>

using namespace std;

int main(){

    int Num[100], n, repi;

    cout << "Digite cuantos numeros quiere entrar: ";
    cin >> n;

    for(int i=1; i<n; i++){
        cout << "Digita numeros al azar: ";
        cin >> Num[i];

        repi=Num[i];

    }

    cout << "El numero que mas se repitio fue " << repi <<endl;
}