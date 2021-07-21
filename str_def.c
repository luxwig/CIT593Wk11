/*************************************************************************/
/* File Name : str_def.c 		    							         */
/* Purpose   : CIT 593 Week 11 Recitation                                */
/*             demonstration for c-string declaration and initiation.    */
/* Author(s) : Ludwig Zhao 		 									     */
/*************************************************************************/

#include <stdio.h>
#include <string.h>

int main(void)
{
    char* str1   = "Hello";
    char  str2[] = "World";
    char  str3[100] = "!";
    char  str4[] ={'S','T','R','\0'};
    printf("%s\n%s\n%s\n%s\n", str1, str2, str3, str4);
    
	getchar();
	
    // ILLEGAL SYNTAX
    char  xstr1[] = {'X','S','T','R','1'};
    char* xstr2   = {'X','S','T','R','2','\0'};
    printf("%s\n%s\n", xstr1, xstr2);
 }
