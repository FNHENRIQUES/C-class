/***********************************************************************
* Program:
*    Assignment 23, Loop       
*    Professor Honeycutt, CS124
* Author:
*    Fernando Negreiros Henriques
* Summary:
*    This program will multiply a number and sum the values of this number
*    less than 100.
*    Before you begin working, estimate the time you think it will
*    take you to do the assignment and include it in this header block.
*    Before you submit the assignment include the actual time it took.
*
*    Estimated:  1.0 hrs
*    Actual:     6.0 hrs
*      I´m really very sad I can´t realize how fix it´s counting 100 item 
*    even I said the variable is less then 100 I spent a lot of time and
*    usually I have not enough time just 1 hour per day, cause I work and
*    I´m doing FDENG 101 so it´s very overwhelming for me.
************************************************************************/

#include <iostream>
#include <iomanip>
using namespace std;

/**********************************************************************
 * Main do all operation.
 ***********************************************************************/
int main()
{
   int i;
   float sum = 0;
   int num;
   cout << "What multiples are we adding? ";
   cin >> i;
   num = 0;
   
   for (i = i; sum < 100; i + i )
 

   {
      // This expression  with the increment do the multiply        
      sum += i;
      //This expression sum the result.
      num += sum;
  
   }
         
   
   cout << "The sum of multiples of " << i
        << " less than 100 are: " << num << endl;
   
   return 0;
}
