#include<stdio.h>
#include<stdlib.h>
int arrageArray(int numbers[],int n){
		for(int i=1;i<n;i++){
			if(numbers[i]<numbers[i-1]){
				return 0;
			}
		}
		return 1;
	}
int main(){
	int numbers[100];
	int size=0;
	int addValue,addIndex; 
	int updateNumber,updateLocation;
	int deleteLocation;
	int mid, start, end;
	int searchValue;
	do{
	    printf("**************MENU******************\n");
		printf("1. Nhap so phan tu can nhap va gia tri cac phan tu.\n");
		printf("2. In gia tri cac phan tu dang quan ly.\n");
		printf("3. Them mot phan tu vao vi tri chi dinh.\n");
		printf("4. Sua mot phan tu o vi tri chi dinh.\n");
		printf("5. Xoa mot phan tu o vi tri chi dinh.\n");
		printf("6. Sap xep cac phan tu.\n");
		printf("7. Tim kiem phan tu nhap vao.\n");
		printf("8. Thoat.\n");
		printf("Lua chon cua ban:");
		int choice;
		scanf("%d",&choice); 
		switch(choice){
			case 1:
				printf("Nhap vao so phan tu va gia tri cua mang:");
				scanf("%d",&size);
				for(int i=0; i<size; i++){
					printf("numbers[%d] = ",i);
					scanf("%d",&numbers[i]);
				}
				printf("\n");
			break;
			case 2:
				printf("Gia tri cac phan tu dang quan ly:\n");
				for(int i=0; i<size; i++){
					printf("%d\t",numbers[i]);
				}
				printf("\n");	
			break;	
			case 3:
				printf("Nhap vao gia tri can them:");
				scanf("%d",&addValue);
				printf("Nhap vao vi tri can them:");
				scanf("%d",&addIndex); 
				if (addIndex < 0 || addIndex> size) {
	        		printf("Vi tri chen khong hop le.\n");
	   		 	}else{
					for(int i=size;i>addIndex;i--){
						numbers[i]=numbers[i-1];
				}
				numbers[addIndex] = addValue;
				size++;
				}
				for(int i=0;i<size;i++){
					printf("numbers[%d] = %d\n",i,numbers[i]);
				}
				printf("\n");
			break;	
			case 4:
				printf("Nhap so sau khi sua: ");
				scanf("%d",&updateNumber);
				printf("Nhap vi tri muon sua: ");
				scanf("%d",&updateLocation);
				if (updateLocation < 0 || updateLocation >= size) {
        			printf("Vi tri sua khong hop le.\n");
    			}else{
    				numbers[updateLocation]=updateNumber;
					for(int i=0;i<size;i++){
						printf("numbers[%d] = %d\n",i,numbers[i]);
					}
				}
				printf("\n");
			break;	
			case 5:
				printf("Nhap vi tri can xoa: ");
				scanf("%d",&deleteLocation);
				if (deleteLocation < 0 || deleteLocation >= size) {
    				printf("Vi tri xoa khong hop le.\n");
    			}else{
					for(int i=deleteLocation;i<size;i++){
						numbers[i]=numbers[i+1];
				}
				}
				size--;
				for(int i=0;i<size;i++){
					printf("numbers[%d] = %d\n",i,numbers[i]);
				}
			break;	
			case 6:
				printf("1. Giam dan.\n");
				printf("2. Tang dan.\n");
				printf("Lua chon cua ban la: ");
				int choose; 
				scanf("%d",&choose);
				switch(choose){
					case 1:
						for(int i=0;i<size-1;i++){
							for(int j=i+1;j<size;j++){
								if(numbers[i]<numbers[j]){
									int temp=numbers[i];
									numbers[i]=numbers[j];
									numbers[j]=temp;
								}
							}
						}
					    for(int i=0;i<size;i++){
						    printf("numbers[%d] = %d\n",i,numbers[i]);
				        }
					break;
					case 2:
						for(int i=0;i<size-1;i++){
							for(int j=i+1;j<size;j++){
								if(numbers[i]>numbers[j]){
									int temp=numbers[i];
									numbers[i]=numbers[j];
									numbers[j]=temp;
								}
							}
						}
					    for(int i=0;i<size;i++){
						    printf("numbers[%d] = %d\n",i,numbers[i]);
					    }
					break;		
				}
				printf("\n");
			break;
			case 7:
				end=size;
				start=0;
				printf("Nhap so can tim: ");
				scanf("%d",&searchValue);
				if(arrageArray(numbers,size)){
					printf("Su dung tim kiem nhi phan.\n");
					for(int i=start; i<=end;i++){
						mid=(start+end)/2;
						if(mid==searchValue){
							break;
						}else if(mid<searchValue){
							start=mid+1;
						}else{
							end=mid-1;
						}
					}
					printf("So %d o vi tri %d cua mang.\n",searchValue,mid-1);
				}else{
					printf("Su dung tim kiem tuyen tinh.\n");
					for(int i=0;i<size;i++){
						if(numbers[i]==searchValue){
							printf("So %d o vi tri %d cua mang.",searchValue,i);
							break;
						}
				    }
				}	
				printf("\n");
			break;
			case 8:
				exit(0);
			break;	
			default:
				printf("Vui long chon tu 1->8.");	
		}
	}while(1==1); 
} 
