main(){
	//3. Determinati media aritmetica a cifrelor pare ale unui numar natural.
	int n,c,suma;
	printf("n=");
	scanf("%d",&n);
	suma=0;
	while (n>1){
		c=n%10;
		n=n/10;
		if (c%2==0){
			suma=suma+c;
		}
	}
	printf("Suam cifrelor pare: %d",suma);
}