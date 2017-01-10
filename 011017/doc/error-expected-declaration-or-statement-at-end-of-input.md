error handling



code 

```c
 /// @file    c_feature.c
 /// @author  ordin(ordinwin@gmail.com)
 /// @date    2017-01-10 13:48:57
#include <stdio.h>
#define  MAX 100
int main()
{
//	MAX = 10;
	printf("%d\n",MAX);
	const int a=100;
//	a=0;
	printf("a=%d\n",a);
	return 0;
```

error

> expected declaration or statement at end of input
>   return 0;



When I check the code again, I found that I missed the symbol "}".



Here are some cases when this error occurs.

1 missing "{" ,"}"or ";".

2 didn't declare a function before it was using

