#include <stdio.h>
int main() {
    int i,j,n;
    printf("Enter array size:");
    scanf("%d",&n);
    int a[n],ar[n];
    for(i=0;i<n;i++)
    {
        ar[i]=1;
        printf("Enter array %d value:",i+1);
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        int temp=a[i];
        a[i]=1;
        for(j=0;j<n;j++)
        {
            ar[i]*=a[j];
        }
        a[i]=temp;
    }
    for(i=0;i<n;i++)
    {
        printf("\n%d",ar[i]);
    }
    return 0;
}
