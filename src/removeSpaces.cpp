/*
OVERVIEW: Given a string, remove all spaces in it.
E.g.: Input: "abd scd". Output: "abdscd"

INPUTS: A string.

OUTPUT: Return string after removing spaces.

ERROR CASES: Return '\0' for invalid inputs.

NOTES: Don't create new string.
*/
#include<stdio.h>
#include<malloc.h>
char* removeSpaces(char *str) {
	int i,counti=0;
	if(str==NULL)
	return '\0';
	else
    {
        for ( i = 0; str[i]; i++)
        {

        if (str[i]!=' ')
        {
            str[counti] = str[i];counti++;
        }
        }
        str[counti]='\0';
        return str;
    }

}
