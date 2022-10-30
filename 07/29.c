main (){
int i,j,n,sum,sumodd,sumeven,M[100][100];
printf("n=");
scanf("%d",&n);
for (i=0;i<=n-1;i++){
	for (j=0;j<=n-1;j++){
		printf("M[%d][%d] = ",i,j);
		scanf("%d",&M[i][j]);
	}
}
printf("\n");

sum=0;
for (i=0;i<=n-1;i++){
	for (j=0;j<=n-1;j++){
		sum=sum+M[i][j];
		printf("%2d",M[i][j]);
	}
	printf("\n");
}
printf("suma = %d\n",sum);
printf("\n");

sumodd=0;
sumeven=0;
for (i=0;i<=n-1;i++){
	for (j=0;j<=n-1;j++){
		if (M[i][j]%2==0) {
			sumeven=sumeven+M[i][j];
		} else {
			sumodd=sumodd+M[i][j];
		}
	}
printf("Line %d : sum even = %d / sum odd = %d\n",i,sumeven,sumodd);
sumodd=0;
sumeven=0;
}
printf("\n");
for (i=0;i<=n-1;i++){
	printf("M[%d][%d]=%d\n",i,i,M[i][i]);
}

}