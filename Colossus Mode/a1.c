
#include<stdio.h>

#include<ctype.h>
main()
{
int c;//to store input 
int numerals[10] = {0};//to store number of digits
int count;//counter for for loop

while((c=getchar())!=EOF) //takes the input from user
{
	putchar(toupper(c));//puts single char on screen

if(c>='0'&&c<='9')
{
	++numerals[c-'0'];//inputting in the array
}

}

for(count=0;count<10;count++)
{
	printf("%d\n",numerals[count]);//printing array

}


}
