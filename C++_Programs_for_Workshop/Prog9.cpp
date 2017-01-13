// Written for Texas Instruments-Center for Embedded Product Design by Vaibhav Choudhary. This code may be copied 
// and/or modified freely according to GNU General Public License version 2 as published by the Free Software Foundation.
#include <iostream>
#include <signal.h>
#include <stdlib.h>
using namespace std;
void my_function(int a) //Function to handle the signal interrupt.
{
	cout<<"\t";
	cout<<"BYE"<<endl;
	exit(1);
}

int main(int argc, char const *argv[])
{
	cout <<"Hello"<<endl;
	cout<<"Waiting for you to exit!!"<<endl;
    signal(SIGINT,my_function);         //Function to register a signal and corresponding handler in POSIX based system
    while(1);
    return 0;
}