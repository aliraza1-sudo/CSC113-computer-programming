#include <iostream>
using namespace std;
int main () {
    int marks;
    cout << "Enter marks: ";
    cin >> marks;
    if ( marks >= 50 && marks <= 100 ) {
        cout << "Passed" << endl;
    }
    return 0;
}