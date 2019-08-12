#include <stdio.h>
#include <stdlib.h>
#include "meeting.h"

meeting_t* createMeeting(float beginHour, float endHour, int room)
{
	meeting_t* pMeeting;
	if (beginHour >= endHour)
	{
		return (NULL);
	}
	pMeeting = malloc(sizeof(meeting_t));
	pMeeting -> beginHour = beginHour;
	pMeeting -> endHour = endHour;
	pMeeting -> room = room;
	return pMeeting;
}
