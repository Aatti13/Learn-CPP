#include <iostream>

using namespace std;

bool leap_year(int n){
	bool check = false;
	
	if (n%400==0){
		check = true;
		
	}
	if (n%100==0){
		check=false;
	}
	if (n%4==0){
		check=true;
	}
	
	if (check == false){
		cout << "Not Leap Year";
	}
	else{
		cout << "Leap Year";
	}
}

int main(){
	int x;
	cin>>x;
	leap_year(x);
	
	return 0;
}
