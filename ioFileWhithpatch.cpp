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
    }
    //Selesai dan sekarang tutup filenya
    outfile.close();
    //memulai file dalam mode membaca
    ifstream infile;
    //Mennunjuk FILE
    infile.open(namafile, ios::in);
     cout << endl << ">= Membuka dan Membaca File " << endl;
    if (infile.is_open()){
        //Melakukan perulangan setiap baris 
        while(getline(infile,baris)){
            //dan tampilkan disini
            cout << baris << '\n';
        }
        //tutup file tersebut setelah selesai
        infile.close();
    }
      //Jika tidak ditemukan file maka akan menampilkan ini
    else cout << "Unable to open file";
    return 0;
}