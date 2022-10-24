main(){
	int n,i,j,x,y;
	int V[100];
	printf("n=");
	scanf("%d",&n);
	printf("x=");
	scanf("%d",&x);
		
	for (i=0;i<=n-1;i++) {
		printf("V[%d]=",i);
		scanf("%d",&V[i]);
		}
		
	printf("\n");
	
	j=1;
	do {
		y=x*j;
		if (y<=n-1) {
		printf("V[%d]=%d\n",y,V[y]);
		j++;
		}
	} while (y<=n-1);
}