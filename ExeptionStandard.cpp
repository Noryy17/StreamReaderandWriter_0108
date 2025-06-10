#include <iostream>
#include <exception>
//Untuk Dapat encreptiion yang digunakan
#include <array>
//Untuk Objek Array
using namespace std;

int main (){
    cout << "Awal Program" <<endl; // Penanda
    try {
        array <int, 3> data = {10, 20, 30};
        //Pesan Array int 3 element
        cout << data.at(5) << endl;
    }
    catch (exception& e){
       //Penangkapan menggunakan objek exeption
       cout << e.what() << endl ;

    }
    cout << " Baris program yang terakhir " <<endl;
    //Penanda 2 bahwa program berjalan tanpa berhenti
    return 0;
}

