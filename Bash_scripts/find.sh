# Written for Texas Instruments-Center for Embedded Product Design by Vaibhav Choudhary. This code may be copied 
# and/or modified freely according to GNU General Public License version 2 as published by the Free Software Foundation.

#Script to Find if a particular audio file exists and play it, otherwise return.
#!/bin/bash
FILE=$1  # $1 Variable picks up the second continuous(without space) argument written after calling bash-terminal
clear   #clears the screen
if [ -f $FILE ];then   # Find the file
	echo "File $FILE exist"
	aplay $FILE         # aplay is a utility in the ALSA framework that allows playing music in raw format from terminal
else
	echo "File $FILE does not exist"
	aplay /home/vc/CEDT_WKSP/Bash_scripts/songs/Tarana.wav
fi
