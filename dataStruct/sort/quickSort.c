/*************************************************************************
	> File Name: quickSort.c
	> Author: lemon
	> Mail: runtudd@gmail.com 
	> Created Time: Tue 07 Jul 2020 10:08:04 PM CST
 ************************************************************************/

#include<stdio.h>

void swap(int *l, int a , int b)
{
	int temp = l[a];
	l[a] = l[b];
	l[b] = temp;

}

int partition(int *l, int low ,int high)
{
	int key;
	key = l[low];
	while(low<high)
	{
		while(low<high&&l[high]>=key)
		{
			high--;
		}
		swap(l,low,high);
		while(low<high && l[low]<=key)
		{
			low++;
		}
		swap(l,low,high);
	}
	return low;
}

void qSort(int *l, int low ,int high)
{
	int pivot;
	if(low < high)
	{
		pivot = partition(l,low,high);

		qSort(l,low,pivot-1);
		qSort(l,pivot+1,high);
	}
}

void quickSort(int *l, int n)
{
	qSort(l,0,n-1);
}


int main()
{
	int l[] = {1,4,2,0,5,7,9,3,0};
	int n = 9;
	quickSort(l,n);
	for(int i =0;i<n;i++)
	{
		printf("%d\n",l[i]);
	}

	return 0;
}
