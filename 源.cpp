#define _CRT_SECURE_NO_WARINGS 1
#include<stdio.h>
int main()
{//����ѭ������break��continue
 //����break������������ѭ������ѭ���ṹǶ�ף��������Ӧ���ڵ�ѭ���ṹ������if�������
	int i = 0;
	while (1)//��ʾû���������ƣ�һֱִ��
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