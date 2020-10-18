#include <iostream>

using namespace std;

static const float FeetInCentimeter = 0.033f;

static const float InchesInCentimeter = 0.39f;

float CmToFeet( float Cm) {

    // Calculate feet
    return  Cm * FeetInCentimeter;
}

float CmToInches(float Cm) {

    // Calculate inches
    return Cm * InchesInCentimeter;
}


int main()
{

    // Enter a distance in cm
    cout << "Please enter a distance in cm" << endl;

    // Get the distance in cm
    float distanceInCentimeters;
    cin >> distanceInCentimeters;


    // Display info to user
    cout << "Distance in feet: " << CmToFeet(distanceInCentimeters) << endl;
    cout << "Distance in inches: " << CmToInches(distanceInCentimeters) << endl;
}

