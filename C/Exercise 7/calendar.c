#include <stdio.h>
#include <stdlib.h>
#include "meeting.h"
#include "calendar.h"

calendar_t* createDA(int capacity)
{
	calendar_t* DA;
	DA = malloc(sizeof(calendar_t));
	DA -> count = 0;
	DA -> capacity = capacity;
	if (DA == NULL)
	{
		printf("DA NULL\n");
		return NULL;
	}
	DA -> arr = malloc(capacity * sizeof(meeting_t*));
	if (DA -> arr == NULL)
	{
		free(DA);
		printf("DA NULL\n");
		return NULL;
	}
	return DA;
}
 int insertMeeting(calendar_t* DA, meeting_t* pMeeting){
	
void printDA(calendar_t* DA)
{
}

calendar_t* removeMeeting(calendar_t* DA,meeting_t* pMeeting)
{	
}


meeting_t* findMeeting(calendar_t* DA,meeting_t* pMeeting)
{
}
