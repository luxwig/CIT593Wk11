#include <stdio.h>
#include <string.h>
#define NUM    5
#define MAXLEN 8


void print_fruit(int len, char (*f)[MAXLEN])
{
    for (int i = 0; i < len; i++)
        printf("%s ", f[i]);
    printf("\n");
}

int main(void)
{
    char fruits[NUM][MAXLEN] = {"Apple","Grape","Orange","Banana","Lemon"};

    // STRLEN
    printf("\n>>>> STRLEN <<<<\n");
    for (int i = 0; i < NUM; i++) 
        printf("%s - %lu\n", fruits[i], strlen(fruits[i]));

	getchar();
	
    // STRCPY
    printf("\n>>>> STRCPY <<<<\n");
    print_fruit(NUM, fruits);
    strcpy(fruits[0], "Lime");
    print_fruit(NUM, fruits);

	getchar();
	
    // STRCHR
    char* index; 
    printf("\n>>>> STRCHR <<<<\n");
    for (int i = 0; i < NUM; i++)
    {
        index = strchr(fruits[i], 'e');
        if (index)  // Equivalent to index != NULL
            printf("``%s'' \thas an ``e'' at position %ld\n", fruits[i], index-fruits[i]+1);
        else
            printf("``%s'' \tdoes not have an ``e''\n", fruits[i]);
    } 
    
	getchar();
	
    // STRCMP
    printf("\n>>>> STRCMP <<<<\n");
    int result;
    for (int i = 0; i < NUM; i++)
    {
        result = strcmp(fruits[i], "Grape");
        if (result < 0)
            printf("``%s'' \tcomes before ``Grape''\n", fruits[i]);
        else if(result == 0)
            printf("``%s'' \tis ``Grape''\n", fruits[i]);
        else
            printf("``%s'' \tcomes after ``Grape''\n", fruits[i]);
    }
	
	getchar();
    // STRCAT
    printf("\n>>>> STRCAT <<<<\n");
    print_fruit(NUM, fruits);
    strcat(fruits[0], "s");
    print_fruit(NUM, fruits);

}

