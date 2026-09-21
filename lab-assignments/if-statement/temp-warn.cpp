#include <iostream>
using namespace std;
int main () {
    int temp;
    cout << "Enter room temperature: ";
    cin >> temp;
    if ( temp > 40 ) {
        cout << "Alert: High Temperature" << endl;
    }
    return 0;
}