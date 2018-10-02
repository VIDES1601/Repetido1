#include<stdio.h>

int main(){
	int fil,col,i,j,temp;
	
	printf("cuantas filas");
	scanf("%d",&fil);
	printf("cuantas columnas");
	scanf("%d",&col);
	
	int a [fil][col];
    int b [fil][col];
	
	/* se llena a*/
    for(i=0;i<fil;i++){	
	for(j=0;j<col;j++){
     
     printf("ingrese valor d% d% de a :",i,j);
     scanf("%d",&a[i][j]);
     
     }}
     
     /* se llena b */
     for(i=0;i<fil;i++){	
	 for(j=0;j<col;j++){
     
     printf("ingrese valor d% d% de b :",i,j);
     scanf("%d",& b[i][j]);
     
     }}
     
     /* muestra a */
     for(i=0;i<fil;i++){	
	for(j=0;j<col;j++){
     printf("%d",a[i][j]);
     }
     printf("\n");
     }
     printf("\n");
     
     /* muestra b*/
     for(i=0;i<fil;i++){	
	for(j=0;j<col;j++){
     printf("%d",b[i][j]);
     }
     printf("\n");
     }
     printf("\n");
     
     
     /* burbuja matriz a */
     for(i=0;i<fil;i++){	
	 for(j=0;j<col;j++){
     
     if(a[i][j]>a[i+1][j+1]){
		 temp=a[i][j];
		 a [i][j]= a[i+1][j+1];
		 a[i+1][j+1]=temp;
		 }
		 }}
		 
     /* burbuja matriz b */
     for(i=0;i<fil;i++){	
	 for(j=0;j<col;j++){
     
     if(b[i][j]>b[i+1][j+1]){
		 temp=b[i][j];
		 b[i][j]= b[i+1][j+1];
		 b[i+1][j+1]=temp;
		 }
		 }}
	
	/* muestra a*/
	for(i=0;i<fil;i++){	
	for(j=0;j<col;j++){
     printf("%d",a[i][j]);
     }
     printf("\n");
     }
     printf("\n");
     
     
     /* muestra b*/
     for(i=0;i<fil;i++){	
	for(j=0;j<col;j++){
     printf("%d",b[i][j]);
     }
     printf("\n");
     }
     printf("\n");
     
     /* muestra los valores de las do matrices ordenados */
     
        for(i=0;i<fil;i++){
		for(j=0;j<col;col++){
			
			if(a[i][j]>b[i][j]){
				
				printf("%d %d",b[i][j],a[i][j]);
				
				}
				else{
					
					printf("%d %d",a[i][j],b[i][j]);
					}
			
						}}
     
     
     
     
     
	return 0;
	}
