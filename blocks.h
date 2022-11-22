//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
    {"  ", "st_vol",                           1,       10  },
	  {" ", "st_bat_check",          						  30,		 0  },
    {" ", "st_web",                            30,      0  },
    {"  ", "st_date",                          300,      0  },
    {"  ", "st_clock",                         60,      0  },
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim = ' ';
