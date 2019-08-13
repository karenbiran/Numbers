#include<stdio.h>
#include<stdlib.h>
#include "files.h"
 
void nLine(int n,char *fileName)
{
	int *posOfLine; /*position of last N lines*/
	char line[80];
	int lineNumber=0;  
	FILE *fp;
	LNL=malloc(n*sizeof(int));
	if ((fp = fopen(f_name, "r")) != NULL)
	{
		for (lineNumer = 0; !feof(fp); ++lineNumer) /* while not end of file*/
		{
			posOfLine[lineNumber%n]=ftell(fp); /*position of the last n lines so far*/
			fgets(line,80,fp);
		}
		fseek(fp,posOfLine[lineNumber%n],0);
		while(!feof(fp))
		{
			fgets(line,80,fp);
			printf("%s\n",line);
		}
		fclose(fp);
		free(posOfLine);
	} 
}

void letterCount(char *fileName)
{
	int num,ii;
	char ch;
	FILE *fp;
	int Uppercc[30];  /*uppercase char counter*/
	int Lowercc[30]; /*lowercase char counter*/
	for(ii=0;ii<30;ii++)
	{
		Uppercc[ii]=0;
        	Lowercc[ii]=0;
    	}
    
	if ((fp = fopen(fileName, "r")) != NULL)
	{
		while(!feof(fp))
		{
		    ch = getc(fp);
		    if((ch >= 'A')&&(ch <= 'Z'))
		    {
		        Uppercc[ch-'A']++;
		    }
		    else if((ch>='a')&&(ch<='z'))
		    {
		        Lowercc[ch-'a']++;
		    }
		}
		for(ii=0;ii<30;ii++)
		{
		    if(Uppercc[ii]!=0)
		    {
		        printf("the letter %c appears %d times\n", (i + 'A'), Uppercc[ii]);
		    }
		    if(Lowercc[ii]!=0)
		    {
		        printf("the letter %c appears %d times\n", (i + 'a'), Lowercc[ii]);
		    }
		    
		}
	}
	fclose(fp);
}
