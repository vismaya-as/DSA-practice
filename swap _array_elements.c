#include <stdio.h>

int main() {
   
       int a[5]={1,2,3,4,5},temp,sw;
       int swap(int *p,int index1,int index2)
       {
           temp=p[index1];
           p[index1]=p[index2];
           p[index2]=temp;
       }
       (swap(a,2,4));
       for(sw=0;sw<5;sw++)
       {
          printf("%d",a[sw]);
       }
    return 0;
}
