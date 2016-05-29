// arrfun3(7_7).cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
const int arSize = 5;
int fill_array(double ar[], int limit);
void show_array(const double ar[], int n);
void revalue_array(double r, double ar[], int n);


int main()
{
	using namespace std;
	double myArray[arSize];
	for(int i=0; i<arSize; i++)
	{
		myArray[i] = -1;
	}
	int size = fill_array(myArray, arSize);
	if(size > 0)
	{
		show_array(myArray, arSize);
		cout << "Enter revalution factor: ";
		double factor;
		while(!(cin>>factor))
		{
			cin.clear();
			while (cin.get() != '\n')
				continue;
			cout << "Bad input. Please enter number: ";
		}
		revalue_array(factor, myArray, arSize);
		show_array(myArray, arSize);
	}
	system("pause");
    return 0;
}

int fill_array(double ar[], int limit)
{
	using namespace std;
	double temp;
	int i = 0;
	for(i=0; i<limit; i++)
	{
		cout << "Enter value #" << (i + 1) << ": ";
		cin >> temp;
		if (!cin)
		{
			cin.clear();
			while (cin.get() != '\n')
				continue;
			cout << "Bad input. Input process terminated.\n";
			break;
		}

		else if (temp < 0)
			break;
		ar[i] = temp;
	}
	return i;
}

void show_array(const double ar[], int n)
{
	using namespace std;
	cout << endl;
	for (int i = 0; i<n; i++)
	{
		cout << "Array's element #" << i + 1 << ": " << ar[i] << endl;
	}
	std::cout << std::endl;
}

void revalue_array(double r ,double ar[], int n)
{
	for(int i=0; i<n; i++)
	{
		if(ar[i]>=0)
		{
			ar[i] *= r;
		}
	}
}
