#include<stdio.h>

int main(){
		int arr[100];
	int number,element;
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
		
		printf("moi nhap vi tri muon xoa(arr[]): ");
		scanf("%d", &element);
			if(element<0|| element>number){
		printf("vi tri khong hop le");
		return 1;
	}
	number--;
	for (i=element;i<number;i++){
		
		arr[i]=arr[i+1];
		
	}
	
	
	
	
	for(i=0;i<number;i++){
		printf(" arr[%d]=%d\n",i,arr[i]);
	}

	
		
	

   return 0;
}

