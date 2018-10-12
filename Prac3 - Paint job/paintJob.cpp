#include<iostream>
#include "paintTools.h"
#include<string>
#include<iomanip>
using namespace std;
	const string stars = "*****************************************\n";
	const string dashes = "----------------------------------------------------\n";
int main()
{
	int rooms,doors,windows,tins;
	double actualArea,area,length,breadth,areaPainted,hours,Charge,paintCost,heightWalls,windowArea,doorArea,roomArea;

	cout << "Welcome to the paint job calculator." << endl;
	cout << stars;
	cout << "Enter the number of rooms to be painted: ";
	cin >> rooms;
	cout << "Enter the height of the walls to be painted: ";
	cin >> heightWalls;
	tins = 0;
	areaPainted = 0;
	paintCost =0;
	for (int count = 1;count <= rooms;count++)
{
	cout << dashes;
	cout << "Room " << count << ":\n";
	cout << "Enter the length: ";
	cin >> length;
	cout << "Enter the breadth: ";
	cin >> breadth;
	cout << "Enter the number of doors: ";
	cin >> doors;
	cout << "Enter the number of windows: ";
	cin >> windows;
	area += getRoomArea(breadth,length,heightWalls);
	windowArea = getTotalArea(windows,WINDOW_AREA);
	doorArea = getTotalArea(doors,DOOR_AREA);
	actualArea = getActualArea(area,(doorArea+windowArea));
	roomArea = getRoomArea(breadth, length,heightWalls);
	tins = tins + getTins(actualArea);
	hours = hours +getHours(actualArea);
	areaPainted += actualArea;
	Charge = Charge*LABOUR_PER_HOUR;
	paintCost = (tins * PRICE_PER_TIN) + Charge;
}
	cout << stars;
	cout << "The area to be painted is " << fixed << setprecision(2) << areaPainted << " square meters" << endl;
	cout << "The number of tins of paint required is " << tins << " tin(s)";
	cout << "The hours of labour required is " << fixed << setprecision(2) << hours << " hours" << endl;
	Charge = hours * 63.20;
	cout << "The labour charge is R" << fixed << setprecision(2) << Charge << endl;
	cout << "The total paint job cost is R"<<fixed << setprecision(2) << paintCost <<endl;
	return 0;
}


