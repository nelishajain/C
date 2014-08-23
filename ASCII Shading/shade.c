#include <stdio.h>
#include "shade.h"

int shade1(char input, char* pointer)//method to convert char
{
 switch(input)
{

case('0'):
{
 *pointer=' ';
 break;
}
case('1'):
{
 *pointer='.';
 break;
}
case('2'):
{
 *pointer=':';
 break;
}
case('3'):
{
 *pointer='c';
 break;
}
case('4'):
{
 *pointer='o';
 break;
}
case('5'):
{
 *pointer='C';
 break;
}
case('6'):
{
 *pointer='O';
 break;
}
case('7'):
{
 *pointer='8';
 break;
}
case('8'):
{
 *pointer='@';
 break;
}
default:
{
 return 0;
break;
}
}

return 1;
}
