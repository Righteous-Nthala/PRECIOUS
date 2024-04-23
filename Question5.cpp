/*This program calculates the area of 
shapes*/

#include <iostream>
using namespace std;

//declare function for calculating area of a triangle
double areaOfTriangle(double base, double height);

//declare function for calculating area of a rectangle
double areaOfRectangle(double length, double width);

//declare function that calculates the area of square
double areaOfSquare(double length);

// This is main function
int main()
{

// ask user to select shape
cout<<"Please select the area of the shape to calculate"<<endl;
cout<<"1. Square \n2. Rectangle \n3.Triangle \n4.Quit program"<<endl;
cout<<"\nEnter selection: ";
int selection;
cin >> selection;

//compute the area of the selected shape
if (selection == 1) {
    //prompt user to enter lenght of the square
    cout<<"Enter length of a square: ";
    double length;
    cin>>length;
    double area = areaOfSquare(length);

    //display area of the square to the console
    cout<<"The area of a square of length "<<length<<" is: "<<area;
}
else if (selection == 2) {
    // prompt the user to enter length and width of the rectangle
    cout<<"Enter length of your rectangle: ";
    double length;
    cin >> length;
    cout<<"Enter width: ";
    double width;
    cin >> width;

    // call the areaOfRectangle function
    double area = areaOfRectangle(length, width);

    // display area of the rectangle onto the console
    cout<<"The area of a rectangle of length "<<length<<" and width "<<width<<" is: "<<area<<endl;
}
else if (selection == 3) {
    // Ask user to enter the height and the base of the triangle
    cout<<"Enter base of the triangle: ";
    double base;
    cin >> base;
    cout<<"Enter height of the triangle: ";
    double height;
    cin >> height;

    //involke the areaOfTriangle function to compute the area of the triangle
    double area = areaOfTriangle(base, height);

    //console output
    cout<<"The area of the triangle of base "<<base<<" and height "<<height<<" is: "<<area<<endl;

} 

return 0;

} 

double areaOfSquare(double length)
{

// compute area of the square
double areaOfSquare = length *length;

//return area of the square to main function
return areaOfSquare;

}

double areaOfRectangle(double length, double width)
{

//compute the area of the rectangle and return it to the main function
double areaofRectangle = length * width;

return areaofRectangle;

}

double areaOfTriangle(double base, double height)
{

// calculate the area of the triangle
double areaOfTriangle = 0.5 * base * height;

//return area to the main functiion
return areaOfTriangle;

}