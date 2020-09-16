/*************************************************************************
	> File Name: mergeSort.c
	> Author: lemon
	> Mail: runtudd@gmail.com 
	> Created Time: Wed 08 Jul 2020 06:04:55 PM CST
 ************************************************************************/

#include<stdio.h>

void mergeArray(int *l,int start, int mid , int end, int *temp)
{
	int i = start;
	int j = mid +1;
	int t = 0;
	while(i<=mid && j<=end)
	{
		if(l[i]<l[j])
		{
			temp[t] = l[i];
			t++;
			i++;
		}
		else{
			temp[t] = l[j];
			t++;
			j++;
		}
	}
	while(i<=mid)
	{
		temp[t] = l[i];
		t++;
		i++;
	}
	while(j<=end)
	{
		temp[t] = l[j];
		t++;
		j++;
	}
	for(int s =0 ;s<t ;s++)
	{
		l[s+start] = temp[s];
	}

}

void  mergeSort(int *l,int start , int end, int *temp)
{
	if(start<end)
	{
		int mid = (end + start)/2;
		mergeSort(l,start,mid,temp);
		mergeSort(l,mid+1,end,temp);
		mergeArray(l,start,mid,end,temp);
	}
}

int main()
{
	int l[] = { 1,4,7,3,6,10,0};
	int n = 6;
	int temp[7];
	mergeSort(l,0,n,temp);
	
	for(int i =0; i<=n; i++)
	{
		printf("%d\n",l[i]);
	}

	return 0;
}
