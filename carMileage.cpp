/*


Algorithm was designed in the following series of steps:
1) Declare variables with predefined initializations for car tank size and already defined averages for town and highway
2) Derive the distance car can travel in a town using distance formula 
3) Derive the distance a car can travel on a highway using distance formula 
5) Output distance a car can travel for town and highway calculated in steps 3-4

Functions/Formulas:
Distance = Number of Gallons * Average Miles per Gallon
townDistance = carTankCapacity * averageMilesTown;
highwayDistance = carTankCapacity * averageMilesHighway;

Function in this case was only the main function with all data, formulas and output


Revision History:
January 30, 2019: First working edition created, revised and completed


*/

#include <iostream>
using namespace std;
int main()
{
	// This represents the average miles/mileage for the car within a town
	double averageMilesTown = 23.5;

	// This represents the average miles/mileage for the car on highway
	double averageMilesHighway = 28.9;

	//This represents the size of the car tank 
	double carTankCapacity = 20;

	//This formula is derived from the distance formula specific for town distance in miles per gallon
	double townDistance = carTankCapacity * averageMilesTown;

	//This formula is derived from the distance formula specific for highway distance in miles per gallon
	double highwayDistance = carTankCapacity * averageMilesHighway;

	// The output for how far the car can travel within a town is displayed in miles per gallon
	cout << "The distance a car can travel within a town is: " << townDistance << " Miles per Gallon" << endl;

	//The distance for car distance on a highway is displayed as miles per gallon
	cout << "The distance a car can travel on a highway is: " << highwayDistance <<  " Miles per Gallon" << endl;


    return 0;
}

