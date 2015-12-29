/*
OVERVIEW: Given a float number ,Convert it into a string

INPUTS: A Float,Final string ,How many digits after decimal has to be displayed .
Its zero for integers.


OUTPUT: No need to output anything ,Modify the str in function parameter such that it
now holds the string format of the float number specified

Example : number_to_str(345,str,0);
Should copy "345\0" in the str;
number_to_str(345.342,str,2);
Should copy "345.34" in the str;

NOTES: Don't create new string.

*/

#include <stdio.h>
#include<malloc.h>
int pow(int val,int exp)
{   int i,sum=1;
    for(i=1;i<=exp;i++)
        sum=sum*val;
    return sum;
}
void number_to_str(float number, char *str,int afterdecimal){

    int num,dec,rem,val,i=-1,start=0,j,power;char temp;
    if(number<0)
    {
        ++i;
        str[i]='-';
        number=-number;
        start=1;
    }
    num=(int)number;
    val=(number*pow(10,afterdecimal));
    dec=val%(pow(10,afterdecimal));

    while(num>0)
    {
        i++;
        rem=num%10;
        str[i]=rem+'0';
        num=num/10;


    }
    for(j=start;j<=(i+start)/2;j++)
    {
        temp=str[j];
        str[j]=str[i-j+start];
        str[i-j+start]=temp;
        //printf("%c %c",temp,str[i-j]);
    }
    if(afterdecimal>0)
    str[++i]='.';
    power=pow(10,afterdecimal)/10;
    //printf("%d %d ",dec,val%pow(10,afterdecimal));
    while(power>0)
    {
        str[++i]=(dec/power)+'0';dec=dec-(dec/power)*power;
        power=power/10;

    }
    str[++i]='\0';

}
