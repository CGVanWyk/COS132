#include<iostream>
#include<string>
using namespace std;
int main()
{
	string numberInput;
	cout << "Enter a nonzero positive number: ";
	getline(cin,numberInput);
	if (numberInput == "0")
{
	cout << "Error you have entered " << numberInput<<" which is an invalid number"<<endl;
}
	else
{
	string numberReverse;	
	string activeNumber;
	int numberLength = numberInput.length();
for (int i = numberLength-1; i >= 0; i--)
{
	
	activeNumber = numberInput[i];
	numberReverse = numberReverse + activeNumber;


	if (numberReverse.length() == numberInput.length())
{

	if (numberReverse == numberInput)
{

		

	cout << "The reverse of " << numberInput << " is " << numberReverse <<endl;
	cout << "Yes! This number is a palindrome." <<endl;
}
	else
{

	cout << "The reverse of " << numberInput << " is " << numberReverse <<endl;
	cout << "No. This number is not a palindrome." <<endl;
}	
}
}}
	return 0;
}
