main(){
	char V[100];
	int n,i;
	char j;
	printf("n=");
	scanf("%d",&n);
		
	for (i=0;i<=n-1;i++) {
		printf("V[%d]=",i);
		scanf(" %c",&V[i]);
		}
	
	printf("\n");
	
	for (i=0;i<=n-1;i++){
		for (j=65;j<=90;j++){
		if (V[i] == j) {printf("V[%d]=%c\n",i,V[i]);}
		}
	}
}
