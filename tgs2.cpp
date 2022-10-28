#include <iostream>
using namespace std;
int main (){
    string username;
    string password;

    cout << "Masukan username anda: ";
    cin >> username;
    cout << "Masukan password anda: ";
    cin  >> password;

    if(username == "Admin") {
        if (password =="admin1"){
            cout << "Username dan password sesuai, login berhasil." <<endl;
        }else{
            cout << "Username sesuai, Password tidak sesuai." <<endl;
        }
    }else{
        if (password == "admin1"){
            cout << "Username tidak sesuai, password sesuai." <<endl;
        }else{
            cout << "Username dan password tidak sesuai." <<endl;
        }
    }

    return 0;

}
