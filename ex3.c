#include<stdio.h>
int main()
{
    unsigned long int c=1;
    unsigned long int s=0-1;
    int count=0;
    while(c !=0) {
        c=c<<1;
        count=count+1;
    }
    printf("%d\n%lu\n",count,s);
    return 0;

}
