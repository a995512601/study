/*我们在刚开始上课的时候介绍过一个小学四则运算自动生成程序的例子，请实现它，要求：
能够自动生成四则运算练习题
可以定制题目数量
用户可以选择运算符
用户设置最大数（如十以内、百以内等）
用户选择是否有括号、是否有小数
用户选择输出方式（如输出到文件、打印机等）
最好能提供图形用户界面（根据自己能力选做，以完成上述功能为主）*/
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
		//////自定符号///////
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
	printf("请输入题目数量\n");
	scanf("%d", &num);
	printf("请输入最大数：\n");
	scanf("%d", &nummax);
	printf("请输入题目长度（多少个数相加）：\n");
	scanf("%d", &l);
	printf("请选择运算符号\n（1、2、3、4分别代表+、-、*、/，输入此范围外的数字代表四种符号随机）\n");
	scanf("%d", &fh);
	printf("请输入括号数量（不能超过题目长度，输入0代表无括号）\n");
	scanf("%d", &e);
	printf("请输入小数位数（输入0代表无小数位）\n");
	scanf("%d", &n);

	while (i <= num)
	{
		sc(nummax, l, fh, e, n);
		i++;

	}


	return 0;
}

