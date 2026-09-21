#include <iostream>
using namespace std;
int main () {
    int x, y, z, sum;
    cout << "Enter 1st number: ";
    cin >> x;
    cout << "Enter 2nd number: ";
    cin >> y;
    cout << "Enter 3rd number: ";
    cin >> z;
    if ( x < 0 ) {
        x = 0;
    }
    if ( y < 0 ) {
        y = 0;
    }
    if ( z < 0 ) {
        z = 0;
    }
    sum = x + y + z;
    cout << "Sum of positive integers is: " << sum << endl;
    return 0;
}