#include<iostream>
using namespace std;

int main(){
    system("cls");
    int kode1, kode2, kode3;

    cout<<"kode ke-1: "; cin>>kode1;
    cout<<"kode ke-2: "; cin>>kode2;
    cout<<"kode ke-3: "; cin>>kode3;
    cout<<endl;

    if ((kode1 < 0 || kode1 > 100) || (kode2 < 0 || kode2 > 100) || (kode3 < 0 || kode3 > 100)){
            cout<<"salah satu kode tidak valid."<<endl;
            return 0;
        }

    if (kode1 < 50 || kode2 < 50 || kode3 < 50){
        cout<<"bahaya"<<endl;
    } else if ((kode1 + kode2 + kode3) >= 200){
        cout<<"aman"<<endl;
    } else {
        cout<<"bahaya"<<endl;
    }
    return 0;
}