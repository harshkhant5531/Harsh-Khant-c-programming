#include<stdio.h>
void main()
{
	int n,sum=0,rem,a;
	scanf("%d",&n);
	a=n;
	while(n!=0){
		rem=n%10;
		sum=sum*10+rem;
		n=n/10;
	}
	if(a==sum){
	printf("yes");
}
else{
	printf("no");
}
}
