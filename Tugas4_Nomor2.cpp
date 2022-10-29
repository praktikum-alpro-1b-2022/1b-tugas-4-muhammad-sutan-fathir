#include <iostream>
using namespace std;

int main(){
    string username, password;

    cout << "Masukkan username dan password berikut untuk mencoba" << endl;
    cout << "Username: alprokeren" << endl;
    cout << "Password: alprokerenbanget" << endl << endl;

    cout << "Masukkan username: ";
    cin >> username;

    cout << "Masukkan password: ";
    cin >> password;

    if(username=="alprokeren"||password=="alprokerenbanget"){
        if(username=="alprokeren"&&password!="alprokerenbanget"){
            cout << "Username sesuai, password tidak sesuai" << endl;
        }else if(username!="alprokeren"&&password=="alprokerenbanget"){
            cout << "Username tidak sesuai, password sesuai" << endl;
        }else{
            cout << "Login berhasil" << endl;
        }
    }else{
        cout << "Username dan password tidak sesuai" << endl;
        }

    return 0;
}
