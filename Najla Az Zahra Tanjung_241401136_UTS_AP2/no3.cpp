#include<iostream>
using namespace std;

int main(){
    system("cls");
    string nama, nim;
    int nilai_AP, nilai_PDS, nilai_OS;
    float rata_rata;

    cout<<"masukkan nama lengkapmu: "; getline(cin, nama);
    cout<<"masukkan nim: "; cin>>nim;
    cout<<"masukkan nilai Algoritma dan Pemrograman: "; cin>>nilai_AP;
    cout<<"masukkan nilai Probabilitas dan Statisika: "; cin>>nilai_PDS;
    cout<<"masukkan nilai Sistem Operasi: "; cin>>nilai_OS;
    cout<<endl;

    //output
    cout<<"Nama Mahasiswa   : "<<nama<<endl;
    cout<<"NIM              : "<<nim<<endl;
    cout<<"Nilai Mata Kuliah: "<<endl;
    cout<<"1. Algoritma dan Pemrograman  : "; 
    if (nilai_AP >= 60){
        cout<<"Lulus."<<endl;
    } else {
        cout<<"Tidak Lulus. Silakan Ulangi di Tahun Depan!"<<endl;
    }
    cout<<"2. Probabilitas dan Statisika : "; 
    if (nilai_PDS >= 60){
        cout<<"Lulus."<<endl;
    } else {
        cout<<"Tidak Lulus. Silakan Ulangi di Tahun Depan!"<<endl;
    } 
    cout<<"3. Sistem Operasi             : "; 
    if (nilai_OS >= 60){
        cout<<"Lulus."<<endl;
    } else {
        cout<<"Tidak Lulus. Silakan Ulangi di Tahun Depan!"<<endl;
    } 
    rata_rata = (nilai_AP + nilai_PDS + nilai_OS) / 3;
    cout<<"Nilai Rata-rata Semester ini  : "<<rata_rata<<endl;
    cout<<endl;
    return 0;
}