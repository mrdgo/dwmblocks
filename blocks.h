//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
    {" ", " echo `iwgetid -r` `iwconfig wlp6s0 | awk -F= '/Signal level/{print $2}' | awk '{print 100 \" * \" $1}' | bc`% ", 120, 0 },

	{" ", "xbacklight | awk -F. '{print $1 \"%\"}'",				0,		12},
	
	{"", "~/dokumente/proj/slstatus/scripts/slbat.sh",				30,		0},

	{"", "~/dokumente/proj/slstatus/scripts/sound.sh",				0,		13},

	{"", "echo \" `date +\"%d.%m.%Y %T\"`\"",						1,		0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim = '|';
