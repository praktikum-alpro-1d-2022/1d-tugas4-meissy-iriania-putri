#include <iostream>
using namespace std;
int main (){
    int tahun;
    cout << "Mencari tahun kabisat" << endl;
    cout << "Masukan tahun yang ingin anda cari tahu: ";
    cin >> tahun;

    if (tahun%4==0){
        cout << tahun << "Adalah tahun kabisat." <<endl;
    }else{
        cout << tahun << "Tahun tsb bukan tahun kabisat." <<endl;
    }

    return 0;

}
