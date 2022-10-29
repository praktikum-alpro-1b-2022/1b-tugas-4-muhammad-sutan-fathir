#include <iostream>
using namespace std;

int main(){
    int tahun, sisa;

    cout << "Selamat datang di operator menentukan tahun kabisat" << endl;

    cout << "Masukkan tahun: ";
    cin >> tahun;
    sisa = tahun%4;

    if(sisa==0){
        cout << tahun << " adalah tahun kabisat." << endl;
    }else{
        cout << tahun << " bukan tahun kabisat." << endl;
    }

    return 0;
}
