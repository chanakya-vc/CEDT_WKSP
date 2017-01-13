// Written for Texas Instruments-Center for Embedded Product Design by Vaibhav Choudhary. This code may be copied  
// and/or modified freely according to GNU General Public License version 2 as published by the Free Software Foundation.

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main () {
  ofstream myfile_write ("names.txt"); // Open a write stream to names.txt file
  string names;
  while(1)
  {
  	cin>>names;
  	if(names=="exit")
  	{
  		break;
  	}
  	myfile_write << names <<"\n";
  }
  myfile_write.close();     //Close the given file
    
  return 0;
}