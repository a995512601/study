/*�����ڸտ�ʼ�Ͽε�ʱ����ܹ�һ��Сѧ���������Զ����ɳ�������ӣ���ʵ������Ҫ��
�ܹ��Զ���������������ϰ��
���Զ�����Ŀ����
�û�����ѡ�������
�û��������������ʮ���ڡ������ڵȣ�
�û�ѡ���Ƿ������š��Ƿ���С��
�û�ѡ�������ʽ����������ļ�����ӡ���ȣ�
������ṩͼ���û����棨�����Լ�����ѡ�����������������Ϊ����*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>


char ysf[4] = { '+', '-', '*', '/' };

void xs(int nummax, int n)
{
	int  a, c, m;
	float b;
	m = pow(10, n);
	a = rand() % (nummax + 1);
	c = rand() % m;
	b = a + c*1.0 / pow(10, n);
	if (n == 0)
	{
		int m;
		m = b;
		printf("%d", m);
	}
	else if (n == 1)
		printf("%.1f", b);
	else if (n == 2)
		printf("%.2f", b);
	else if (n == 3)
		printf("%.3f", b);
	else
		printf("%f", b);

}








void sc(int nummax, int l, int  fh, int e, int n)
{

	char b;
	int x = 0;
	int y = 1, u = 0;
	int k1 = 0, k2 = 0;
	for (int i = 0; i < l; i++)
	{
		int a;
		while (rand() % 2)
		{
			if (e>k1&&k1 >= k2)
			if (x == 0 && y == 1)
			{
				printf("(");
				k1++;
				u = 0;
			}
			else continue;
		}
		xs(nummax, n);
		x = 1, y = 0;
		u++;
		while (rand() % 2)
		{
			if (e > k1&&k1 > k2)
			if (x == 1 && y == 0 && u>1)
			{
				printf(")");
				k2++;
				if (k1 == k2)
					u = 0;
			}
			else continue;
		}
		if (i == l - 1)
		{

			while (k1 > k2)
			{
				printf(")");
				k2++;
			}
			printf("=\n");
			break;
		}
		//////�Զ�����///////
		if (fh == 1)
			b = ysf[0];
		else if (fh == 2)
			b = ysf[1];
		else if (fh == 3)
			b = ysf[2];
		else if (fh == 4)
			b = ysf[3];
		else b = ysf[rand() % 4];

		printf("%c", b);
		y = 1, x = 0;
		u++;
	}
}

int main()
{

	srand((unsigned)time(NULL));
	int a, i = 1, nummax, l, fh, e, n, num;
	char b;
	printf("��������Ŀ����\n");
	scanf("%d", &num);
	printf("�������������\n");
	scanf("%d", &nummax);
	printf("��������Ŀ���ȣ����ٸ�����ӣ���\n");
	scanf("%d", &l);
	printf("��ѡ���������\n��1��2��3��4�ֱ����+��-��*��/������˷�Χ������ִ������ַ��������\n");
	scanf("%d", &fh);
	printf("�������������������ܳ�����Ŀ���ȣ�����0���������ţ�\n");
	scanf("%d", &e);
	printf("������С��λ��������0������С��λ��\n");
	scanf("%d", &n);

	while (i <= num)
	{
		sc(nummax, l, fh, e, n);
		i++;

	}


	return 0;
}

