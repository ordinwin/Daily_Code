 ///
 /// @file    data-type.c
 /// @author  ordin(ordinwin@gmail.com)
 /// @date    2017-01-10 15:07:46
 ///
 
#include <stdio.h>
int main()
{
	char ch='\t';
	printf("%c\n",ch);
	int len=sizeof(int);
	printf("%d\n",len);
	putchar(100);
	putchar('a');
	putchar('\n');

	short aa = 10;
	printf("%hd\n",aa);

	printf("%s+%s\n","aaaaa","bbbbb");
	printf("%p\n",&aa);

	int a5=32;
	printf("a5='%-06d'\n",a5);

	float a=3.14;
	printf("%f\n",a);
	printf("%lu,%lu,%lu\n",sizeof(float),sizeof(double),sizeof(long double));
	printf("%d\n",a);
	int b =10;
	printf("%f\n",b);
	double a1=3;
	int a2=2;
	double a3=a1/a2;
	printf("%lf\n",a3);
	return 0;
}
