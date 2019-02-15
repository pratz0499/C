#include<stdio.h>
#include<time.h>
clock_t start,end;
double time_taken;

int lsearch(int a[100],int key,int n)
{
	if(n==0)
	return 0;

	else if(a[n]==key)
 	     {
		printf("The Key is found at %d",n+1);
		return n;
	     }

	else
	 return lsearch(a,key,n-1);
}

int main()
{
int a[100],i,n,key;

	printf("Enter the size of n: ");
	scanf("%d",&n);

	printf("Enter the elements: ");
	for(i=0;i<n;i++)
	{
	 scanf("%d",&a[i]);
	}

	printf("Enter the key: ");
	scanf("%d",&key);

	start=clock();
	lsearch(a,key,n);
	end=clock();
	time_taken=((double)(end-start))/CLOCKS_PER_SEC;
	printf("linear search took %lf seconds to execute\n",time_taken);
	printf("Start time=%d,\n end time=%d");

	return 0;
}
