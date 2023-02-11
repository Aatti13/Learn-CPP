#include <iostream>

using namespace std;

int main(){
	int x;
	bool flag;
	cout<<"Enter a number";
	cin>>x;
	
	if (x==0||x==1){
		flag=false;
	}
	
	for (int i=0; i<=x/2; i++){
		if (n%i==0){
			flag=true;
			break;
		}
	}
	
	if (flag == true){
		cout<<x<<"is a prime number";
	}
	else{
		cout<<x<<"is composite number";
	}
	
	return 0;
}
