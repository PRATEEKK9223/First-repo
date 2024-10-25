#include<stdio.h>
#include<string.h>
void main()
{
    char day[100],weather[100];
    strcpy(day,"sunday");
    strcpy(weather,"snowing");

    //printf("%d\n",1);
    //printf("enter day\n");
    //scanf("%s",&day);
   // printf("\n%s",day);
    //printf("enter weather\n");
    //scanf("%s",&weather);
    if(day == "sunday" && weather=="snowing")
    {
        printf("1");
    }
    else
        printf("0");

}
