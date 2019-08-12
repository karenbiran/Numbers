#ifndef AD_H
#define AD_H

	typedef struct 
	{
	float beginHour;
	float endHour;
        int room;
        
	}
	Ad_t;

	typedef struct
	{
	Ad_t*[]pAd
	}
	Ad_calender

	

Ad_t* createAD(float beginHour, float endHour, int room);
int insertAD(Ad_t* pMeeting, float beginHour, float endHour, int room);
void printAD(Ad_t* pMeeting);
void destroyAD(Ad_t* pMeeting);

#endif

