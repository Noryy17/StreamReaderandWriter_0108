#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
    string baris;
    // Membuka File dalam mode menulis.
    ofstream outfile;
    //Menunjuk Kearah suatu file
    outfile.open("Contohfile.txt");
    cout << ">= Menulis File, \'q\' untuk keluar" << endl;
    //Unlimited Loop Untuk Menulis
    while(true){
        cout <<" ' ";
        //Mendapatkan Setiap Karakter dalam satu baris
        getline(cin, baris);
        //Loop Akan Berhenti jika memasukkan karakter q
        if (baris == "q") break;
        //Menulis dan memasukkan nilai dari 'Baris' ke dalam file
        outfile << baris << endl;
    }
     //Selesai dalam menulis sekarang tutup filenya
    outfile.close();
    // membuka file dalam mode membaca
    ifstream infile;
    // Menunjuk ke sebuah file
    infile.open("Contohfile.txt");
    cout << endl << ">= Membuka dan Membaca File " << endl;
    //Jika File ada maka
    if (infile.is_open()){
       