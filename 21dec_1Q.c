#include<stdio.h>
main()
{
	int i,n,sq,s=0;
	printf("Enter a number: ");
	scanf("%d",&n);
	for(i=1;i<=n;i=i+1)
	{
		sq=i*i;
		s=s+sq;
	}
	printf("%d\n",s);
	
}
