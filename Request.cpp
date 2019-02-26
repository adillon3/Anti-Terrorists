#include<iostream>
#include<string>
#include<iomanip>
using namespace std; 

int main() {
	string email;
	cout << "Please Enter Your Email Below\n";
	getline(cin, email);
	cout << "Pamphlet will be sent to " << email << " withinin 24 hrs";

	system("pause");
	return 0;
}

	
	

