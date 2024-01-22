/*
In this code, we will get value from user for 2x2 matrix. Then, we will asign each row as an array.
Then, we will use bubble sort to put arrays in an order.

Developer: Barış Someroğlu
Date: 22.01.2024 / 6:00 p.m.
*/

#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int temp1, temp2, A[2], B[2], M[2][2];

	// get value from user for matrix
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			cout << "Please Enter M[" << i << "][" << j << "]: ";
			cin >> M[i][j];
		}
	}

	// row to array 
	for (int i = 0; i <= 0; i++)
	{
		for (int j = 0; j <= 1; j++)
		{
			A[j] = M[i][j];
		}
	}

	cout << endl;

	// first row
	cout << "First Row: ";
	for (int i = 0; i < 2; i++)
	{
		cout << A[i] << " ";
	}

	// row to array
	for (int i = 1; i <= 1; i++)
	{
		for (int j = 0; j <= 1; j++)
		{
			B[j] = M[i][j];
		}
	}

	cout << endl;

	// second row
	cout << "Second Row: ";
	for (int i = 0; i < 2; i++)
	{
		cout << B[i] << " ";
	}

	// make bubble sort for array A
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 1; j++)
		{
			if (A[j + 1] < A[j])
			{
				temp1 = A[j];
				A[j] = A[j + 1];
				A[j + 1] = temp1;

				// swap(A[j],A[j+1]);
			}
		}
	}

	cout << endl;

	// write array A
	cout << "Array A is: ";
	for (int i = 0; i < 2; i++)
	{
		cout << A[i] << " ";
	}

	// make bubble sort for array B
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 1; j++)
		{
			if (B[j + 1] < B[j])
			{
				temp2 = B[j];
				B[j] = B[j + 1];
				B[j + 1] = temp2;

				// swap(B[j],B[j+1]);
			}
		}
	}

	cout << endl;

	// write array B
	cout << "Array B is: ";
	for (int i = 0; i < 2; i++)
	{
		cout << B[i] << " ";
	}

	cout << endl;

	return 0;
}