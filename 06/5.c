main(){
	int n,i,max,min;
	int V[100];
	printf("n=");
	scanf("%d",&n);
	
	
	for (i=0;i<=n-1;i++) {
		printf("V[%d]=",i);
		scanf("%d",&V[i]);
		}
	printf("\n");
	max=V[0];
	min=V[0];
	for (i=1;i<=n-1;i++) {
		if (V[i]>max) {
			max = V[i];
		}
		if (V[i]<min) {
			min = V[i];
		}
	}
	printf("\n");
	for (i=0;i<=n-1;i++) {
		printf("V[%d]=%d\n",i,V[i]);
	}
	printf("\nMin = %d\n",min);
	printf("Max = %d\n",max);
}