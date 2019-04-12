/***********************************************************************
* Program:
*    Project 10, Mad Lib
*    Professor Honeycutt, CS124
* Author:
*    Fernando Negreiros Henriques
* Summary: 
*    This program receive information from user, read a file,
*    replace the user information on file and print a text changed.
*    Before you submit the assignment include the actual time it took.
*    Estimated:  2.0 hrs   
*    Actual:     6.0 hrs
*    I had some difficult in print the new text on screen and 
*    to find out the use of ignore to not replay the first 
*    prompt for an animal on the same line.
************************************************************************/

#include <iostream>
#include <fstream>
#include <cassert>
#include <cctype>

using namespace std;


/*********************************************************************
 * The function getFilename just will get the name of file to read.
 *********************************************************************/
void getFilename(char fileName[])
{
   cout << "Please enter the filename of the Mad Lib: ";
   cin >> fileName;

}


/*********************************************************************
 * The function read file will open the file read it and 
 *********************************************************************/
int readFile(char fileName[], char story[][32]) // story text max 32 words
{
   // Declare the output stream
   ifstream fin (fileName);
   if (fin.fail())
   {
      cout << "Error reading " << fileName << endl;
      return 0;
   }

   int count = 0;
   // Read the data
   while (!fin.eof())
   {
      fin >> story[count];
      count++;
   }
 
   // Close the stream
   fin.close();

   
   return count;
}

/**********************************************************************
 * This function will prompt user for entry words and will
 * substitute on text story.
 *********************************************************************/
void askQuestion(int count, char story[][32])
{
   for (int i = 0; i < count; i++) 
   {
      if (story[i][0] == '<' && isalpha(story[i][1]))
      {
         cout << "\t";

         for (int a = 1; story[i][a] != '>'; a++) 
    
         {
            if (a == 1)
               cout << (char)toupper(story[i][1]);
            else if (story[i][a] == '_')
               cout << ' ';
            else
               cout << story[i][a];
         }
         cout << ": ";
         cin.getline(story[i], 256);
      }
   }
}

/***********************************************************************
 * This function will print on screen the story changed.
 *********************************************************************/
void display(int count, char story[][32])
{
   for (int i = 0; i < count; i++)
   {
      cout << story[i];
   }
   cout << endl; 
}


/**********************************************************************
 * "main" does the loop for the question
 * if the user want play again, receive  call the sub routines
 * and put on screen the thank for playing.
 ***********************************************************************/
int main()
{
   char story[256][32];
   char fileName[256];
   char b;
   b = 'y';
   // do while will run the program while yes, for user want play again.
   do
   {
      getFilename(fileName);
      cin.ignore();
      int count = readFile(fileName, story);
      askQuestion(count, story);
      display(count, story);

      cout << "Do you want to play again (y/n)? ";
      cin >> b;
   }
   while (b == 'y');
   
   cout << "Thank you for playing.\n";
   return 0;
   
}
