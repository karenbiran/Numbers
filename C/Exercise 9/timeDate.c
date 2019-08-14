#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include<time.h>
#include<time&date.h>

date_t* createDate()
{
    date_t *date1;
    int dd,mm,yy,ans=0;
    printf("Enter date (DD/MM/YYYY format): ");
    scanf("%d/%d/%d",&dd,&mm,&yy);
    ans=CheckDate(dd,mm,yy);
	if (ans == 0) 
	{
		date1 = malloc(sizeof(date_t));
	}
    else
    {
        printf("Invalid date.\n");
        return NULL;
    }
}
void addDate(date_t *date1,int addDays)
    int daysToAdd=addDays->daysToAdd;
    int daysInMonth[13]={31,28,31,30,31,30,31,31,30,31,30,31};
    if(date1->year%4==0) && (date1->year%100!=0)||(date1->year%400==0)
    {
        daysInMonth[1]=29;
    }
    printf("%d,%d\n", date1->day, daysToAdd);
        date1->day=date1->day+daysToAdd;
    printf("%d\n", date1->day);
    if( date1->day > daysInMonth[date1->month])
    {
        date1->day = date1->day - daysInMonth[date1->month];
        (date1->month)++;
        if (date1->month > 12)
        {
            date1->month = month-12;
            (date1->year)++;
        }

    }
    printf("the new date is: ");
    printdate(date1);
}

int CheckDate(int dd,int mm,int yy)
{
     if(yy>=1800 && yy<=9999)
    {
        /*check month*/
        if(mm>=1 && mm<=12)
        {
            /*check days*/
            if((dd>=1 && dd<=31) && (mm==1 || mm==3 || mm==5 || mm==7 || mm==8 || mm==10 || mm==12))
            {
                return 1; 
            }
            else if((dd>=1 && dd<=30) && (mm==4 || mm==6 || mm==9 || mm==11))
            {
                return 1; 
            }
            else if((dd>=1 && dd<=28) && (mm==2))
            {
                return 1;  
            }
            else if(dd==29 && mm==2 && (yy%400==0 ||(yy%4==0 && yy%100!=0))
            {
                return 1;  
            }
            else
                
                return 0;
        }
        else
        {
            
            return 0;
        }
    }
    else
    {
        
        return 0;
    }
}

date_t* updateDate(date_t *date1)
{
    int day, month, year,ans=0;
    printf("Please enter a date (DD/MM/YYYY format): ");
    scanf("%d/%d/%d",&dd,&mm,&yy);
    ans=CheckDate(dd,mm,yy);
    if(ans!=0)
    {
        date1->day=day;
        date1->month=month;
        date1->year=year;
        printdate(date1);
        return date1;
    }
    else
    {
        printf("Invalid date.\n");
    }
}

void printdate(date_t *date1)
{
    char *monthName=NULL;
    monthName=MonthName(date1);
    printf("The date is : %d/%s/%d\n",date1->day,monthName,date1->year);
    printf("The date is : %d/%d/%d      European\n", date1->day, date1->month, date1->year);
    printf("The date is : %d/%d/%d      American\n", date1->month, date1->day, date1->year);
}

char* MonthName(date_t *date1)
{
    char *monthName=NULL; /*month name*/
    char *mday[12]={"January","Febuary","March","April","May","June","July","August","September","October","November","December"};
    monthName=mday[date1->month];
    return monthName;
}
int getYear(date_t *date1)
{
    return date1->year;
}
int getMonth(date_t *date1)
{
    return date1->month;
}
int getDay(date_t *date1)
{
    return date1->day;
}
