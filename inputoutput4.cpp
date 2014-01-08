#include <fstream>
using namespace std;

int main(void){
	//o is output
	//f is file
	//so ofstream is output file stream
	ofstream myfile("output.txt");
	int x=5;
	double y=3.14159;
	myfile << "PI is an awesome number.\n";
	myfile << "It's value is: " << y << endl;
	myfile << x << " * "  << y << " = " << x*y << endl;
	return 0;
}