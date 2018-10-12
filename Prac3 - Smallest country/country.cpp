#include<iostream>
#include<fstream>
#include<string>
#include<iomanip>
using namespace std;
int main()
	{
	ifstream cinFile;
	const string dashes = "------------------------------------------------------";
	string filename;
	string name;
	string land;
	int count = 1;
	int checker;
	double area;
	checker = 0;
	cout << "Give the file name: ";
	cin >> filename;
	cout << dashes << endl;
	cinFile.open(filename);
	if (cinFile)
	{
	while (cinFile >> land)
	{
	cinFile >> fixed>> area;
	if (checker == 0)
	{
	checker = area;
	name = land;
	}
	else if (checker > area)
	{
	checker = area;
	name = land;
	}
	cout <<right <<setw(3)<< count << "  ";
	cout <<left<< setw(30) << land << right;
	cout <<setw(10)<< setprecision(0)<< fixed <<area << endl;
	count++;
	
	
	}
	cout << dashes << endl;
	cout << "The smallest country on this list is " << name << endl;
	cinFile.close();	
	}
	else
	{
	cout << "File " << filename << " was not found!\n";
	}
	return 0;
	}
