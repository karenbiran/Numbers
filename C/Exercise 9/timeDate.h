#ifndef timeDate
#define timeDate

typedef struct
{
    int day;
    int month;
    int year;
}
date_t;

typedef struct
{
    int sec;
    int min;
    int hour;
}
time_t;

date_t* Create_Date();
void addDate(date_t *date1,int addDays);
int CheckDate(int dd,int mm,int yy);
date_t* updateDate(date_t *date1)
int getDay(date_t *d1);
int getMonth(date_t *d1);
int getYear(date_t *d1);
void printdate(date_t *d1);

#endif

