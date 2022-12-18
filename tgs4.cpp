#include <iostream>
using namespace std;
int main (){
    int menu;

    cout <<"       Menu restourant Mc'Yahud   "<<endl;
    cout <<"====================================="<<endl;
    cout <<"1. Nasi goreng informatika Rp.5000,-"<<endl;
    cout <<"2. Nasi soto ayam internet RP.7000,-"<<endl;
    cout <<"3. Gado gado Disket RP.4.500,-"<<endl;
    cout <<"4. Bubur ayam IAN RP.4000,-"<<endl;
    cout <<"====================================="<<endl;
    cout << endl;
    cout << "Masukan pilihan anda.";
    cin >> menu;

    switch (menu){
        case 1:
            cout << "Pilihan No.1 Nasi goreng informatika Rp.5000,-" <<endl;
            break;
        case 2:
            cout << "Pilihan No.2 Nasi soto ayam internet RP.7000,-" <<endl;
            break;
        case 3:
            cout << "Pilihan No.3 Gado gado Disket RP.4.500,-" <<endl;
            break;
        case 4:
            cout << "Pilihan No.4 Bubur ayam IAN RP.4000,-" <<endl;
            break;
    }

    return 0;

}
