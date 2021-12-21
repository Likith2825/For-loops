#include<stdio.h>
main()
{
	int i,n,m=1;
	printf("Enter a number: ");
	scanf("%d",&n);
	for(i=1;i<=n;i=i+1)
	{
		m=m*i;
	}
	printf("%d\n",m);
}
