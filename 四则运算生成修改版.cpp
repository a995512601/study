#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>




char ysf[4] = { '+', '-', '*', '/' };

void xs(int nummax, int n,int g,FILE *fp)
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
		if(g=1)
        {
            fprintf(fp,"%d", m);
        }
	}
	else if (n == 1)
		{
		    printf("%.1f", b);
		    if(g=1)
            {
            fprintf(fp,"%.1f", b);
            }

        }

	else if (n == 2)
		{
		    printf("%.2f", b);
		    if(g=1)
            {
            fprintf(fp,"%.2f", b);
            }

        }

	else if (n == 3)
		{
		    printf("%.3f", b);
		    if(g=1)
            {
            fprintf(fp,"%.3f", b);
            }

		}
	else
		{
		    printf("%f", b);
		    if(g=1)
            {
            fprintf(fp,"%f", b);
            }

        }

}








void sc(int nummax, int l, int  fh, int e, int n,int g,FILE *fp)
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
				if(g=1)
               {
                fprintf(fp,"(");
               }
				k1++;
				u = 0;
			}
			else continue;
		}
		xs(nummax, n,g,fp);
		x = 1, y = 0;
		u++;
		while (rand() % 2)
		{
			if (e > k1&&k1 > k2)
			if (x == 1 && y == 0 && u>1)
			{
				printf(")");
				if(g=1)
               {
                fprintf(fp,")");
               }
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
				if(g=1)
               {
                fprintf(fp,")");
               }
				k2++;
			}

			printf("=\n");
			if(g=1)
               {
                fprintf(fp,"=\n");
               }
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
		if(g=1)
               {
                fprintf(fp,"%c", b);
               }
		y = 1, x = 0;
		u++;
	}
}

int main()
{

   FILE *fp;
   fp=fopen("��������.txt","w");
   if(fp==NULL)
    {
    printf("File cannot open! " );
      exit(0);
    }


	srand((unsigned)time(NULL));
	int a, i = 1, nummax, l, fh, e, n, num;
	int g;
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
	printf("��ѡ���Ƿ�������ļ�������1����������ļ���\n");
	scanf("%d", &g);

	while (i <= num)
	{
		sc(nummax, l, fh, e, n,g,fp);
		i++;

	}
	fclose(fp);


	return 0;
}

