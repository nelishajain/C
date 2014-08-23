#include <stdio.h>
#include <string.h>
#define MAXL 7//defining maximum length for character string 

main()
{
  char s[MAXL];
  int x,n;
n=0;

for(x=0;x<7;x++)
{
  s[x]=getchar(); //inputing the character in array 
}


for(x=0;x<7;x++)
{
if(s[x]=='1')
{
n=n<<1;//shifting bit to left before making least significant bit 1
n = n|1; //making least significant bit 1

}
else
{

n=n<<1;
}

}
char temp=n;

printf("%c\n",temp);

}

