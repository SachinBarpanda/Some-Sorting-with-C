#include<stdio.h>
int main(){
	int arr[5]={25,17,31,13,2};
	int i,j,temp;
	printf("Selection Sort\n");
	printf("Array before sorting\t");
	for(i=0;i<=4;i++){
		printf("%d\t",arr[i]);
	}//selection of two element
	printf("\n");
	for(i=0;i<=3;i++){
		//comparision of each of both element
		for(j=0;j<=3-i;j++){
			//if one element is greater than previous then swap
			if(arr[j]>arr[j+1]){
				temp=arr[j+1];
				arr[j+1]=arr[j];
				arr[j]=temp;
			}
		}
	}
	
	printf("Array after sorting\n ");
	for(i=0;i<=4;i++){
		printf("%d\t",arr[i]);
	}
	return 0;
}
