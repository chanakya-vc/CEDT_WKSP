// Written for Texas Instruments-Center for Embedded Product Design by Vaibhav Choudhary. This code may be copied  
// and/or modified freely according to GNU General Public License version 2 as published by the Free Software Foundation.
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main () {
  string line;
  ifstream myfile_read ("names.txt"); //Open a Read Stream to the file
  if (myfile_read.is_open())
  {
    while ( getline (myfile_read,line) )
    {
      cout << line << '\n';
    }
    myfile_read.close();     //Close the stream
  }
  else
  {
  	cout<<"File does not exist";
  } 

  return 0;
}