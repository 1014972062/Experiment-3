#include <iostream>
#include<string.h>
#include<conio.h>
using namespace std;
int main ()
{
	int i;
	int j;
	int Count=0;
	char Word[150];
	char temp;
	
	cout<<"Please input your characters: "<<endl;
	gets(Word);
	for(i=0;i<=strlen(Word) - 1;i++)
	{
		for(j=0;j<strlen(Word) - i - 1;j++)
		{
			if(Word[j] > Word[j+1])
			{
				temp = Word[j];
				Word[j] = Word[j+1];
				Word[j+1] = temp;
			}
		}
		Count++;	
	}
	cout<<" "<<endl;
	cout<<"By Order: \n"<< Word;
	cout<<" "<<endl;
	cout<<"\nWord Size: "<<Count;
	_getch();
	return 0;
}
