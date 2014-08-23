#include <stdio.h>
#include <string.h>
#define MAXL 8//defining maximum length for character string 

main()
{
int l;
char s[MAXL] ="";

char value = getchar();

switch(value)//switch case to turn on selected segments based of value from 0 to 9
{
case '0':
{
strcpy(s,"1111110");
printf("%s\n",s);
break;
}
case '1':
{
strcpy(s,"0110000");
printf("%s\n",s);
break;
}
case '2':
{
strcpy(s,"1101101");
printf("%s\n",s);
break;
}
case '3':
{
strcpy(s,"1111001");
printf("%s\n",s);
break;
}
case '4':
{
strcpy(s,"0110011");
printf("%s\n",s);
break;
}
case '5':
{
strcpy(s,"1011011");
printf("%s\n",s);
break;
}
case '6':
{
strcpy(s,"1011111");
printf("%s\n",s);
break;
}
case '7':
{
strcpy(s,"1110000");
printf("%s\n",s);
break;
}
case '8':
{
strcpy(s,"1111111");
printf("%s\n",s);
break;
}
case '9':
{
strcpy(s,"1111011");
printf("%s\n",s);
break;
}
default://error case if any char other than 0 to 9 entered
{
 printf("number not in range from 0 to 9");
break;
}
}






}
