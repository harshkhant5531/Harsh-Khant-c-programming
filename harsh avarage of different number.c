//Find the sum and average of different numbers which are accepted by user as many as user wants
#include <stdio.h>
int main()
{
  int a,b,
  sum=0,i=0;
  printf("\n how many number you want to enter : ");
  scanf("%d",&a);
    while(i<a)
        {
          printf("Enter No %d:",i+1);
          scanf("%d",&b);
          sum=sum+b;
          i++;
        }
    printf("\n Sum = %.2f",((float)sum)/a);
    return 0;
}
