#include <stdio.h>

int main()
{
    int a =1025;
    int *p;
    p = &a;
    printf("size of integer is %d bytes\n", sizeof(int));
    printf("Address = %d, value = %d\n",p, *p);
    char *p0;
    p0 = (char*)p;      //typecasting
    printf("size of char is %d bytes\n", sizeof(char));
    printf("Address = %d, value = %d\n",p0,*p0);

    //1025 = 00000000   00000000    00000100    00000001

    //voide pointer - Generic pointer
    void *p0;
    p0 = 0;
    printf("Address =%d", p0);
    
}