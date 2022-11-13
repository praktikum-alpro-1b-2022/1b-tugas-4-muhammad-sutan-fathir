#include <iostream>
using namespace std;

int main(){
    int angka, sisa;

    cout << "Selamat datang di operator angka genap atau ganjil" << endl;

    cout << "Masukkan angka: ";
    cin >> angka;
    sisa = angka%2;

    if(sisa==0){
        cout << angka << " adalah angka genap." << endl;
    }else{
        cout << angka << " adalah angka ganjil." << endl;
    }

    return 0;
}
