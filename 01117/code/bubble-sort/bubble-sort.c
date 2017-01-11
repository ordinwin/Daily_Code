 ///
 /// @file    bubble-sort.c
 /// @author  ordin(ordinwin@gmail.com)
 /// @date    2017-01-11 07:17:51
 ///
 
#include <stdio.h>
void main(int argc,char ** argv[])
{
	int x[5]={9,8,3,5,2};
	int m=0,n=0;
	int temp=0;
	int i=0;
	printf("冒泡排序前:\n");

	for(i=0;i<5;i++)
	{
		printf("%d ",x[i]);
	}

	printf("\n");

	for(m=0;m<5-1;m++)
	{
		for(n=0;n<5-1-m;n++)
		{
			if(x[n]>x[n+1])
			{
				temp=x[n];
				x[n]=x[n+1];
				x[n+1]=temp;
			}
		}
	}

	printf("冒泡排序后:\n");
	for (i=0;i<5;i++)
	{
		printf("%d ",x[i]);
	}
	printf("\n");
}
