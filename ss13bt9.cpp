#include<stdio.h>
void inputValue(int hang, int cot, int array[][100]){
	for(int i=0;i<hang;i++){
		for(int j=0;j<cot;j++){
			printf("moi ban nhap array[%d][%d]=",i+1,j+1);
			scanf("%d",&array[i][j]);
		}
	}
}
void printfMatrix(int hang, int cot,int array[][100]){
	for(int i=0;i<hang;i++){
		for(int j=0;j<cot;j++){
			printf("%d ",array[i][j]);
		}
		printf("\n");
    }
}
void printfValueCorner(int hang,int cot,int array[][100]){
	for(int i=0;i<hang;i++){
		for(int j=0;j<cot;j++){
		if(i==0&&j==0||i==0&&j==cot-1||i==hang-1&&j==0||i==hang-1&&j==cot-1){
			printf("%d ",array[i][j]);
		}else{
			printf("%d ",0);
		}
    }
    printf("\n");
}
}
void printfBorder(int hang,int cot,int array[][100]){
	for(int i=0;i<hang;i++){
		for(int j=0;j<cot;j++){
		if(i==0||j==0||i==hang-1||j==cot-1){
			printf("%d ",array[i][j]);
		}else{
			printf("%d ",0);
		}
    }
    printf("\n");
}	
}
void printfX(int hang,int cot,int array[][100]){
	for(int i=0;i<hang;i++){
		for(int j=0;j<cot;j++){
		if(i==j||i+j==cot-1){
			printf("%d ",array[i][j]);
		}else{
			printf("%d ",0);
		}
    }
    printf("\n");
}
}
int checkNum(int n){
	if(n<2){
		return 0;
	}else{
	for(int i=2;i*i<=n;i++){
		if(n%i==0){
			return 0;
		}
	}
	return 1;
}
}
void printfNgto(int hang,int cot,int array[][100]){
	for(int i=0;i<hang;i++){
		for(int j=0;j<cot;j++){
		if(checkNum(array[i][j])){
			printf("%d ",array[i][j]);
		}else{
			printf("%d ",0);
		}
    }
    printf("\n");
}
}
int main(){
	int chose=0,hang,cot;
	int array[100][100];
	printf("moi ban nhap so hang: ");
	scanf("%d",&hang);
	printf("moi ban nhap so cot: ");
	scanf("%d",&cot);
	do{
		printf("-------------Menu-------------\n");
		printf("1. Nhap gia tri cac phan tu cua mang\n");
		printf("2. In gia tri cac phan tu cua mang theo ma tran\n");
		printf("3. In ra cac phan tu o goc theo ma tran\n");
		printf("4. In ra cac phan tu nam tren duong bien theo ma tran\n");
		printf("5. In ra cac phan tu nam tren duong cheo chinh va cheo phu theo ma tran\n");
		printf("6. In ra cac phan tu la so nguyen tu theo ma tran\n");
		printf("7. Thoat\n");
		printf("Lua chon cua ban la: ");
		scanf("%d",&chose);
		switch(chose){
			case 1:
				inputValue(hang,cot,array);
				break;
			case 2:
				printfMatrix(hang,cot,array);
				break;
			case 3:
				printfValueCorner(hang,cot,array);
				break;
			case 4:
				printfBorder(hang,cot,array);
				break;
			case 5:
				printfX(hang,cot,array);
				break;
			case 6:
				printfNgto(hang,cot,array);
				break;
		}
	}while(chose!=7);
}
