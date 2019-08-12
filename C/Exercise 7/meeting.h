#ifndef meeting.h
#define meeting.h

typedef struct 
{
	float beginHour;
	float endHour;
	int room;   
}
meeting_t;
	

meeting_t* createMeeting(float beginHour, float endHour, int room);

#endif
