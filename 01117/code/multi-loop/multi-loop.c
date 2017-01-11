 ///
 /// @file    multi-loop.c
 /// @author  ordin(ordinwin@gmail.com)
 /// @date    2017-01-11 02:41:40
 ///
 
#include <stdio.h>

int main()
{
	int i,j;
	int num=0;
	scanf("%d",&num);
	for(i=1;i<num;i++)
	{
		for(j=0;j<num-1-i;j++)
		{
			printf(" ");
		}
		for(j=0;j<i*2-1;j++)
		{
			printf("*");
		}

	}
	return 0;
}



int main3()
{
	int i,j;
	int index=0;
	for(i=0;i<10;i++)
	{
		for(j=i;j<10;j++)
		{
			index++;
			printf("a%d\n",index);
		}
	}
	return 0;
}



int main2()
{
	int a,b,c;
	int index=0;
	for (a=0;a<10;a++)
	{
		for(b=0;b<10;b++)
		{
			for(c=0;c<10;c++)
			{
				index++;
				printf("a %d\n",index);
			}
		}
	}
	return 0;
}



int main1()
{
	int i,j;
	for(i=1;i<=9;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("*");

		}
		printf("\n");
	}
	return 0;

}
