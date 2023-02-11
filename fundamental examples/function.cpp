// To Define an additional function..
/*
The following c++ program is used to show prime numbers
in a particular range...
*/

#include <iostream>

using namespace std;

// initialise function for checking prime...
// :type <bool>
bool prime_checker(int n){
	int count=0;
	
	if (n<2){
		return false; // numbers less than 2 are neither prime not composite...
	}
  
	// for checking prime
  
  /*Now a and b can't be both greater than the square root of n, since
    then the product a * b would be greater than sqrt(n) * sqrt(n) = n.
    So in any factorization of n, at least one of the factors must be
    smaller than the square root of n, and if we can't find any factors
    less than or equal to the square root, n must be a prime.
    */
  
	for (int i=2; i<=sqrt(n); i++){
		if (n%i==0){
			return false;
		}
	}
	
	return true;
}

// Main function
int main(){
	int x, y; // Init lower and upper range
  
	cin>>x>>y;
  
  /*
  The following if statement is used to ensure
  that the lower limit is not greater than upper limit
  */
  
	if (x<=y){
		cout<<"Error";  
	}
  // If limits are correct then...
	else{
		for (int i=x; i<=y; i++){
			if (primechecker(i)){ // Function calling
				cout<<i<<"";
			}
		}
	}
	
	return 0;
	
}
