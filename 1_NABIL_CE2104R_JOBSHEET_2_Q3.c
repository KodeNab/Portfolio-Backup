// IFP_JOBSHEET_2
// Conditional Execution - if ... else statement
// 1_NABIL_CE2104R
// 12/10/2021

#include <stdio.h>
#include <stdlib.h>

#define g gender
#define h hobby

int main()
{
    int h;
    int g;

                    // sorry for being extra

    printf("\n++++=========================+++++=========================++++");
    printf("\n+     Title: IFP_JOBSHEET_2                                   +");
    printf("\n+     Objective: Conditional Execution - if...else statement  +");
    printf("\n+     Author: 1_NABIL_CE2104R                                 +");
    printf("\n+     Date: 12/10/2021                                        +\n");
    printf("++++=========================+++++=========================++++\n");

    printf("Hello World!\n\n");
    printf(" Enter Gender: ( 0 = FEMALE , 1 = MALE) \n");
    printf(" Input your gender here => ");

    scanf("%d", &g);
        {
            if(g==0)
            printf("\n You have selected ♀♀ FEMALE ♀♀ \n\n\n Please select ONE of the following hobbies. \n Enter Hobby: ( 1 = Singing , 2 = Dancing , 3 = Shopping)\n");
            else if(g==1)
            {
            printf("\n You have selected ♂♂ MALE ♂♂ \n\n\n Please select ONE of the following hobbies. \n Enter Hobby: ( 1 = Football , 2 = Basketball , 3 = Rugby)\n");
            }
            else
            {
            printf("\n\n !!!!!!!!!! ERROR !!!!!!!!!!\n You have input a wrong entry.\n Please close and run again.");
            
            return 0;
            }
        }
    printf(" Input your hobby here => ");
    scanf("%d", &h);
    
    if(g==0)
    {
        if(h==1)
        {
            printf("\n\n FEMALE likes SINGING");
        }
        else if(h==2)
        {
            printf("\n\n FEMALE likes Dancing");
        }
        else if(h==3)
            printf("\n\n FEMALE likes Shopping");
        }
    if(g==1)
    {
        if(h==1)
        {
            printf("\n\n MALE likes Football");
        }
        else if(h==2)
        {
            printf("\n\n MALE likes Basketball");
        }
        else if(h==3)
        {
            printf("\n\n MALE likes Rugby");
        }
    }
        else;
        printf("\n\n !!!!!!!!!! ERROR !!!!!!!!!!\n You have input a wrong entry.\n Please close and run again.");
    return 0;
}

// this is fun 