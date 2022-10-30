main (){
int i,j,n,m,sum,M[100][100];
printf("n=");
scanf("%d",&n);
printf("m=");
scanf("%d",&m);
for (i=0;i<=n-1;i++){
	for (j=0;j<=m-1;j++){
		printf("M[%d][%d] = ",i,j);
		scanf("%d",&M[i][j]);
	}
}
sum=0;
for (i=0;i<=n-1;i++){
	for (j=0;j<=m-1;j++){
		sum=sum+M[i][j];
		printf("%3d",M[i][j]);
	}
	printf("\n");
}
printf("suma = %d",sum);
}