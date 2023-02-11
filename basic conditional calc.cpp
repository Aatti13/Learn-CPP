# include <iostream>

using namespace std;

// The following program shall be done using switch aswell...

int main(){
	int x, y, z;
	cout << "Enter x: ";
	cin >> x;
	cout << "Enter y: ";
	cin >> y;
	cout << "Enter choice: ";
	cout << "1--> Add; 2--> Subtract";
	cin >> z;
	
	if (z==1){
		cout<<x+y;
	}
	else if (z==2){
		cout<<x-y;
	}
	else if (z==3){
		cout<<x*y;
	}
	else if (z==4){
		cout<<x/y;
	}
	else{
		cout<<"Error";
	}
	
	return 0;
}
