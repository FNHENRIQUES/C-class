/***********************************************************************
* Program:
*    Assignment 40, Tic Tac Toe
*    Brother Honeycutt, CS124
* Author:
*    Fernando Negreiros Henriques
* Summary:
*    This program will read a file and display information on a tic
*    tac toe board and then create a new file with that board. 
*   
*    Estimated:  1.0 hrs
*    Actual:     9.0 hrs
*      I could not find out how change point to space in this challenge.
************************************************************************/

#include <iostream>
#include <fstream>


using namespace std;

const int SIZE = 9;

/*****************************************************************************
 * get filename  for input file.
 **************************************************************************/
void getFilename(char filename[])
{
   cout << "Enter source filename: " ;
   cin >> filename;
   
}

/*****************************************************************************
 * READ FILE to get multidimentional array. 
 **************************************************************************/
void readFile(char filename[], char board[][SIZE])
{
   ifstream fin(filename);           // open file
   // return error in opening file
   if (fin.fail())
   {
      cout << "Can't open file "
           << filename;

   }

   
   // read the file in to multidimentional array
    
   for (int row = 0; row < SIZE; row++)
   {
      for (int col = 0; col < SIZE; col++)
      {
         fin >> board [row][col];
      }
      
   }
   // Close the stream
   fin.close();
     

}
   
/************************************************************************
 * DISPLAY will display the board on screen.
 **********************************************************************/
void display (char board[][SIZE])
{
   // Display the contents of the board
   for (int row = 0; row < SIZE; row++)
   {
      for (int col = 0; col < SIZE; col++)
      {
         cout << " ";
         
         if (board[row][col] == '.')
            cout << "  ";
         else
         cout << board[row][col] << " ";

         if (col != 2)
            cout << "|";
      }
      cout << endl;

      if (row != 2)
         cout << "---+---+---\n";
   }

  

}   



/**************************************************************************
 * GETDESTFILENAME will prompt user the file name for new board.
 **************************************************************************/
void getOutputFilename(char filename[])
{
   cout << "Enter destination filename: " ;
   cin >> filename;
   
}

/**************************************************************************
 * WRITEBOARD will create a new file with the board content.
 *************************************************************************/
void writeFile (char filename[], const char board[][SIZE])
{
   ofstream fout;
   
   fout.open(filename);

   if (fout.fail())
   {
      cout <<   "Error falie could not open.";
   }
   for (int row = 0; row < SIZE; row++)
   {
      for (int col = 0; col < SIZE; col++)
      {
         if (col == 2)
            fout << endl;
         else
         fout << board[row][col] << " ";
      }
   }

   fout.close();

}




/**********************************************************************
 * MAIN run the program calling sub functions.
 ***********************************************************************/
int main()
{
   char filename[256];
   char board [SIZE][SIZE];

   // 1. get the file name
   getFilename(filename);

   // 2. read file
   readFile(filename, board);

   // 3. Display board
   display (board);

   // 4. get filename
   getOutputFilename(filename);

   // 5 write filename
   writeFile(filename, board);

   cout << "File written" << endl;

   return 0;

}
