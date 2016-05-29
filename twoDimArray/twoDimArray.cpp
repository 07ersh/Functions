// twoDimArray.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
const int size = 10;

int main()
{
	double **Array2D = new double*[size];
	for(int i=0; i< size; i++)
	{
		Array2D[i] = new double[size];
	}


	for (int i = 0; i < 2; i++)
		delete[] Array2D[i];
    return 0;
}

