/***********************************************************************
* Program:
*    Assignment 43, Convert
*    Brother Honeycutt, CS124
* Author:
*    Fernando Negreiros Henriques
* Summary:
*    This program will convert values entered from display
*    from meters to feet using argv and argc. Workbook unit 4.
*
*    Estimated:  1.0 hrs   
*    Actual:     0.0 hrs
*      It is not a difficult program, but
*   I had been taking too much time correcting the Header
*   with this not properly made the assignment can`t be sent. 
************************************************************************/
#include <cstdlib> 
#include <iostream>

using namespace std;

/**********************************************************************
 * The function "main" does begin the program in this case with the command
 * cout display Hello World on screen.
 ***********************************************************************/
int main(int argc, char ** argv)
{
   cout.setf(ios::fixed);
   cout.setf(ios::showpoint);
   cout.precision(1);

   float value;

   for (int i = 1; i < argc; i++)
   {
      value = atof(argv[i]);
   
      cout << value << " feet is " << (value * 0.3048) << " meters\n";
   }
   return 0;
}
