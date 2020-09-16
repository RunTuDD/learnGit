/*************************************************************************
	> File Name: shellSort.c
	> Author: lemon
	> Mail: runtudd@gmail.com 
	> Created Time: Tue 07 Jul 2020 05:27:03 PM CST
 ************************************************************************/

#include<stdio.h>

void shellSort(int *l,int n)
{
	int increment = n;  //increment是增量，可以改变，但最后都要有一轮为1
	while(increment > 1)
	{
		increment = increment/3 + 1;
		int i,temp,j;
		for(i = increment ; i < n; i++)
		{
			if(l[i]<l[i-increment])
			{
				temp = l[i];
				for(j= i - increment;j>=0 && temp<l[j];j-=increment)
				{
					l[j+increment] = l[j];
					l[j] = temp;
				}
			}
		}
	}
}

int main(){
	int l[]={2,8,4,9,5,0,6};
	int n = 7;
	shellSort(l,n);
	for(int i = 0; i<n; i++)
	{
		printf("%d\n",l[i]);
	}

	return 0;
}

