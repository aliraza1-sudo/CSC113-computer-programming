#include <iostream>
using namespace std;
// // Method-1 : performing addition using function prototype.
// int addition(int a, int b);
// int main() {
//     int x = 5, y = 11;
//     addition (x, y);
//     cout << addition(x, y) << endl;
//     return 0;
// }
// int addition(int a, int b){
//     int result;
//     result = a + b;
//     return result;
// }

// Method-2 : performing addition using function definition.
int addition(int x, int y) {
    int result;
    result = x + y;
    return result;
}
int main() {
    int a = 5, b = 9;
    addition(a, b);
    cout << addition(a, b) << endl;
    return 0;
}