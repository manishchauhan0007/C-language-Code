#include <stdio.h>
int main()
{
    char mystr[10];
    printf("Enter A value of str\n");
    gets(mystr);
    printf("%s",mystr);
    puts(mystr);

    char mystr2[50];
    strcpy(mystr,mystr2);
    strcat(mystr,"good morning");
    strlen(mystr);
    char d=strcmp(mystr,mystr2);
    
    if (d==0){
printf("String is Eqaul");
    }

    else if()

    printf("%s \n%s \n%s \n%s\n");
    return 0;
}