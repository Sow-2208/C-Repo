#include<stdio.h>
int main()
{
    
        int x,y,z;
        scanf("%d %d %d",&x,&y,&z);
        if(x<y && x<z)
        printf("ALICE");
        else if(y<x && y<z)
        printf("BOB");
    else if(z<x && z<y)
    printf("CHARLIE");
}