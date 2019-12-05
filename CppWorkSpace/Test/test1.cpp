#include <iostream>
#include <string.h>

int firstUniqChar(char * s)
{
    int i,j,size,repeated;
    size = strlen(s);

    for(i=0;i<size-1;i++)
    {
        repeated = 0;
        for(j=i+1;j<size;j++)
        {
            if(*(s+i) == *(s+j))
            {
                repeated = 1;
                break;
            }
        }

        if(repeated == 0)
            return i;
    }
    return -1;
}

int main(void)
{
    char a[] = "cc";
    int n = firstUniqChar(a);
    printf("%d",n);

}