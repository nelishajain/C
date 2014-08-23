#include <stdio.h>
#include <stdlib.h>
#include "shade.h"

main(int argc, char *argv[])
{

int width = atoi(argv[1]);//getting width from console arg
int height = atoi(argv[2]);//getting height from console arg   
char p;
int count =0;
int dim = width * height;//total char to be print
int temp;
for(int x=0;x<dim;x++) 
{

temp = shade1(getchar(),&p);
if(temp==0)
{
printf("invalid characeter\n");
break;

}
 printf("%c",p);
 count++;
if(count==width)//moving cursor to next line
{
 count=0;
 printf("\n");

}

}

}
