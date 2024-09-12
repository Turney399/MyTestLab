/**********************************************
*  Filename: enums.c
*  Description: using Enums 
*  Author: Bob Turney
*  Date: 3/7/2022
***********************************************/  
#include <stdio.h>

typedef enum States {Diagnostics, Stopped, Starting, Running, Stopping} States;

int main (void)
{
    States Fan;

    Fan = Stopped;

    // print out the value of the variables
    printf("The value of Enum is %d\n",Fan); // outout gives 1
    
    if (Fan == Diagnostics)  printf("The value of Enum is Diagnostics\n");
    if (Fan == Stopped)      printf("The value of Enum is Stopped\n"); 
    if (Fan == Starting)     printf("The value of Enum is Starting\n");
    if (Fan == Running)      printf("The value of Enum is Running\n");   
    if (Fan == Stopping)     printf("The value of Enum is Stopping\n"); 

    return 0;
}