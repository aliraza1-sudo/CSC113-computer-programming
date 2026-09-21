#include <iostream>
using namespace std;
int main () {
    int percent;
    cout << "Enter attendence percentage: ";
    cin >> percent;
    if ( percent < 75 ) {
        cout << "Shortage of attendance" << endl;
    }
    return 0;
}