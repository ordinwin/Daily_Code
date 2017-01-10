 ///
 /// @file    compiler-optimize.c
 /// @author  ordin(ordinwin@gmail.com)
 /// @date    2017-01-10 14:47:41
 ///
 
#include <stdio.h>
int main()
{
	/*
	   volatile关键字可以用来提醒编译器它后
	   面所定义的变量随时有可能改变，因此编
	   译后的程序每次需要存储或读取这个变量
	   的时候，都会直接从变量地址中读取数据。
	   */
	volatile int a = 10;
	a = a + 3;
	a = a + 2;
	a = a + 6;//编译器可能会优化这些代码.
	printf("a = %d\n", a);
	register int a1;
	register int a2;
	register int a3;
	register int a4;
	register int a5;
	register int a6;
	register int a7;
	register int a8;
	/*
	register 这个关键字命令编译器尽可能的将变
	量存在CPU内部寄存器中而不是通过内存寻址访问以提高效率
	   */
	return 0;
}
