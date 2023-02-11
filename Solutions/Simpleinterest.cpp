#include <iostream>

using namespace std;

int main(){
	int x, y, t;
	cout<<"Principal"<<endl<<"Rate"<<endl<<"Time"<<endl;
	cin>>x>>y>>t;
	
	cout<<"Interest: "<<(x*y*t)/100;
	
	return 0;
}
