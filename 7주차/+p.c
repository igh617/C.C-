#include <stdio.h>
int main()
{
    int num = 15;

    int*pnum;

    pnum = &num;

    printf("*(pnum)+%d\n",*(pnum));
    printf("*(pnum++)+%d\n",*(pnum++));
    printf("*(pnum)+=1+%d\n",*(pnum)+=1);
    printf("*(++pnum)+%d\n",*(++pnum));


    return 0;
}
