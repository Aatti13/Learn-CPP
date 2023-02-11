// number swap
#include <iostream>

using namespace std;

int main(){
	int x, y, temp;
	cin>>x>>y;
	cout<<"OLD: "<<x<<","<<y<<endl;
	
	temp = x;
	x=y;
	y=temp;
	
	cout<<"New: "<<x<<","<<y;
	
	return 0;
}
