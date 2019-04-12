/***********************************************************************
* Program:
*      Please describe briefly what was the most difficult part.
************************************************************************/

#include <iostream>
#include <fstream>

using namespace std;

/**********************************************************************
 * Add text here to describe what the function "main" does. Also don't forget
 * to fill this out with meaningful text or YOU WILL LOSE POINTS.
 ***********************************************************************/
void createBoard()
{
   char filename[26];
   char first[40], second[40], third[40];
   ofstream fout;
   cout << "what is the file name?\n";
   cin >> filename;
   fout.open(filename);
   cout <<"what´s the first line content?\n";
   cin >> first;
   cout <<"what´s the second line content?\n";
   cin >> second;
   cout <<"what´s the third line content?\n";
   cin >> third;


   cout << first << " " << second << " " << third << endl;
      
   fout << first << endl;
   fout << second << endl;
   fout << third << endl;
 
   fout.close();

}




int main()
{

   createBoard();
   return 0;
}
