/*************************************************************************
	> File Name: heapSort.c
	> Author: lemon
	> Mail: runtudd@gmail.com 
	> Created Time: Tue 07 Jul 2020 06:32:33 PM CST
 ************************************************************************/

#include<stdio.h>

void swap(int *l, int a , int b)
{
	int temp = l[a];
	l[a] = l[b];
	l[b] = temp;
}
void heapInsert(int *l,int n)
{
	for(int i = 0;i< n ; i++)
	{
		int currentIndex = i;
		int fatherIndex = (i-1)/2;
		while(l[currentIndex] > l[fatherIndex])
		{
			swap(l,currentIndex,fatherIndex);
			currentIndex = fatherIndex;
			fatherIndex = (currentIndex - 1)/2;
		}
	}
}
void heapify(int *l,int index, int n)
{
	int left = index * 2 +1;
	int right = index * 2 +2;
	while(left<n)
	{
		int maxIndex;
		if(l[left]<l[right] && right < n)
		{
			maxIndex = right;
		}
		else{
			maxIndex = left;
		}

		if(l[index]>l[maxIndex])
		{
			maxIndex = index;
		}

		if(index == maxIndex)
		{
			break;
		}

		swap(l,maxIndex,index);
		index = maxIndex;
		left = index * 2 +1;
		right = index * 2 + 2;
	}
}


void heapSort(int *l,int n)
{
	int i = n ;
	//将无序的数组排成大堆顶结构
	heapInsert(l,n);

	for(int j=0;j<n;j++)
	{
		printf("%d\n",l[j]);
	}

	//将大堆顶变成有序表
	while(i>1){
		swap(l,0,i-1);
		i--;
		heapify(l,0,i);
	}

}

int main(){
	int l[]={7,5,8,3,4,9,1,6,2};
	int n = 9;
	heapSort(l,n);
	for(int i =0;i<n;i++)
	{
		printf("\t%d\n",l[i]);
	}
	return 0;
}
