/***********************************************************************
* Program:
*    Assignment 11, Output Monthly Budget
*    Professor Honeycutt, CS124
* Author:
*    Fernando Negreiros Henriques
* Summary:
*    This program will display on screen the budget information
*    I will use commands tab, set width and correct number format..
*
*    Estimated:  0.45 hrs
*    Actual:     1.10 hrs
*      I had problem with my computer crash yesterday and
*    it was a little difficult know which command use.
************************************************************************/

#include <iostream>
#include <iomanip>
using namespace std;

/**********************************************************************
 * main() the function format the numbers as command cout above.
 ***********************************************************************/
int main()
{
   // format the output for money
   cout.setf(ios::fixed);     // no scientific notation
   cout.setf(ios::showpoint); // always show the decimal point
   cout.precision(2);         // unless you own a gas station, money
                              //    is formatted to two decimals
   
   // display the first line
   cout     << "\tItem           "
            << "Projected\n";
   
   // display Border1
   cout << "\t=============  "
        << "==========\n";
   

   // display the second line
   cout << "\tIncome         "
        << "$"
        << setw(9) << 1000.00
        << endl;

   // display the Third line
   cout << "\tTaxes          "
        << "$"
        << setw(9) << 100.00
        << endl;

   // display the Fourth line
   cout << "\tTithing        "
        << "$"
        << setw(9) << 100.00
        << endl;

   // display the Fifth Line
   cout << "\tLiving         "
        << "$"
        << setw(9) << 650.00
        << endl;

   // display the Sixth Line
   cout << "\tOther          "
        << "$"
        << setw(9) << 90.00
        << endl;

   // display Border2
   cout << "\t=============  "
        << "==========\n";

   // display the Seventh Line
   cout << "\tDelta          "
        << "$"
// display the Sixth Line
   cout << "\tOther          "
        << "$"
        << setw(9) << 90.00
        << endl;

   // display Border2
   cout << "\t=============  "
        << "==========\n";

   // display the Seventh Line
   cout << "\tDelta          " 
        << "$"                  
        << setw(9) << 60.00
        << endl;

   return 0;
}

