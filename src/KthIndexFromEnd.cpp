/*
OVERVIEW: Given a string, return the Kth index from the end of the string.
E.g.: Input: "qwertyui", 3. Output: 't' (index starting from zero).

INPUTS: A string and value of K.

OUTPUT: Return the Kth index from the end of the string (index starting from zero).

ERROR CASES: Return '\0' for invalid inputs.

NOTES:
*/
#include<stdio.h>
char KthIndexFromEnd(char *str, int K) {
	char temp,len=0;
	if(str==NULL||K<0)
	return '\0';
	else
        {   temp=str[0];
            while(temp!='\0')
            {
                len++;
                temp=str[len];
            }
            if(K>len)
                return '\0';
            else
                return str[len-K-1];
        }
}

