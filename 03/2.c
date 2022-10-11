main(){
	//2. Determinati cifra minima a unui numar natural.
	int n,c1,c2;
	printf("n=");
	scanf("%d",&n);
	c1=n%10;
	n=n/10;
	while (n>0){
		c2=n%10;
		n=n/10;
		if (c2<c1){
			c1=c2;
		}
	}
	printf("cifra minima este %d",c1);
}