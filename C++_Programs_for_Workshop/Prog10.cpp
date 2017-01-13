// Written for Texas Instruments-Center for Embedded Product Design by Vaibhav Choudhary. This code may be copied 
// and/or modified freely according to GNU General Public License version 2 as published by the Free Software Foundation.
#include <iostream>
#include <unistd.h> // for gethostname and getusename
#include <limits.h> //for the max limits
using namespace std;

int main(int argc, char const *argv[])
{
	
	char hostname[HOST_NAME_MAX];
    char username[LOGIN_NAME_MAX];
    gethostname(hostname, HOST_NAME_MAX); //store the Hostname and limit the transfer to the maximum number as defined in limits
    getlogin_r(username, LOGIN_NAME_MAX);
	cout<<"Hostname is :"<<hostname<<endl;
	cout<<"Username is :"<<username<<endl;
	return 0;
    
}