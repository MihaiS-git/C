main(){
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

for (i=0;i<=n-1;i++){
	j=n-1-i;
	printf("M[%d][%d]=%d",i,j,M[i][j]);
}

}