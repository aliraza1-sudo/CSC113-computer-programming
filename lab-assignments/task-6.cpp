/*Write down Computer program to display 5 digit number input and display each digit separately.*/

#include <iostream>
using namespace std;
int main() {
	int num = 25636, modulo;
	modulo = num % 10;
	cout << modulo << endl;
	num = num / 10;
	modulo = num % 10;
	cout << modulo << endl;
	num = num / 10;
	modulo = num % 10;
	cout << modulo << endl;
	num = num / 10;
	modulo = num % 10;
	cout << modulo << endl;
	num = num / 10;	
	modulo = num % 10;
	cout << modulo << endl;
	num = num / 10;
	return 0;
}