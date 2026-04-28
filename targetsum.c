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
    int k;
    printf("enter the target sum value:\n");
    scanf("%d",&k);
     for(int i=0;i<=size-2;i++)
     {
          for(int j=i+1;i<=size-1;i++)
          {
              if(a[i]+a[j]==k)
              {
                  printf("%d %d",a[i],a[j]);
              }
          }
     }
     return 0;
}   