#include<stdio.h>
int main(){
	int arr[5]={25,17,31,13,2};
	int i,j,temp;
	printf("Selection Sort\n");
	printf("Array before sorting\t");
	for(i=0;i<=4;i++){
		printf("%d\t",arr[i]);
	}//selction of each element
	printf("\n");
	for(i=0;i<=3;i++){
		//comparision of each element
		for(j=i+1;j<=4;j++){
			//if one element is greater than previous then swap
			if(arr[i]>arr[j]){
				temp=arr[i];
				arr[i]=arr[j];
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
