#include <iostream>

using namespace std;

//utdallas sample
main()
{
	char c;  
	short s;  
	int i;  
	unsigned int ui;  
	unsigned long int ul; 
	float f;
	double d;  
	long double ld;  
    
	cout << endl << "The storage space for each variable type is:" << endl;
	cout << endl; printf("char: \t\t\t%d bits",sizeof(c)*8);  //  \t means tab 
	cout << endl; printf("short: \t\t\t%d bits",sizeof(s)*8);
	cout << endl; printf("int: \t\t\t%d bits",sizeof(i)*8);
	cout << endl; printf("unsigned int: \t\t%d bits",sizeof(ui)*8);
	cout << endl; printf("unsigned long int: \t%d bits",sizeof(ul)*8);
	cout << endl; printf("float: \t\t\t%d bits",sizeof(f)*8);
	cout << endl; printf("double: \t\t%d bits",sizeof(d)*8);
	cout << endl; printf("long double: \t\t%d bits",(sizeof(ld)*8));
}