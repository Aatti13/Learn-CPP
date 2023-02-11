#include <iostream>

using namespace std;

// using switch statement

int main(){
	int x, y;
	char operator;
	
	cin >> x >> y;
	
	switch (operator){
		case '+':
			cout<<x+y;
		case '-':
			cout<<x-y;
		case 'x':
			cout<<x*y;
		case '/':
			cout<<x/y;
		default:
			cout << "Error";
	}
	
	return 0;
}
