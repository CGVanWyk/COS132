	#include<cstddef>
	#include<iostream>
	#include<cmath>
	using namespace std;
	void printVector(int arrPrint[], size_t size)
	{
	cout << "[";
		size_t counter = 0;
		for(counter;counter < size;counter++)
		{
		cout << arrPrint[counter];
		if (counter < size -1)
		{
		cout << ", ";
		}
		}
	cout << "]";
	}
	int* addVectors(const int p[], const int q[], size_t size)
	{
	int* sumptr = new int[size];
		for (int c = 0;c<size;c++)
		{
		sumptr[c] = p[c] + q[c];
		}
	return sumptr;
	}
	int* subtractVectors(const int p[], const int q[], size_t size)
	{
	int* subptr = new int[size];
		for (int c = 0;c<size;c++)
		{
		subptr[c] = p[c] - q[c];
		}
	return subptr;
	}
	double magnitude(const int p[], size_t size)
	{
	double mag = 0;
		for (int c = 0;c<size;c++)
		{
		mag =(p[c] * p[c]) + mag;
		}
		mag = sqrt(mag);
	return mag;
	}
	bool equalVectors(const int p[], const int q[], size_t size)
	{
	int equalityCounter = 0;
		for (int c = 0;c<size;c++)
		{
		int Pint;
		int Qint;
		Pint = p[c];
		Qint = q[c];
		if (Pint == Qint)
		equalityCounter++;
		}	
	if (equalityCounter == size)
	return 1;
	else return 0;	
	}
	int dotProduct(const int p[], const int q[], size_t size)
	{
	int product = 0;
		for (int c = 0;c<size;c++)
		{
		int Pstore = q[c];
		int Qstore = p[c];
		product = (Pstore * Qstore) + product;
		}
	return product;
	}


