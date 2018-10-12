#include<iostream>
using namespace std;
int main()
{
	double finalMark;
	cout << " Enter your mark for cos 132: ";
	cin >> finalMark;
	if (finalMark >= 75 && finalMark <= 100)
	cout << " Congratulations! Having " << finalMark <<" you pass with distinction.\n ";
	else if (finalMark >= 50 && finalMark < 75) 
	cout << " Good work, you passed with a mark of " << finalMark << endl;
	else if (finalMark >= 40 && finalMark < 50) 
	cout << " You are admitted to a re-exam. Work hard! You obtained a mark of " << finalMark << endl;
	else if (finalMark < 40 && finalMark >= 0)
	cout << " You unfortunately failed with a mark of " << finalMark << endl;
	else  
	cout << " Unfortunately " << finalMark <<" is a invalid input , Please run program again to try again.\n ";
	return 0;
}
