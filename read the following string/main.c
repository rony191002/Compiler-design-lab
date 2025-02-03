#include<iostream>
#include<string.h>
using namespace std;
void displayAll(char str[]);

int main()
{
    char str[50];

    cout<<"Enter a string";
    fgets(str, sizeof(str), stdin);

    return 0;
}
void displayString(char str[])
{
    printf("String Output: ");
    puts(str);
}

