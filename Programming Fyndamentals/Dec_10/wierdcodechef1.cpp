#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	if(n%2 == 0) {
	     // n is even
	   if(n >= 2 and n <= 5) {
	       cout<<"Not Weird";
	   } else if(n >= 6 and n <= 20) {
	       cout<<"Weird";
	   } else if(n >= 20) {
	       cout<<"Not Weird";
	   }
	} else {
	    // n is odd
	    cout<<"Weird";
	}
	
	return 0;
}
