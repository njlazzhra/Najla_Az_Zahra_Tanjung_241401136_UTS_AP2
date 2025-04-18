#include<iostream>
using namespace std;

int main(){
    system("cls");
    int kode, ratusan, puluhan, satuan, jumlah_digit;
    cout<<"masukkan kode 3 digit: "; cin>>kode;
    cout<<endl;

    if (kode < 100 || kode > 999){
        cout<<"kode salah!"<<endl;
        return 0;
    }

    ratusan = kode/100;
    puluhan = (kode%100)/10;
    satuan = kode%10;
    jumlah_digit = ratusan + puluhan + satuan;

    cout<<"jumlah digit: "<<jumlah_digit<<endl;
    return 0;
}