 /*
OVERVIEW: Given a string, reverse all the words not the string.

E.g.: Input: "i like coding". Output: "coding like i"

INPUTS: A string.

OUTPUT: Modify the string according to the logic.

NOTES: Don't create new string.
*/
#include <Stdio.h>
#include <string.h>
void reversestr(char* input,int start,int last)
{   int i,j=0;
    char temp;
    for(i=start;i<start+(last-start)/2;i++)
    {
        temp=input[i];
        input[i]=input[last-j-1];
        input[last-j-1]=temp;j++;
    }
}
void str_words_in_rev(char *input, int len){
    int start,last,temp;int i;
    reversestr(input,0,len);start=0;
    for(i=0;i<=len;i++)
    {
        if(input[i]==' '||i==len)
        {
            reversestr(input,start,i);
           start=i+1;
        }
    }
    //printf("%s",input);
}
