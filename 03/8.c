main(){
	//8. Se citeşte un număr natural n şi o cifră c. 
	//Determinati de câte ori apare cifra c în numărul n.
	//Exemplu n = 33123 c = 3 rezultatul este 3
	int n,c,ctr,cifraCurenta;
	printf("n=");
	scanf("%d",&n);
	printf("c=");
	scanf("%d",&c);
	ctr=0;
	while (n>0){
		cifraCurenta=n%10;
		n=n/10;
		if (cifraCurenta==c){
			ctr++;
		}
	}
	printf("Cifra %d apare de %d ori",c,ctr);
}