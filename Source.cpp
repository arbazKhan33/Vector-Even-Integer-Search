// This code was compiled on Microsoft Visual Studio 2019
// Will search between 2 different vectors and retun the coordinates of the even integers
// Written by Arbaz Khan         



#include<iostream>    //declare neccessary libraries
#include<vector>

using namespace std;

void Display_Locations(vector<int> coordinates)               //  displays the location 
{

    if (coordinates[0] == -1)                    // if no even numbers are present 
    {
        cout << " There are no even numbers present in this set " << endl;      // display to console
        cout << "************************************************" << endl;

        return;
    }

    for (int var = 0; var < coordinates.size(); var += 2)             // if there are even numbers present coordinates are sent to console
        cout << coordinates[var] << " "
        << coordinates[var + 1] << endl;
}

vector<int>SearchEven(vector < vector<int> > EvenNumbers)                     // vector that will be able to search locations
{
    vector<int>locations;                                         // vector that will store the coordinates 

    for (int alpha = 0; alpha < EvenNumbers.size(); alpha++)
    {
        for (int delta = 0; delta < EvenNumbers[alpha].size(); delta++)
        {

            if (EvenNumbers[alpha][delta] % 2 == 0)                  //displays the coordinates 
            {                                                        // if the integer is even 
                locations.push_back(alpha);
                locations.push_back(delta);
            }
        }
    }

    if (locations.size() == 0)                    // if size is equal to zero, -1 is is sent to vector
        locations.push_back(-1);

    return locations;                // call the Locations vector 
}

int main()              // main function which contains Data1, Data2 vectors 

{
	vector < vector<int> > 	Data1 = { { 1,1,3,1,5 },{ 1,1,3,1,5 },{ 1,1,3,1,5 },{ 1,1,3,1,5 },{ 1,1,3,1,5 } };            //declare vectors Data1
	vector < vector<int> > Data2 = { { 1,2,3,4,5,6,7,8,9,10 },{ -2,-1,2,1},{ },{ 2,2,2 } };                               //and data2
    
    vector<int> EvenNumLocations;                    // to get the location of the even numbers

    cout << " Data1 Results : " << endl;             //display data to console
    cout << "----------------" << endl;

    EvenNumLocations = SearchEven(Data1);
    Display_Locations(EvenNumLocations);

    cout << " Data2 Results : " << endl;
    cout << "----------------" << endl;

    EvenNumLocations = SearchEven(Data2);
    Display_Locations(EvenNumLocations);

	return 0;                                   // stop running
}



