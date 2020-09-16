/*************************************************************************
	> File Name: selectSort.c
	> Author: lemon
	> Mail: runtudd@gmail.com 
	> Created Time: Sun 05 Jul 2020 09:51:27 PM CST
 ************************************************************************/

#include<stdio.h>

void swap(int *l, int a , int b)
{
	int temp = l[a];
	l[a] = l[b];
	l[b] = temp;
}
void selectSort(int *l, int n)
{
	int i,j;
	for(i=0;i<n;i++)
	{
		int min = i;
		for(j=i+1;j<n;j++)
		{
			if(l[j]<l[min])
			{
				min = j;
			}
		}	
		if(min != i)
		{
			swap(l,i,min);
		}
	}

}
int main(){
	int l[]={1,5,3,4,2};
	int n = 5;
	selectSort(l,n);

	for(int i =0;i<n ;i++)
	{
		printf("%d\n",l[i]);
	}

	return 0;
}
