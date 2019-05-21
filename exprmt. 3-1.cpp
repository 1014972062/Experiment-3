#include<iostream>
#include<cstring>
#include<conio.h>
using namespace std;
int main()
{
	cout << "Enter any 10 numbers that you think of :" << endl;
	double numbers[11];
	double total=0;
	double a;
	double s;
	double l;
	
	int q=1;	
	while (q<11)
	{
		cout << "Value #" <<q << ": ";
		cin >> numbers[q];
		q++;
	}
	
	for (q=1;q<11;q++)
	{
		total = total + numbers[q];
	}
	
	l = numbers[1];
	s = numbers[1];

	for (int q = 1; q < 11; q++)
	{
		if (numbers[q] > l)
			l = numbers[q];
	}
	
	for (int q = 1; q < 11; q++)		
	{
		if (numbers[q] < s)
			s = numbers[q];
	}
	
	a = total / 10;
	
	cout << "The Sum of All Value is: " << total << endl;
	cout << "The Average of Values is: " << a<< endl;
	cout << "The Smallest Value is: " << s <<endl;
	cout << "The Largest Value is: " << l << endl;

	_getch();
	return 0;
}
