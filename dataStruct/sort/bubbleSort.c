/*************************************************************************
	> File Name: bubbleSort.c
	> Author: linuxidc
	> Mail: linuxidc@linuxidc.com 
	> Created Time: Sun 05 Jul 2020 07:43:57 PM CST
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>

void swap(int* l,int a , int b){
	int temp = l[b];
	l[b] = l[a] ;
	l[a] = temp;
}
void bubbleSort(int* l,int n){
	printf("%d\n",n);
	int  flag = 1;
	int i ,j;
	for(i=1;i<n && flag==1 ;i++)
	{
		flag = 0;
		for(j = n-1; j>=i;j--)
		{
			if(l[j] < l[j-1])
			{
				swap(l,j,j-1);
				flag = 1;
			}
		}
	}
}
		

int main(){
	int l[9] = {6,2,3,4,5,9,7,8,1};
    bubbleSort(l,9);
	for(int i=0;i<9;i++){
		printf("%d\n",l[i]);
	}

	return 0;
}
