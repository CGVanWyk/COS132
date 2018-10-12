#include<string>
#include<cstddef>
#include<iostream>
#include<iomanip>
using namespace std;
//Function sorts by both surname and first name, but with surnames first	
void sortSurnameFirst(string surnames[], string firstnames[], size_t size)
{
	string surnameRead;
	string nameRead;
	string nextRead;
	string nextName;
	char checkSurname,checkSurnameN,checkName,checkNameN;
	for (int c = 0;c<(size-1);c++)
	{
	surnameRead = surnames[c];
	nameRead = firstnames[c];
	nextName = firstnames[c+1];
	nextRead = surnames[c+1];	
	checkSurname = surnameRead[0];
	checkSurnameN = nextRead[0];
	checkName = nameRead[0];
	checkNameN = nextName[0];
	checkSurname = toupper(checkSurname);
	checkSurnameN = toupper(checkSurnameN);
	checkName = toupper(checkName);
	checkNameN = toupper(checkNameN);
	
	if (checkSurname > checkSurnameN)
	{
	surnames[c] = nextRead;
	surnames[c+1] = surnameRead;
	firstnames[c] = nextName;
	firstnames[c+1] = nameRead;
	c=-1;
	}
	}
}

//Function sorts by both surname and first name, but with first names first
void sortFirstnameFirst(string surnames[], string firstnames[], size_t size)
{
	string surnameRead;
	string nameRead;
	string nextRead;
	string nextName;
	char checkSurname,checkSurnameN,checkName,checkNameN;
	for (int c = 0;c<(size-1);c++)
	{
	surnameRead = surnames[c];
	nameRead = firstnames[c];
	nextName = firstnames[c+1];
	nextRead = surnames[c+1];	
	checkSurname = surnameRead[0];
	checkSurnameN = nextRead[0];
	checkName = nameRead[0];
	checkNameN = nextName[0];
	checkSurname = toupper(checkSurname);
	checkSurnameN = toupper(checkSurnameN);
	checkName = toupper(checkName);
	checkNameN = toupper(checkNameN);
	
	if (checkName > checkNameN)
	{
	surnames[c] = nextRead;
	surnames[c+1] = surnameRead;
	firstnames[c] = nextName;
	firstnames[c+1] = nameRead;
	c=-1;
	}
	}
}
//Function displays the names in the array in the order in which they are stored
void displayNames(string surnames[], string firstnames[], size_t size)
{
	cout << "The sorted names by first names then surnames are:\n";
	cout << "Surnames" << "            " << "First names" << endl;
	cout << "----------------------------------------\n";
	for (int counter=0;counter<size;counter++)
	{
	cout << left << setw(20) << surnames[counter] << firstnames[counter] << endl;
	}
}
