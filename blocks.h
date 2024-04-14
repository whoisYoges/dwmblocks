//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{" ", "sb-brightness", 60, 5},
	{"", "sb-battery", 5, 0},
	{"", "sb-speeker", 5, 6},
	{"", "sb-microphone", 5, 7},
	{" ", "date '+%a %Y-%m-%d %H:%M'", 30, 0},
};

//sets delimiter between status commands. NULL character ('\0') means no delimiter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
