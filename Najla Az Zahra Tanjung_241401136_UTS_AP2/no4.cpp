#include<iostream>
using namespace std;

int main(){
    system("cls");
    string daftar_buku;

    int i = 0, jlh_judul = 0; 
    cout << "Masukkan daftar judul buku: "; getline(cin, daftar_buku);
    cout << endl;

    int panjang = daftar_buku.length(); 
    while (i < panjang) {
        //loop untuk melewati setiap spasi di awal
        while (i < panjang && daftar_buku[i] == ' ') {
            i++;
        }

        //setiap kata terhitung sebagai judul buku
        if (i < panjang && daftar_buku[i] != ' ') {
            jlh_judul++;
            //loop untuk menghitung karakter yang bukan spasi adalah judul buku
            while (i < panjang && daftar_buku[i] != ' ') {
                i++;
            }
        }
    }
    cout << "Jumlah judul buku: " << jlh_judul << endl;
    return 0;
}