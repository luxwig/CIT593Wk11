#include <stdio.h>
#include <string.h>
#define NUM    5


/// ***************** Q1 ****************
void q1(void)
{
// char * strcat ( char * destination, const char * source );
   char str1[16] = "Hello ";
   printf("version 1: %s\n",
           strcat(str1,    "World!"));  // Hello World!

   printf("version 2: %s\n",  
           strcat("Hello", "World!"));  // SEGFAULT; 
}

/// ***************** Q2 ****************
void print_fruit(int len, char (*f)[8])
{
    printf("*****\n");
    for (int i = 0; i < len; i++)
        printf("%s\n", f[i]);
    printf("*****\n");
}


void q2(void)
{
    char fruits[NUM][8] = {"Apple","Grape","Orange","Banana","Fruit"};
    print_fruit(NUM, fruits);

    strcat(fruits[1], fruits[4]); // "Apple","GrapeFruit","Orange","Banana","Fruit"
    print_fruit(NUM, fruits);
}


/// ***************** Q3 ****************
char* foobar(void)
{
    char str[] = "foobar";
    return str;
}


void q3(void)
{
    char* ret = foobar();
    printf("foobar():  The function is truly %s.\n", ret); // The function is truly foobar.
}



/// ***** main *****
int main(void)
{
    char input = getchar(); // get input
    if (input == '1')
        q1();
    if (input == '2')
        q2();
    if (input == '3')
        q3();
}
