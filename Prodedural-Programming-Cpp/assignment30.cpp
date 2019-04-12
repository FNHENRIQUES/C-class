/***********************************************************************
* Program:
*    Assignment 30, Array
*    Brother Honeycutt, CS124
* Author:
*    Fernando Negreiros Henriques
* Summary: 
*    This program prompt user for 10 grades, sum and calculate the average of
*    grades using array data.
*    Estimated:  1.0 hrs   
*    Actual:     1.0 hrs
*      From the beginning was difficult understand what program was doing,
*    but I realized in recording and reading file.
************************************************************************/

#include <iostream>
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
   // Sum the values from each array
   int sum = 0;

   for (int i = 0; i < SIZE; i++)        
   {
      sum += listDestination[i];
   }

   return sum;

}
   
/**********************************************************************
 * Function average grades calculate the average of the sum get grade value.
 ***********************************************************************/
int averageGrades(int sum)
{
   int average;
   int SIZE = 10;
   // Calculate the average of the getGrades sum value.
   average = sum / SIZE;
   return average;
}


/**********************************************************************
 * Display function will show on screen the result of grades average.
 ***********************************************************************/
void display(int average)
{
   cout.setf(ios::fixed); // not scientific mode.
   cout.precision(0);   // no decimal precision.
   cout << "Average Grade: " << average << "%" << endl;
   
}

/**********************************************************************
 * Function main call variables to get grade values calculate average 
 * and display the result.
 ***********************************************************************/
int main()
{
   int sum = getGrades();
   int average = averageGrades(sum);
   display(average);
   
   return 0;
}
