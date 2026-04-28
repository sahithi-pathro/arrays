#include <stdio.h>
int main() {
    int size;
    printf("Enter the number of elements to store:\n");
    scanf("%d",&size);
    int a[size];
    for(int i=0;i<=size-1;i++)
    {
        printf("Enter the %d value\n",i+1);
        scanf("%d",&a[i]);
    }
    int b=0;
    int s=0;
    int p=0;
    for(int i=0;i<=size-1;i++)
    {
        for(int j=i+1;j<=size-2;j++)
        {
            if(a[j]-a[i]>p)
            {
                b=a[i];
                s=a[j];
                p=a[j]-a[i];
            }
        }
    }
    printf("buy=%d\tsell=%d\tprofit=%d",b,s,p);
     return 0;
}   