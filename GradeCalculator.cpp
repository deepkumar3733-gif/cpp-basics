#include <iostream>
#include <iomanip>
using namespace std;

int main() {
int marks;
cout << "Enter Your Marks : ";
cin >> marks;
if (marks >=80){
    cout << "Grade A" << endl;
}
else if (marks>=60){
    cout << "Grade B" << endl;
}
else if (marks>=50){
    cout << "Grade C" << endl;
}
else 
cout << "Fail" << endl;
return 0;
} 