    #include <stdio.h>
    #include<limits.h>
    int main() {
    int s,i;
    printf("Enter size of array:");
    scanf("%d",&s);
    int ar[s];
    for(i=0;i<s;i++)
    {
        printf("Enter array element %d:",i+1);
        scanf("%d",&ar[i]);
    }
    int max=ar[0];
    for(i=1;i<s;i++)
    {
        if(max<ar[i])
        {
            max=ar[i];
        }
    }
    int max2=INT_MIN;
    for(i=0;i<s;i++)
    {
        if(ar[i]>max2&&ar[i]<max&&ar[i]!=max)
        {
            max2=ar[i];
        }
    }
    if(max2==INT_MIN)
    {
        printf("No second largest");
    }
    else
    {
    printf("Second Largest Element:%d",max2);
    }
        return 0;
}
