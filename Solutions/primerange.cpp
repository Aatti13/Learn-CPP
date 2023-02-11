#include <iostream>

using namespace std;

bool prime_checker(int n){
	int count=0;
	
	if (n<2){
		return false;
	}
	
	for (int i=2; i<=sqrt(n); i++){
		if (n%i==0){
			return false;
		}
	}
	
	return true;
}

int main(){
	int x, y;
	cin>>x>>y;
	if (x<=y){
		cout<<"Error";
	}
	else{
		for (int i=x; i<=y; i++){
			if (primechecker(i)){
				cout<<i<<"";
			}
		}
	}
	
	return 0;
	
}
