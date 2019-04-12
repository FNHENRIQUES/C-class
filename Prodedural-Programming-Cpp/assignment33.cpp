/***********************************************************************
* Program:
*    Assignment 33, Pointer
*    Brother Honeycutt, CS124
* Author:
*    Fernando Negreiros Henriques
* Summary:
*    This program prompt user for balance from Sam and Sue,
*    and the cost date values, and subtract it from that has higher 
*    balance.
*    Estimated:  1.0 hrs
*    Actual:     2.0 hrs
*      Difficult create a Display function without broke the calculate
*    code.
************************************************************************/

#include <iostream>

using namespace std;

/**********************************************************************
 * Get Sam Balance
 ***********************************************************************/
float getSam()
{
   float value1;
   cout << "What is Sam's balance? ";
   cin >> value1;
   
   return value1;
}

/**********************************************************************
 * Get Sue balance
 ***********************************************************************/
float getSue()
{
   float value2;
   cout << "What is Sue's balance? ";
   cin >> value2;
   
   return value2;
}

/**********************************************************************
 * Get dinner value
 ***********************************************************************/
float getDinner()
{
   float dinner;
   cout  << "\tDinner:    ";
   cin >> dinner;

   return (dinner);
}

/**********************************************************************
 * Get the movie value
 ***********************************************************************/
float getMovie()
{
   float movie;
   cout << "\tMovie:     ";
   cin >> movie;

   return (movie);
}

/**********************************************************************
 * Get the ice cream value
 ***********************************************************************/
float getIcecream()
{
   float ice;
   cout << "\tIce cream: ";
   cin >> ice;
         
   return (ice);
}

/**********************************************************************
 * This function will receive Sam and Sue's balance and date values
 * it will search who has more balance and subtract date values from
 * him or her.
 ***********************************************************************/
void calculateValues(float value1, float value2, float dinner\
                     , float movie, float ice)

{
   // Receive Sam and Sue values
   float accountSam = value1;   
   float accountSue = value2;
   // Pointer
   float * pAccount;           

   // Condition for the higher balance
   if (accountSam > accountSue)
      pAccount = &accountSam;     // Sam higher addresses for his account.
   else                        
      pAccount = &accountSue;     // Sue higher addresses for her account.

   // Receive date values
   float priceDinner = dinner;
   float priceMovie = movie;
   float priceIceCream = ice;

   // Reducing debit date values from pointed account
   *pAccount -= priceDinner;    
   *pAccount -= priceMovie;
   *pAccount -= priceIceCream;


   // Precision 2 decimal, comma and not scientific values.
   cout.setf(ios::fixed);
   cout.setf(ios::showpoint);
   cout.precision(2);

   // Display Actual Balance.
   cout << "Sam's balance: $"
        << accountSam << endl;   
   cout << "Sue's balance: $"
        << accountSue << endl;   
   
}



/**********************************************************************
 * Main run the program
 ***********************************************************************/
int main()
{
   float value1 = getSam();
   float value2 = getSue();
   cout << "Cost of the date:\n";
   float dinner = getDinner();
   float movie = getMovie();
   float ice = getIcecream();
   
   calculateValues(value1, value2, dinner, movie, ice);  
  
   return 0;
}
