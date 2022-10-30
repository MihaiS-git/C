main (){
int i,j,n,sum,k,M[100][100];
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


printf("Peste diagonala principala:\n");
for (i=0;i<=n-1;i++){
	for (j=i;j<=n-1;j++){
		printf("%2d",M[i][j]);
	}
	printf("\n");
}
printf("\n");


printf("Peste diagonala secundara:\n");
k=1;
for (i=0;i<=n-1;i++){
	for (j=0;j<=n-k;j++){
		printf("%2d",M[i][j]);
	}
	printf("\n");
	k++;
}
printf("\n");


printf("Sub diagonala principala:\n");
for (i=0;i<=n-1;i++){
	for (j=0;j<=i;j++){
		printf("%2d",M[i][j]);
	}
	printf("\n");
}
printf("\n");


printf("Sub diagonala secundara:\n");
k=n-1;
for (i=0;i<=n-1;i++){
	for (j=k;j<=n-1;j++){
		printf("%2d",M[i][j]);
	}
	printf("\n");
	k--;
}
printf("\n");

}