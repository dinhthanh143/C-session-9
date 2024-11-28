#include<stdio.h>

int main(){
	
	int location,new_number,i;
	int arr[10]={1,2,3,4,5,6,8,9,7,10};
	
	for(i=0;i<10;i++){
		printf(" arr[%d]=%d\n",i,arr[i]);
	}
	
	
	
	
	printf("\nnhap gia tri muon chen: ");
	scanf("%d", &new_number);
		printf("\nnhap vi tri muon chen (arr[]): ");
	scanf("%d", &location);
	
	
	
		arr[location]=new_number;
	
	for(i=0;i<10;i++){
		printf(" arr[%d]=%d\n",i,arr[i]);
	}
	

   return 0;
}

