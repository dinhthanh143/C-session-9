#include<stdio.h>

int main(){
	int arr[100];
	int number,new_number,n;
	int i=0;
	int location;
	
	printf("moi nhap so phan tu muon nhap: ");
	scanf("%d", &number);
	
	if (number>100 || number<0){
		printf("so phan tu khong hop le");
		return 1;
	}
	
	for(i=0;i<number;i++){
		printf("moi nhap phan tu arr[%d]: ",i);
		scanf("%d", &arr[i]);
		
		
	}
	printf("\nnhap gia tri muon chen: ");
	scanf("%d", &new_number);
		printf("\nnhap vi tri muon chen (arr[]): ");
	scanf("%d", &location);
	
	if(location<0|| location>number){
		printf("vi tri khong hop le");
		return 1;
	}else{
		
             arr[number];
             n=location;
		for(i=number;i>location;i--){
		arr[i]=arr[i-1];
		
		}
		
	arr[n]=new_number;
		number++;
	}
	
	for(i=0;i<number;i++){
		printf(" arr[%d]=%d\n",i,arr[i]);
	}
	
	
	
	
	
	
	
	
	
	
	
	

   return 0;
}

