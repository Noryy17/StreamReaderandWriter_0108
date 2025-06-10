#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
    string baris;
    string namafile;
    cout << "Masukkan Nama File : ";
    cin >> namafile;
    //Membuka File dalam mode menulis
    ofstream outfile;
    //Menunjuk kesebuah file
    outfile.open(namafile + ".txt", ios::out);
    cout << "=> Menulis File \'q\' Untuk Keluar " << endl;
    //Unlimited loop untuk 
    while(true){
        cout <<" ' ";
        //Mendapatkan Setiap Karakter dalam satu baris
        getline(cin, baris);
        //Loop Akan Berhenti jika memasukkan karakter q
        if (baris == "q") break;
        //Menulis dan memasukkan nilai dari 'Baris' ke dalam file
        outfile << baris << endl;
    