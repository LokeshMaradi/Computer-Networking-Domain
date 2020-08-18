#include<stdio.h>
main()
{
	int n;
	printf("Enter the size of the datawords:");
	scanf("%d",&n);
	int a[n],b[n],i,count=0;
	printf("Enter the first dataword(each digit):\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter the Second dataword(each digit):\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&b[i]);
		if((a[i]==0 && b[i]==1)||(a[i]==1 && b[i]==0))
		count++;
	}
	
	printf("The Hamming distance is:%d",count);
	
}
