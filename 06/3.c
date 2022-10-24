main(){
	int n,i,x;
	int V[100];
	printf("n=");
	scanf("%d",&n);
	
	for (i=0;i<=n-1;i++) {
		printf("V[%d]=",i);
		scanf("%d",&V[i]);
		if (V[i]<0) {
			i = i - 1;
		}
	}
	
	printf("\n");
	for (i=0;i<=n-1;i++) {
		printf("V[%d]=%d\n",i,V[i]);
	}
}