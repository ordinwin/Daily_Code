 ///
 /// @file    sizeof.c
 /// @author  ordin(ordinwin@gmail.com)
 /// @date    2017-01-10 12:56:48
 ///
 
#include <stdio.h>
void main()
{
	//通过类型名称计算各基础类型所占内存大小
	printf("char:   %d\n",sizeof(char));
	printf("short:  %d\n",sizeof(short));
	printf("long:   %d\n",sizeof(long));
	printf("float:  %d\n",sizeof(float));
	printf("double: %d\n",sizeof(double));
	printf("unsigned char: %d\n",sizeof(unsigned char));
	printf("unsigned short:%d\n",sizeof(unsigned short));
	printf("unsigned int:  %d\n",sizeof(unsigned int));
	printf("unsigned long: %d\n",sizeof(unsigned long));
	//通过变量名称计算变量所属数据类型所占内存大小

	int val_int=100;
	double val_double=100000.0;
	printf("val_int: %d\n",sizeof(val_int));
	printf("val_double:%d\n",sizeof(val_double));
}
