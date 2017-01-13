# Written for Texas Instruments-Center for Embedded Product Design by Vaibhav Choudhary. This code may be copied 
# and/or modified freely according to GNU General Public License version 2 as published by the Free Software Foundation.

#Script to Increase and Decrease Volume.
#!/bin/bash
clear   #clears the screen
for i in `seq 0 10`  #for loop in range 0-10,increase volume
do 
	 vol=$(($i * 10))
	 echo " Volume is : $vol"
	 amixer -D pulse sset Master $vol%   #amixer utility part of the Advanced Linux Sound Architecture(ALSA) framework
	 sleep 3							 # Delay of 3 seconds
done

sleep 3

for ((j=10;j>=1;j--))   #for loop in range 0-10,decrease volume
do 
	 vol=$(($j * 10))
	 echo " Volume is : $vol"
	 amixer -D pulse sset Master $vol%   #amixer utility part of the Advanced Linux Sound Architecture(ALSA) framework
	 sleep 3							 # Delay of 3 seconds
done