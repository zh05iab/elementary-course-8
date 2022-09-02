#define _CRT_SECURE_NO_WARINGS 1
#include<stdio.h>
int main()
{//跳出循环，用break和continue
 //区别：break用来结束整个循环，若循环结构嵌套，则结束对应所在的循环结构，常和if语句运用
	int i = 0;
	while (1)//表示没有条件限制，一直执行
	{
		i++;
		while (1)
		{
			printf("%d\n",i);
			if (i>=1)
			{
				break;
			}
		}
		if (i == 10)
		{
			break;
		}
		printf("%d\n", i);
	}
	return 0;
}