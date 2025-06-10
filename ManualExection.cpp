#include <iostream>
using namespace std;

int main (){
    try {
        cout << " Selamat Belajar di Prodi Ti di UMY " << endl;
        throw 0.5;
        cout << "Pernytaan Tidak akan dieksekusi" <<endl;
    }
    catch (int a){
        //Bloc akan di eksekusi
        cout << " Pengecualian akan diesekusi " << endl;
    }
    catch (...){
        cout << "Default Pengecualian Dieksekusi" <<endl;
    }
    return 0;
}