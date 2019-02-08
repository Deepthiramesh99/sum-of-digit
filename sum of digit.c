#include <stdio.h>

int main() {
    int b,count;
    
    scanf("%d",&b);
    while(b!=0)
    {
        b=b/10;
        count++;
    }
    printf("%d",count);
return 0;
}
