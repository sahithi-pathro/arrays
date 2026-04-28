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
    printf("_ _ _ _ _ _ _ _ _ __ _  _ _ _\n{");
    for(int i=0;i<=size-1;i++)
    {
        printf("%d",a[i]);
    }
    printf("}");
    return 0;
}