#include<stdio.h>
int main(){
	int arr[5]={25,17,31,13,2};
	int i,j,k,temp;
	printf("Insertion Sorts");
	printf("Array before sorting");
	
	for(i=0;i<5;i++){
		printf("%d",arr[i]);
	}
	for(i=1;i<5;i++){
		for(j=1;j<i;j++){
			if(arr[j]>arr[i]){
				temp=arr[j];
				arr[j]=arr[i];
				for(k=i;k>j;k--){
					arr[k]=arr[k-1];
				}
				arr[k+1]=temp;
			}
		}
	}
	printf("array after sorting");
	for(i=0;i<=4;i++)
	printf("%d",arr[i]);
	return 0;
}
