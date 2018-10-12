#include<iostream>
#include<iomanip>
using namespace std;
const double dollar = 0.05917;
const double euros = 0.05681;
int main()
{
	double rand;
	double calDollars;
	double calEuros;
	cout << "Enter Rand:";
	cin >> rand;
	calDollars = rand * 0.05917;
	calEuros = rand * 0.05681;
	cout << setprecision(2) << fixed << rand << " Rands(s) = " << calDollars << " Dollar(s)\n";
	cout << setprecision(2) << fixed << rand << " Rands(s) = " << calEuros << " Euro(s)\n";
	return 0;
	
	
	
}
