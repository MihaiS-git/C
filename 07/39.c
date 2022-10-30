main(){
int i,j,n,minl,maxl,minc,maxc,M[100][100];
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

//cel mai mic element pe linii
for (i=0;i<=n-1;i++){
	minl=M[i][0];
	for (j=1;j<=n-1;j++){
		if (minl>M[i][j]) {
			minl=M[i][j];
		}
	}
	printf("minimul pe linia %d = %d\n",i,minl);
}
printf("\n");

//cel mai mare element pe linii
for (i=0;i<=n-1;i++){
	maxl=M[i][0];
	for (j=1;j<=n-1;j++){
		if (maxl<M[i][j]) {
			maxl=M[i][j];
		}
	}
	printf("maximul pe linia %d = %d\n",i,maxl);
}
printf("\n");

//cel mai mic element pe coloane
minc=M[0][0];
j=0;
do{
	for (i=0;i<=n-1;i++){
		if (minc>M[i][j]){
			minc=M[i][j];
		}
	}
	j++;
	printf("minimul pe coloana %d = %d\n",j,minc);
	minc=M[0][j];
} while(j<=n-1);
printf("\n");

//cel mai mare element pe coloane
maxc=M[0][0];
j=0;
do{
	for (i=0;i<=n-1;i++){
		if (maxc<M[i][j]){
			maxc=M[i][j];
		}
	}
	j++;
	printf("maximul pe coloana %d = %d\n",j,maxc);
	maxc=M[0][j];
} while(j<=n-1);
}