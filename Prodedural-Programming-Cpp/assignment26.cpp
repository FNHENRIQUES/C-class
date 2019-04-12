/***********************************************************************
* Program:
*    Assignment 26, Files
*    Brother Honeycutt, CS124
* Author:
*    Fernando Negreiros Henriques
* Summary: 
*    This program will read 10 grades from a file and display the average.
*
*    Estimated:  1.0 hrs   
*    Actual:     8.0 hrs
*      I got it with the Professor´s video help, I never realized the use
*    of constant char and yet don´t know why not using fin.close expression.
************************************************************************/

#include <iostream>
#include <fstream>

using namespace std;

/**********************************************************************
 * This function ask the user for the file name.
 ***********************************************************************/
void getFilename(char filename[256])
{
   cout << "Please enter the filename: ";
   cin >> filename;
}

/**********************************************************************
 * This function will read the file and compute the average.
 ***********************************************************************/
float readFile(const char filename[])
{
   // open file
   ifstream fin(filename);
   // check if there´s error in open the file
   if (fin.fail())
   {
      cout << "Error reading file \""
           << filename << "\"" << endl;
      return false;
   }
   // read file and compute average
   int grade;
   int average = 0;
   int num = 0;
   
   while (fin >> grade)
   {
      num++;
      average += grade;
   }

   // Just 10 item can be read
   if (num != 10)
   {
      cout << "Error reading file \"" << filename << "\"\n";
      return false;
   }

   // close stream
   //   fin.close;
    
   return ((float)average) / num;
}

/**********************************************************************
 * This function will display on screen the average of data received.
 ***********************************************************************/
void display(float average)

{
   cout.setf(ios::fixed);
   cout.precision(0);
   
   cout << "Average Grade: " << average << "%\n";
   
}


/**********************************************************************
 * The main function will call the functions to perform the program.
 ***********************************************************************/
int main()
{
   char filename [256];
   // Get file name from user
   getFilename(filename);

   // Read the contents of file and return the average
   float average = readFile(filename);

   // Display the average to the user
   if (average > 0)
      display(average);

   return 0;
}
