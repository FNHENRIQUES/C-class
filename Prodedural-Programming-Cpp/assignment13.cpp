/***********************************************************************
* Program:
*    Assignment 13, Converting Fahrenheit to Celsius
*    Professor Honeycutt, CS124
* Author:
*    Fernando Negreiros Henriques
* Summary: 
*    This program will convert value in Fahrenheit to Celsius.
*    I am using knowledge of variables and math expressions.
*
*    Estimated:  0.5 hrs   
*    Actual:     7.0 hrs
*      It is a very simple program, but I took long time to do because
*    There is not explanation on book to the right place of formula and
*    why is not working finding out everything by your self is very hard,
*    a simple explanation could save a lot of time :(.
************************************************************************/

#include <iostream>
using namespace std;

/**********************************************************************
 * Function main does will receive value of Fahrenheit, will convert
 * to Celsius and display the result on screen.
 ***********************************************************************/
int main()
{
   float f;
   

   cout << "Please enter Fahrenheit degrees: ";
   cin >> f;
   
   
   float c = (f - 32) * 5 / 9;

   cout.setf(ios::fixed);
   cout.precision(0);

   cout << "Celsius: "
        << c << "\n";


   return 0;
}
