# include <iostream>

using namespace std;

// The following program shall be done using switch aswell...

int main(){
	// Initialising int data type identifiers
	int x, y, z;
	
	cout << "Enter x: ";
	cin >> x;	// Taking in input for x
	cout << "Enter y: ";
	cin >> y;	// input for y
	cout << "Enter choice: ";	
	cout << "1--> Add; 2--> Subtract; 3--> Multiplication, 4--> Division: ";
	cin >> z;	// input for choice
	
	if (z==1){
		cout<<x+y;	// Addition
	}
	else if (z==2){
		cout<<x-y;	// Subtraction
	}
	else if (z==3){
		cout<<x*y;	// Multiplication
	}
	else if (z==4){
		cout<<x/y;	// Division
	}
	else{
		cout<<"Error";	// Error statement
	}
	
	return 0;
}
