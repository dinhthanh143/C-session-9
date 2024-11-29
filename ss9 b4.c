#include<stdio.h>

int main(){
	int run=0;
	int choice,check,i,j,location,new_number,add_number,element,n;
	int length;
	int arr[100];
	
	
	while(run==0){
		
		printf("\n MENU \n \n 1.Nhap vao mang\n 2.Hien thi mang\n 3.Them phan tu\n 4.Sua phan tu\n 5.Xoa phan tu \n 6.Thoat\n\n Lua chon cua ban: ");
		scanf("%d",&choice);
		
		if (choice==1){
			printf("\nmoi nhap so phan tu muon nhap: ");
	scanf("%d", &length);
			int arr[100];
	
	
	for(i=0;i<length;i++){
		printf("moi nhap phan tu arr[%d]: ",i);
		scanf("%d", &arr[i]);
		check=1;
			
		}
	}
	if (check!=1){
		printf("\n chua nhap mang (1)\n");
		
	}else if(choice==2){
		for(i=0;i<length;i++){
			printf("arr[%d]=%d\n",i,arr[i]);
		}
	}else if (choice==4){
			printf("\n nhap gia tri muon chen: ");
	scanf("%d", &new_number);
		printf("\nnhap vi tri muon chen (arr[]): ");
	scanf("%d", &location);
	
	arr[location]=new_number;
		
    }else if (choice==3){
    	printf("\n nhap gia tri muon them: ");
	scanf("%d", &new_number);
		printf("\nnhap vi tri muon chen (arr[]): ");
	scanf("%d", &location);

        if(location<0|| location>length){
		printf("vi tri khong hop le");
	}else{ 
		length++;
	arr[length];
        n=location;
		for(i=n;i<length;i++){
		
		arr[location+1]=arr[location];
			location++;
		}

        arr[n]=new_number;
    	
    	
	}else if(choice==5){
		printf("\n moi nhap vi tri muon xoa(arr[]): ");
		scanf("%d", &element);
		if(element<0|| element>length){
		printf("vi tri khong hop le");
	}else{ 	
	length--;
	for (i=element;i<length;i++){
		
		arr[i]=arr[i+1];
		
	}
	}
		
	}else{
		printf("ket thuc chuong trinh.");
		run=1;
	}
		
		
		
		
		
		
		
		
		
	
	}

   return 0;
}

