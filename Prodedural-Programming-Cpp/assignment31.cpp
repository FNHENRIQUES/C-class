/***********************************************************************
* Program:
*    Assignment 31, Array
*    Brother Honeycutt, CS124
* Author:
*    Fernando Negreiros Henriques
* Summary: 
*    This program prompt user for 10 grades, sum and calculate the average of
*    grades using array data.
*    Estimated:  1.0 hrs   
*    Actual:     0.0 hrs
*      difficult
*    and 
************************************************************************/

#include <iostream>
#include <cassert>

using namespace std;

/**********************************************************************
 * Function get grades receive grades from user and storage in memory
 * array and sum the values.
 ***********************************************************************/
float getGrades()

{
   const int SIZE = 10;            
   int listDestination[SIZE];           
   int listSource[SIZE];

   assert (listDestination >= 0);
   assert (listSource >= 0);
   
   // Load a list of grades.
   for (int i = 0; i < SIZE; i++)
   {

      cout << "Grade " << i + 1 << ": "; 
      cin  >> listSource[i];            
   }

   // Copy the list
   for (int i = 0; i < SIZE; i++)
   {

      listDestination[i] = listSource[i]; 
   }
   return listDestination[i];
}
   
/**********************************************************************
 * Function average grades calculate the average of the sum get grade value.
 ***********************************************************************/
int averageGrades(int listDestination[SIZE])
{
   assert(listDestination > 0);
   // Sum the values from each array
   int sum = 0;
   int i;
   int SIZE = 10;
   for (i = 0; i < SIZE; i++)        
   {
      sum += listDestination[i]; 
   }
 
   int average;
   // Calculate the average of the getGrades sum value.
   average = sum / i;
   cout << sum << endl;
   return average;
}


/**********************************************************************
 * Display function will show on screen the average of grades average.
 ***********************************************************************/
void display(int average)
{
   cout.setf(ios::fixed); // not scientific mode.
   cout.precision(0);   // no decimal precision.
  
   if (average < 0)
      cout << "Average Grade: ---%" << endl;
   else
   cout << "Average Grade: " << average << "%" << endl;
   
}

/**********************************************************************
 * Function main call variables to get grade values calculate average 
 * and display the result.
 ***********************************************************************/
int main()
{
   int listDestination = getGrades();
   int average = averageGrades();

   display(average);
   
   return 0;
}
