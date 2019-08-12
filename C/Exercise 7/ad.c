#include <stdio.h>
#include <stdlib.h>
#include "ad.h"

Ad_t* createAD(float parmBeginHour, float parmEndHour, int parRoom)
{
	Ad_t* pMeeting;
    	pMeeting = malloc(sizeof(Ad_t));
    	if (pMeeting == NULL)                     
        {
            printf("Error! memory not allocated.");
            return(0);
        }
    		pMeeting->beginHour = parmBeginHour;
    		pMeeting->endHour = parmEndHour;
		pMeeting->room = parmRoom;

    	return pMeeting;

}


Ad_t *[ ]pAd = null;



int insertAD(Ad_t *[ ]pAd = null)
{
	if(pMeeting->cnt!=NULL)
	{
		int* temp = pMeeting->cnt;

    
    if (da->index == da->capacity)
    {
       temp = (int*)realloc(da->arr,sizeof(Ad_t)*((da->capacity)*2));
        if(da->arr != NULL)                     
            {
                da->arr=temp;
                da->capacity *=2;
            }
        else
        {
            return *(da->arr);
        }
        
    }
    da->arr[(da->index)]=num;
    (da->index)++;


    return *(da->arr);
	}
	
    
}

void printDA(Ad_t* pMeeting)
{   
    int i=0;
	if(pMeeting!=NULL)
	{
    		for(i=0; i < pMeeting->index; i++)
		{
		    printf("index[%i], value: %d\n", i, pMeeting->arr[i]);
		}  
	}
}

void destroyAd(Ad_t* pMeeting)
{
	if(pMeeting!=NULL)
	{
		free(pMeeting->arr);
		free(pMeeting);
	}
    
    
