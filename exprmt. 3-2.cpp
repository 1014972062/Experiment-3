#include <iostream>
#include <cstring>
#include <conio.h>
using namespace std;
int main()
{
	int pa[7];
	int pb[7];
	int pc[7];

	cout << "Input the temperatures of Province A.\n";
	int a=1;
	while (a<8)
	{
		cout << "For province A, in Day " << a << ": ";
		cin >> pa[a];
		a++;
	}

	cout << " "<<endl;
	
	cout << "Input the temperatures of Province B.\n";
	int b=1;
	while (b<8)
	{
		cout << "For province B, in Day " << b << ": ";
		cin >> pb[b];
		b++;
	}

	cout << " "<<endl;

	cout << "Input the temperatures of Province C.\n";
	int c=1;
	while (c<8)
	{
		cout << "For province C, in Day " << c << ": ";
		cin >> pc[c];
		c++;
	}
	
	cout<<" "<< endl;
	
	cout << "Displaying Values of the Temperatures of the Provinces: \n";
	
	int i=1;
		do 
		{
		cout << "In Province A of Day " << i << " = " << pa[i] << endl;
		i++;
		} while (i<8);
	
			
	int o=1;
		do 
		{
		cout << "In Province B of Day " << o << " = " << pb[o] << endl;
		o++;
		} while (o<8);
		
		
	int u=1;	
		do 
		{
		cout << "In Province C of Day " << u << " = " << pc[u] << endl;
		u++;
		} while (u<8);


	_getch();
	return 0;

}
