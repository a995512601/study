#include<stdio.h>
#include <stdlib.h>
int main()
{
    /*���⣺ ����n������������Ϊ��������ɵ�����a[1],a[2],a[3],��,a[n],���������a[i]+a[i+1]+��+a[j]���Ӷκ͵����ֵ����������������Ϊ����ʱ�����Ӷκ�Ϊ0�����˶��壬���������ֵΪ�� Max{0,a[i]+a[i+1]+��+a[j]},1<=i<=j<=n
���磬����a[1],a[2],a[3],a[4],a[5],a[6]��=(-2,11,-4,13,-5,-2)ʱ������Ӷκ�Ϊ20��*/

    int n,i,j;
    int b=0,y=0;
    // ������������ָ֪�����
    int *array;
    printf("������������ n: ");
    scanf("%d", &n);
    // �������ȵ�Ϊn������
    array = (int *)malloc(n * sizeof(int));
    // ��ֵ�����
    for(int x=0;x<n;x++)
    {
        scanf("%d",&array[x]);
    }

    for(j=0;j<n;j++)
    {
        b=0;
        for(i = j; i < n; i++)
        {
            b=b+array[i];
            if(b>y)
              y=b;
        }
    }
    printf("����Ӷκ�Ϊ%d",y);
}

