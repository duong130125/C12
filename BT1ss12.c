#include<stdio.h>
void calculation(int a, int b, int c){
	printf("Cap so thu 1:\n");
	printf("%d+%d=%d\n",a, b, a+b);
	if (a>b){
	    printf ("%d-%d=%d\n",a ,b , a-b);	
	}else{
		printf ("%d-%d=%d\n",b , a ,b-a);
	}
	printf ("Cap so thu 2:\n");
	printf ("%d+%d=%d\n",b ,c ,b+c);
	if (c>b){
		printf ("%d-%d=%d\n",c ,b , c-b);	
	}else{
		printf ("%d-%d=%d\n",b ,c , b-c);
	}
	printf ("Cap so thu 3:\n");
	printf ("%d+%d=%d\n",a ,c , a+c);
	if (a>c){
		printf ("%d-%d=%d\n",a ,c , a-c);	
	}else{
		printf ("%d-%d=%d\n",c ,a , c-a);
	}
} 
int main(){
	int a, b,c;
	printf("Nhap vao ba so a, b, c: ");
	scanf("%d %d %d",&a, &b, &c);
	calculation(a,b,c);
	return 0; 
	
}
