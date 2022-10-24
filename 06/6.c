main(){
	int n,i;
	int V[100];
	printf("n=");
	scanf("%d",&n);
		
	for (i=0;i<=n-1;i++) {
		printf("V[%d]=",i);
		scanf("%d",&V[i]);
		}
		
	printf("\n");

	for (i=0;i<=n-1;i++) {
		if (V[i] % 2 == 0){
		printf("V[%d]=%d\n",i,V[i]);
		}
	}
}