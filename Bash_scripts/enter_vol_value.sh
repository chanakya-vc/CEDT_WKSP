# Written for Texas Instruments-Center for Embedded Product Design by Vaibhav Choudhary. This code may be copied  
# and/or modified freely according to GNU General Public License version 2 as published by the Free Software Foundation.

#Script to Input and set Volume.
#!/bin/bash
clear   #clears the screen
while : ;  #Runs an infinte loop
do
	echo "Please Enter the Volume level you wish to set"
	read vol      #Input the volume level to be set
	amixer -D pulse sset Master $vol%
	echo "The volume being set is $vol%"
done