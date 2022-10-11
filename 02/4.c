main(){
	//4.Se dă un număr natural n cu exact trei cifre. 
	//Calculaţi produsul dintre cifra unităților și cifra sutelor.
	int n,c1,c2,c3,p;
	printf("n=");
	scanf("%d",&n);
	c1=n%10;
	n=n/100;
	c2=n%10;
	p=c1*c2;
	printf("Produsul este: %d",p);
}