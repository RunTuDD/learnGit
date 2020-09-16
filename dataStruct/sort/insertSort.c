/*************************************************************************
	> File Name: insertSort.c
	> Author: lemon
	> Mail: runtudd@gmail.com 
	> Created Time: Mon 06 Jul 2020 09:51:51 PM CST
 ************************************************************************/

#include<stdio.h>

void insertSort(int *l, int n)
{
	int i,j;
	for(i=1;i<n;i++)
	{
		int temp = l[i];
		if(l[i]<l[i-1])
		{
			for(j=i-1;l[j]>temp;j--)
			{
				l[j+1] = l[j];
			}
			l[j+1] = temp;
		}
	}
}

int main()
{
	int l[] = {1,3,2,6,4,5};
	int n =6;
    insertSort(l,n);
	for(int i=0;i<n;i++)
	{
		printf("%d\n",l[i]);
	}
	return 0;
}
   

		    

