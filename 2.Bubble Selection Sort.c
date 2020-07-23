#include<stdio.h>
int bub_sort(int a[],int n)
{
	int i,t,j;
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
		if(a[j]>a[j+1]) 
		{
			t = a[j];
			a[j] = a[j+1];
			a[j+1] = t;
		}
	printf("After Bubble Sort:\n");
	for(i=0;i<n;i++) printf("%d ",a[i]);
	return 0;	
}
int sel_sort(int a[],int n)
{
	int min,i,j,t;
	for(i=0;i<n;i++)
	{
		min = i;
		for(j=i+1;j<n;j++)
		{
			if(a[min]>a[j]) min=j;
		}
		    t = a[min];
			a[min] = a[i];
			a[i] = t;		
	}
	printf("After Selection Sort:\n");
	for(i=0;i<n;i++) printf("%d ",a[i]);	
	return 0;
}
int main()
{
	int a[50];
	int i,n,e;
	printf("Enter number of elements to store in an array: "); 
	scanf("%d",&n);
	printf("Enter %d of elements into the array: ",n);
	for(i=0;i<n;i++) scanf("%d",&a[i]);
	bub_sort(a,n); printf("\n");
	sel_sort(a,n);
	return 0;
}