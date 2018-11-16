#include<stdio.h>
#include<stdlib.h>

void main(int argc, char *argv[])
{
         int i,temp=0,sum=0;
     for(i=0;i<argc;i++)
     {
           temp=atoi(argv[i]);
           sum+= temp;
     }
     printf("%d",sum);
}