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
       