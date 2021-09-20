#include<stdio.h>
int main()
{
	int a[100];
	int i,j,n;
	int counter=0;
	int counter1=0;
	int max=0;
	
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	for(i=0,j=1;i<n-1,j<n;i++,j++)
	{
		a[i]=a[j]-a[i];
	}
	

	
	for(i=0;i<n-1;i++)
	{
		while(a[i+1]>a[i])
		{	
			counter++;
			
			if(counter>max)
		
			max=counter;
			i++;
		}
		counter=0;
		
	    
	}
	

	
	
	for(i=0;i<n-1;i++)
	{
		if(a[i+1]>a[i])
		{
			counter1++;
		}
		else
		counter1=0;
		
		if(counter1==max)
		{	
			j=i+1-max;
		
		}
	
	}

		
	while(max>=0)
	{
		printf("%d ",a[j]);
		
		max--;
		j++;
				
	}
	
	
	
	
}
