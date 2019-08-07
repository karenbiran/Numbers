#include <time.h>
#include <stdlib.h>
#include <stdio.h>

int play(int attempt[])
{
    int draw[6];
    draw[0] = rand() % 49 + 1;
    for(int i = 1; i < 6; i++)
    {
        int random_number;
        generate:
        random_number = rand() % 49 + 1;
        for(int j = 0; j < i; j++)
        {
            if(random_number == draw[j])
            {
                goto generate;
            }
        }
        draw[i] = random_number;
    }

    int compared = 0;
    for(int i = 0; i < 6; i++)
    {
        if(attempt[i] == draw[i])
        {
            compared++;
        }
    }

    if(compared == 6)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
