main(){
	int n,i,x;
	int V[100];
	printf("n=");
	scanf("%d",&n);
	int sum = 0;
	
	for (i=0;i<=n-1;i++) {
		printf("V[%d]=",i);
		scanf("%d",&V[i]);
		}
		
	for (i=0;i<=n-1;i++) {
		sum = sum + V[i];
	}
	
	printf("\n");
	for (i=0;i<=n-1;i++) {
		printf("V[%d]=%d\n",i,V[i]);
	}
	
	printf("Suma elementelor vectorului = %d",sum);
}