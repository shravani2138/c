// bit stuffing 
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	int a[20],b[30],i,j,k,n,count;
	printf("\n enter frame size :");                 // n=8
	scanf("%d",&n);
	printf("\n enter the frame in the form of 0 and 1 :");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	i=0;
	count=1;
	j=0;
	while(i<n)                                       // b= 0 1 1 1 1 
	{
	 if(a[i]==1)                                     // a=0 1 1 1 1 1 1 0
	{
		b[j]=a[i];
		for(k=i+1;a[k]==1 && k<n && count<5; k++)    // k=2,a[k]==1 | 2<8 | 1<5 
		{
			j++;                                     // j=2
			b[j]=a[k];
			count++;                                 // count=2
			if(count==5)
			{
			   j++;	
			   b[j]=0;
			}
			i=k;                                      //i=2
		}
	}
	else 
	{
		b[j]=a[i];
	}
	i++;
	j++;
	}
	printf("\n after bit stuffing :");
	for(i=0;i<j;i++)
	printf("%d",b[i]);
	getch();
}
