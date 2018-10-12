#include <iostream>		
using namespace std;

const double SPEED = 120.0; 
	
int main()				
{
	double timeTravelled;
	double calculate;
	cout << "Enter the hours traveled:";
	cin >> timeTravelled;
	calculate = static_cast<double>(timeTravelled) * static_cast<double>(SPEED);
	cout << "The drone traveled " << calculate << " km in " << timeTravelled << " hours.\n";
	return 0;
}
