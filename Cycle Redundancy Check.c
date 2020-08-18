#include<stdio.h>
main()
{
	printf("Enter size of the dataword and divisor:\n");
	int n,d,i;scanf("%d%d",&n,&d);
	int a[n],b[d],z=0,m[d],r[d],x[d];
	printf("Enter the dataword(digit by digit):\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter the divisor(digit by digit):\n");
	for(i=0;i<d;i++)
	{
		scanf("%d",&b[i]);
	}
	printf("Generating beta code word wit 0's...");
	for(i=n;i<(n+d-1);i++)
	{
		a[i]=0;
	}	
	while(z<n)
	{
	for(i=0;i<d;i++)
	{
		if(z==0)
		m[i]=b[i]*a[0];
		else
		m[i]=b[i]*r[0];
		
		
	}
	for(i=0;i<d-1;i++)
	{
		if(z==0)
		{
		if((m[i+1]==0 && a[i+1]==1)||(m[i+1]==1 && a[i+1]==0))
		r[i]=1;
		else
		r[i]=0;
	   } 
	   else
	   {
	   	x[i+1]=r[i+1];
	   	if((m[i+1]==0 && x[i+1]==1)||(m[i+1]==1 && x[i+1]==0))
		r[i]=1;
		else
		r[i]=0;
	   }
	   
	}
    if(z==n-1)
    {
    	for(i=n;i<n+d-1;i++)
    	{
    		a[i]=r[i-n];
	    }
	    
	}
	r[d-1]=a[z+d];
	z++;
	
	
}
printf("Processing...The Code word is ");
for(i=0;i<n+d-1;i++)
	{
		printf("%d",a[i]);
	}
}
