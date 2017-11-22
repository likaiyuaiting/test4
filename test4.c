/*************************************************************************
	> File Name: test4.c
	> Author: linuxidc
	> Mail: linuxidc@linuxidc.com 
	> Created Time: 2017年11月22日 星期三 17时03分10秒
 ************************************************************************/

#include<stdio.h>
#define N 50
int a[N][N];

int main()
{
	int i,j,max,min,row,coll,col;
	for(i=0;i<N;i++)
	{
		printf("请输入第%d个元素\n",i+1);
		for(j=0;j<N；j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<N;i++)
	{
		coll=0;max=a[i][0];
		for(j=1;j<N;j++)
			if(a[i][j]>max)
			{
				max=a[i][j];
				coll=j;
			}
		if(i==0)
		{
			min=max;
			col=coll;
			row=0;
		}
		else if(max<min)
		{
			min=max;
			col=coll;
			row=i;
		}
	}
	printf("N个最大数中的最小数是%d,出现在%d行%d列\n",min,row,col);
	return 0;
}
