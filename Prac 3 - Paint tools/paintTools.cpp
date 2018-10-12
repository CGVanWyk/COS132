#include "paintTools.h"
#include<iomanip>
#include<cmath>
#include<iostream>
using namespace std;

	double getItemArea(double length, double breadth)
{
	return length*breadth;
}
	double getTotalArea(int number, double area)
{
	return number * area;
}
	double getActualArea(double total, double gaps)
{
	return total - gaps;
}
	double  getRoomArea(double width, double length, double height)
{
	return (2 * height) * (length + width);
}
	int  getTins(double area)
{
	return (ceil(area/SQM_PER_TIN));
}
	double  getHours(double area)
{	
	return area / (SQM_PER_DAY / 8.0);
}
