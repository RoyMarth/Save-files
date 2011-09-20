#include <fstream>
#include <iostream>
#include <iomanip>
#include <string>
	using namespace std;

int main()
{
	cout<< "Please enter your name\n";
	string name;
	cin>> name;
	cout<< "Please enter a number\n";
	int b;
	cin>> b;
	cout<< "Please enter a letter\n";
	char c;
	cin>> c;

	ofstream myfile;
	myfile.open ("save.txt");
	myfile<< name << "\n" << b << "\n" << c << "\n" <<endl;
	myfile.close();
	char z;
	cin>> z;
	return 0;
}
