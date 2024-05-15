// hamming code
#include<stdio.h>
int main()
{
	int data[10];
	int dataatrec[10],c,c1,c2,c3,i;
	printf("\n enter the 4 bit data one by one ");
	scanf("%d",&data[0]);
	scanf("%d",&data[1]);
	scanf("%d",&data[2]);
	scanf("%d",&data[3]);
	// calculate even parity bits 
	data[6]=data[0]^data[2]^data[4];
	data[5]=data[0]^data[1]^data[4];
	data[3]=data[0]^data[1]^data[2];
	printf("\n encoded data is :");
	for(i=0;i<7;i++)
	printf("%d",data[i]);
	printf("\n\n enter the received data bits one by one \n:");
	for(i=0;i<7;i++)
	scanf("%d",&dataatrec[i]);
	c1=dataatrec[6]^dataatrec[4]^dataatrec[2]^dataatrec[0];
	c2=dataatrec[5]^dataatrec[4]^dataatrec[1]^dataatrec[0];
	c3=dataatrec[3]^dataatrec[2]^dataatrec[1]^dataatrec[0];
	c=c3*4+c2*2+c1;
	if(c==0)
	{
		printf("\n no error while transmission of data \n");
	}
	else
	{
		printf("\n error on position %d",c);
		printf("\n data sent :");
		for(i=0;i<7;i++)
		printf("%d",data[i]);
		printf("\n data received :");
		for(i=0;i<7;i++)
		printf("%d",dataatrec[i]);
		printf("\n coreect message ");
		
		if(dataatrec[7-c]==0)
		dataatrec[7-c]=1;
		else
		dataatrec[7-c]=0;
		for(i=0;i<7;i++)
		{
			printf("%d",dataatrec[i]);
		}
	}
}
