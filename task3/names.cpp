#include<fstream>
#include<iomanip>
#include<iostream>
#include<string>
#include<cstddef>
using namespace std;
#include "nameSort.h"
int main()
{
	string read;
	ifstream cinFile;
	cout << "Names Sorting\n" << "-------------\n" << "1. Sort names by surnames then first names\n" << 
		"2. Sort names by first names then surnames\n" << "Enter your sorting choice: ";
	int choice;
	cin >> choice;
	static int counter = 0;
	int size = 0;
	string surnamesRead;
	string firstnamesRead;	
	if (choice == 1 )
	{
		cinFile.open("names.txt");
		while (cinFile >> surnamesRead)
		{
			cinFile >> firstnamesRead;
			counter++;
		}
		size = counter;
		cinFile.close();
		counter = 0;
		cinFile.open("names.txt");
		string surnamesarray[size];
		string firstnamesarray[size];	
		for (counter=0;counter<size;counter++)
		{
		cinFile >> surnamesarray[counter];
		cinFile >> firstnamesarray[counter];
		}
		cinFile.close();
			sortSurnameFirst(surnamesarray,firstnamesarray,size);
			displayNames(surnamesarray,firstnamesarray,size);	
	}
	if (choice == 2)	
	{
		cinFile.open("names.txt");
		while (cinFile >> surnamesRead)
		{
			cinFile >> firstnamesRead;
			counter++;
		}
		size = counter;
		cinFile.close();
		counter = 0;
		cinFile.open("names.txt");
		string surnamesarray[size];
		string firstnamesarray[size];	
		for (counter=0;counter<size;counter++)
		{
		cinFile >> surnamesarray[counter];
		cinFile >> firstnamesarray[counter];
		}
		cinFile.close();
		sortFirstnameFirst(surnamesarray,firstnamesarray,size);
		displayNames(surnamesarray,firstnamesarray,size);
	}
}



