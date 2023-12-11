#include <stdio.h>
#include "date.h"

/**
 *
 */

int set_date(int day, int month, int year)
{
	struct Calender date;
	
	date.day = day;
	date.month = month;
	date.year = year;

	printf("Date set is: %02d/%02d/%4d\n", date.day, date.month, date.year);

	return (0);
}

