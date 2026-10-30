#include <iostream>
using namespace std;

int main() {
    int Percentage;
    cout << "Enter Your Marks : ";
    cin >> Percentage;
    if (Percentage>=90){
    cout << "Grade A" << endl;
}
    else if (Percentage>=80){
        cout << "Grade B" << endl;
    }
    else if (Percentage>=70){
        cout << "Grade C" << endl;
    }
    else if (Percentage>=60){
        cout << "Grade D" << endl;
    }
    else if (Percentage<60){
        cout <<" Fail " << endl;
    }
    return 0;
}