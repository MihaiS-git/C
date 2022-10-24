main(){
	//2. Se dă un număr natural n. 
	//Se cere să se calculeze n! = 1 * 2 * 3 * … * n. 
	//Exemplu n = 5 rezultatul este 120 = 1 * 2 * 3 * 4 * 5.
	int n, i, p;
	printf("n=");
	scanf("%d",&n);
	p = 1;
	for (i=1; i<=n; i++){
		p = p * i;
	}
	printf("Produsul numerelor naturale mai mici decat n este: \n%d",p);
}