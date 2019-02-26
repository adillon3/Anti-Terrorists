#include"Robots.h"

int main() { 
	bombDefusalRobot desert(60000.00, "Desert"); 
	bombDefusalRobot jungle(70000.00, "Jungle"); 
	bombDefusalRobot urban(56000.00, "Urban"); 

	desert.print(); 
	cout << endl << endl;
	jungle.print();
	cout << endl << endl; 
	urban.print(); 
	cout << endl << endl; 

	system("pause"); 
	return 0;
}
	