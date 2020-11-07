/* Prints a date in legal form and prints the day of
the week when the input date is displayed */

#include <stdio.h>

int main(void)
{
	int month, day, year, week;

	printf("Enter date (mm/dd/yyyy): ");
	scanf("%d /%d /%d", &month, &day, &year);

	if (month > 12 || month <= 0) //排除错误情况 
	{
		printf("month is error.\n");
		return 0;
	}
	if (day > 31 || day <= 0)
	{
		printf("day is error.\n");
		return 0;
	}
	
	switch (month){
		case 4: case 6: case 9: case 11:
			if (day > 30){
				printf("day is error.\n");
				return 0;
			}
		case 2:
			{ 
		  if ( year % 4 == 0 && year % 100 != 0 || year % 400 == 0) //区分闰年平年 
		    {
		    	if (day >= 30){
		    		printf ("day is error.\n");
		    		return 0;
				}
			}
			else if (day >= 29){
				printf("day is error.\n");
				return 0;
			}
	}
	} 
	int tmp_month = month;
	int tmp_year = year;
	if (tmp_month == 1 || tmp_month == 2)
	{
		tmp_month += 12;
		tmp_year--;
	}
	week = (day + 2 * tmp_month + 3 * (tmp_month + 1) / 5 +
			tmp_year + tmp_year / 4 - tmp_year / 100 + tmp_year / 400) %
		   7; //计算星期几 
	switch (week)
	{
	case 0:
		printf("星期一\n"); break;
	case 1:
		printf("星期二\n"); break;
	case 2:
		printf("星期三\n"); break;
	case 3:
		printf("星期四\n"); break;
	case 4:
		printf("星期五\n"); break;
	case 5:
		printf("星期六\n"); break;
	case 6:
		printf("星期日\n"); break;
	}
	printf("Dated this %d", day);
	switch (day)
	{
	case 1: case 21: case 31:
		printf("st"); break;
	case 2: case 22:
		printf("nd"); break;
	case 3: case 23:
		printf("rd"); break;
	default:
		printf("th"); break;
	}
	printf(" day of ");

	switch (month)
	{
	case 1:
		printf("January"); break;
	case 2:
	    printf("February"); break;
	case 3:
		printf("March"); break;
	case 4:
        printf("March"); break;
	case 5:
		printf("May"); break;
	case 6:
	    printf("June"); break;
	case 7:
		printf("July"); break;
	case 8:
		printf("August"); break;
	case 9:
	    printf("September"); break;
	case 10:
		printf("October"); break;
	case 11:
	    printf("November"); break;
	case 12:
		printf("December"); break;
	}

	printf(", %.4d.\n", year);
	return 0;
}
