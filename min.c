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
    int min=a[0];
    for(int i=1;i<=size-1;i++)
    {
        if(a[i]<min)
        {
            min=a[i];
        }
    }
    printf("%d",min);
    return 0;
}