#include <iostream>
using namespace std;

int main() {
    int age;
    cout <<"Enter Your Age : ";
    cin >> age;
    if (age>18){
        cout << "Aap Vote De Sakty Ho " << endl;
    }
    else {
        cout << "Aap Abhi Vote Nehi De Sakty Ho " << endl;
    }
    return 0;
}