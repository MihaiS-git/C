main (){
int i,j,n,min1,max1,min2,max2,M[100][100];
printf("n=");
scanf("%d",&n);
for (i=0;i<=n-1;i++){
	for (j=0;j<=n-1;j++){
		printf("M[%d][%d] = ",i,j);
		scanf("%d",&M[i][j]);
	}
}
printf("\n");

for (i=0;i<=n-1;i++){
	for (j=0;j<=n-1;j++){
		printf("%3d",M[i][j]);
	}
	printf("\n");
}
printf("\n");

//cel mai mic numar de pe diagonala principala
min1=M[0][0];
for (i=0;i<=n-1;i++){
	if (M[i][i]<min1){min1=M[i][i];}	
}
printf("cel mai mic numar de pe diagonala principala = %d\n",min1);
printf("\n");

//cel mai mare numar de pe diagonala principala
max1=M[0][0];
for (i=0;i<=n-1;i++){
	if (M[i][i]>max1){max1=M[i][i];}	
}
printf("cel mai mare numar de pe diagonala principala = %d\n",max1);
printf("\n");

//cel mai mic numar de pe diagonala secundara
min2=M[0][n-1];
for (i=0;i<=n-1;i++){
	j=n-1-i;
	if (M[i][j]<min2) {min2=M[i][j];}
}
printf("cel mai mic numar de pe diagonala secundara = %d\n",min2);
printf("\n");

//cel mai mare numar de pe diagonala secundara
max2=M[0][n-1];
for (i=0;i<=n-1;i++){
	j=n-1-i;
	if (M[i][j]>max2) {max2=M[i][j];}
}
printf("cel mai mare numar de pe diagonala secundara = %d\n",max2);
printf("\n");

}