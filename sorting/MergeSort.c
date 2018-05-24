#include<stdio.h>
int main(){
	int a[5]={11,2,9,13,57};int i,j,k,temp;
	int b[5]={25,17,1,90,3};
	int c[10];
	//First we have to sort the two arrays either by using selection sort or
	//bubble sort
	
	printf("Merge sort");
	
	printf("First Array");
	for(i=0;i<=4;i++){
		printf("%d\t",a[i]);
	}
	printf("Second Array");
	for(i=0;i<=4;i++){
		printf("%d\t",b[i]);
	}
	for(i=0;i<=3;i++){
		//comparision of each of both element
		for(j=0;j<=3-i;j++){
			//if one element is greater than previous then swap
			if(a[j]>a[j+1]){
				temp=a[j+1];
				a[j+1]=a[j];
				a[j]=temp;
			}
			if(b[j]>b[j+1]){
				temp=b[j+1];
				b[j+1]=b[j];
				b[j]=temp;
			}
		}
	}
	for(i=j=k=0;i<=9;){
		if(a[j]<=b[k]){
			c[i++]=b[k++];
		}
		else
		c[i++]=b[k++];
		if(j==5||k==5){
			break;
		}	
	}
		for(;j<=4;){
			c[i++]=a[j++];
		}
		for(;k<=4;)
		c[i++]=b[k++];
		
		printf("Array after sorting");
		for(i=0;i<=9;i++){
			printf("%d",c[i]);
		}
		return 0;
}
	
















