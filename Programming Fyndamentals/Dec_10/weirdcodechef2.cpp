#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	if(n%2 != 0) {
	    cout<<"Weird";
	    return 0; // exit the program
	}
	// we are even
	if(n >= 20 or (n >= 2 and n <= 5)) {
	    cout<<"Not Weird";
	    return 0;
	} 
	cout<<"Weird";
	return 0;
}
