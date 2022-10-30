main (){
int i,j,n,s1,s2,s3,s4,k,M[100][100];
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

s1=0;
s2=0;
s3=0;
s4=0;

printf("Peste diagonala principala:\n");
for (i=0;i<=n-1;i++){
	for (j=i;j<=n-1;j++){
		//printf("%2d",M[i][j]);
		s1=s1+M[i][j];
	}
	//printf("\n");
}
printf("s1=%d\n",s1);


printf("Peste diagonala secundara:\n");
k=1;
for (i=0;i<=n-1;i++){
	for (j=0;j<=n-k;j++){
		//printf("%2d",M[i][j]);
		s2=s2+M[i][j];
	}
	//printf("\n");
	k++;
}
printf("s2=%d\n",s2);


printf("Sub diagonala principala:\n");
for (i=0;i<=n-1;i++){
	for (j=0;j<=i;j++){
		//printf("%2d",M[i][j]);
		s3=s3+M[i][j];
	}
	//printf("\n");
}
printf("s3=%d\n",s3);


printf("Sub diagonala secundara:\n");
k=n-1;
for (i=0;i<=n-1;i++){
	for (j=k;j<=n-1;j++){
		//printf("%2d",M[i][j]);
		s4=s4+M[i][j];
	}
	//printf("\n");
	k--;
}
printf("s4=%d\n",s4);
}