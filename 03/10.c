main(){
	//10. Se citeşte un număr natural nr. Determinati 
	//cate cifre din nr. sunt mai mici decat prima cifră
	//a numărului.
	int n,nn,c1,c2,ctr;
	printf("n=");
	scanf("%d",&n);
	nn=n;
	while (n>=10){
		n=n/10;
	}
	ctr=0;
	c1=n%10;
	while (nn>=10){
		c2=nn%10;
		nn=nn/10;
		if (c2<c1){
			ctr++;
		}
	}
	printf("%d cifre sunt mai mici decat prima cifra",ctr);
}