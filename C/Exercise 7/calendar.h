#ifndef calendar.h
#define calendar.h

typedef struct 
{
	meeting_t **arr;
	int count;
	int capacity;
}
calendar_t;

calendar_t* createDA(int capacity);
int insertMeeting(calendar_t* DA,meeting_t* pMeeting);
void printAD(calendar_t* DA);
calendar_t* removeMeeting(calendar_t* DA,meeting_t* pMeeting);
meeting_t* findMeeting(calendar_t* DA,meeting_t* pMeeting);

#endif
