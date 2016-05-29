// Functions.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
const int arSize = 8;
int sum_arr(const int arr[], int n);

int main()
{
	using namespace std;
	int* cookies = new int[arSize];
	for(int i=0;i<arSize; i++)
	{
		cookies[i] = i + 1;
	}
	cout << "Sum of array's elements is equal to " << sum_arr(cookies, arSize) << endl;
	system("pause");
    return 0;
}

int sum_arr(const int arr[], int n)
{
	int total = 0;
	std::cout << "Array's elements: ";
	for(int i=0; i<n; i++)
	{		
		std::cout << arr[i] <<" ";
		total += arr[i];
	}
	std::cout << std::endl;
	return total;
}

