#include <iostream>
using namespace std;

int main(){
    int kode, jumlahPembelian;
    string ukuran;

    cout << "Daftar harga produk susu dari perusahaan susu ABC:" << endl;
    cout << " ====================================================" << endl;
    cout << " | Kode Susu | Nama Produk |  Ukuran   |   Harga    |" << endl;
    cout << " |==================================================|" << endl;
    cout << " | 1         | Dancow      |B = Besar  |Rp. 10.000,-|" << endl;
    cout << " |           |             |S = Sedang |Rp.  4.250,-|" << endl;
    cout << " |           |             |K = Kecil  |Rp.  2.100,-|" << endl;
    cout << " |==================================================|" << endl;
    cout << " | 2         | Indomilk    |B = Besar  |Rp.  8.500,-|" << endl;
    cout << " |           |             |S = Sedang |Rp.  4.000,-|" << endl;
    cout << " |           |             |K = Kecil  |Rp.  2.025,-|" << endl;
    cout << " |==================================================|" << endl;
    cout << " | 3         | Sustacal    |B = Besar  |Rp. 17.000,-|" << endl;
    cout << " |           |             |S = Sedang |Rp. 14.500,-|" << endl;
    cout << " |           |             |K = Kecil  |Rp.  8.300,-|" << endl;
    cout << " ====================================================" << endl;

    cout << "Masukkan Kode Susu(1-3): ";
    cin >> kode;

    cout << "Masukkan ukuran(B/S/K): ";
    cin >> ukuran;

    cout << "Jumlah pembelian: ";
    cin >> jumlahPembelian;

    if(kode==1){
        if(ukuran=="B"){
            cout << "\nDaftar Pembelian: " << endl;
            cout << "Susu Dancow ukuran besar" << endl;
            cout << "Harga Susu Rp. 10000" << endl;
            cout << "Jumlah pembelian Rp. " << jumlahPembelian*10000 << endl;
        }else if(ukuran=="S"){
            cout << "\nDaftar Pembelian: " << endl;
            cout << "Susu Dancow ukuran sedang" << endl;
            cout << "Harga Susu Rp. 4250" << endl;
            cout << "Jumlah pembelian Rp. " << jumlahPembelian*4250 << endl;
        }else if(ukuran=="K"){
            cout << "\nDaftar Pembelian: " << endl;
            cout << "Susu Dancow ukuran kecil" << endl;
            cout << "Harga Susu Rp. 2100" << endl;
            cout << "Jumlah pembelian Rp. " << jumlahPembelian*2100 << endl;
        }
    }else if(kode==2){
        if(ukuran=="B"){
            cout << "\nDaftar Pembelian: " << endl;
            cout << "Susu Indomilk ukuran besar" << endl;
            cout << "Harga Susu Rp. 8500" << endl;
            cout << "Jumlah pembelian Rp. " << jumlahPembelian*8500 << endl;
        }else if(ukuran=="S"){
            cout << "\nDaftar Pembelian: " << endl;
            cout << "Susu Indomilk ukuran sedang" << endl;
            cout << "Harga Susu Rp. 4000" << endl;
            cout << "Jumlah pembelian Rp. " << jumlahPembelian*4000 << endl;
        }else if(ukuran=="K"){
            cout << "\nDaftar Pembelian: " << endl;
            cout << "Susu Indomilk ukuran kecil" << endl;
            cout << "Harga Susu Rp. 2025" << endl;
            cout << "Jumlah pembelian Rp. " << jumlahPembelian*2025 << endl;
        }
    }else if(kode==3){
        if(ukuran=="B"){
            cout << "\nDaftar Pembelian: " << endl;
            cout << "Susu Sustacal ukuran besar" << endl;
            cout << "Harga Susu Rp. 17000" << endl;
            cout << "Jumlah pembelian Rp. " << jumlahPembelian*17000 << endl;
        }else if(ukuran=="S"){
            cout << "\nDaftar Pembelian: " << endl;
            cout << "Susu Sustacal ukuran sedang" << endl;
            cout << "Harga Susu Rp. 14500" << endl;
            cout << "Jumlah pembelian Rp. " << jumlahPembelian*14500 << endl;
        }else if(ukuran=="K"){
            cout << "\nDaftar Pembelian: " << endl;
            cout << "Susu Sustacal ukuran kecil" << endl;
            cout << "Harga Susu Rp. 8300" << endl;
            cout << "Jumlah pembelian Rp. " << jumlahPembelian*8300 << endl;
        }
    }else{
        cout << "Masukkkan Kode atau ukuran yang benar" << endl;
    }


    return 0;
}
