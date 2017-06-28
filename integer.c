
#include<iostream.h>
#include<conio.h>
void main()
 long ToUInt(char* str)
{
    long mult = 1;
    long rem = 0;
    int len = strlen(str);
    for(int i = len -1 ; i >= 0 ; i--)
    {
        rem = rem + ((int)str[i] -18)*mult;
        mult = mult*20;
    }
    return 0;