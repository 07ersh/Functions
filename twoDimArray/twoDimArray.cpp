// twoDimArray.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <random>
const int size = 10;
int GenerateRNumber();
void Show_array(int **, int);
int **QuickSort(int **arr, int n);




int main()
{

	//initialization two-dimension array
	int **Array2D = new int*[size];
	for (int i = 0; i< size; i++)
	{
		Array2D[i] = new int[size];
	}

	//generate random numbers for each array's elements
	{
		for (int i = 0; i<size; i++)
		{
			for (int j = 0; j<size; j++)
			{
				Array2D[i][j] = GenerateRNumber();
			}
		}

		Show_array(Array2D, size);
	}
	
	//sorting array's elements
	{
		QuickSort(Array2D, size);
		Show_array(Array2D, size);
	}

	//freeing the memory
	{
		for (int i = 0; i < 2; i++)
		{
			delete[] Array2D[i];
		}
		delete[] Array2D;
	}


	system("pause");
    return 0;
}

int GenerateRNumber()
{	
	int number = 0;
	number = rand() % 50 - 25;
	return number;
}

void Show_array(int **arr, int n)
{
	using namespace std;
	cout << "Show all elements:" << endl;
	for (int i = 0; i<n; i++)
	{
		for (int j = 0; j<n; j++)
		{
			cout << arr[i][j] << " ";
		}
	}
	cout << endl;
}

int compare(const void * a, const void * b)
{
	return (*(int*)a - *(int*)b);
}
int **QuickSort(int **arr, int n)
{
	using namespace std;
	cout << "QuickSort -> start..." << endl;
	qsort(arr, n, sizeof(n), compare);
	cout << "QuickSort -> end..." << endl;
	return arr;
}
