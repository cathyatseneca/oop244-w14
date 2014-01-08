#include <iostream>
//this next line specifies that variables
//are declared in the std namespace
using namespace std;

int main(void){
	//cout is an instance of the ostream class
	//std is a namespace
	//<< is the left bit shift operator
	//this operator has been "overloaded"
	//to modify its behaviour when the left
	//operand is an ostream object
	cout << "hello world" << endl;
	return 0;
}