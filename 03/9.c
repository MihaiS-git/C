main(){
	//9. Se citeşte un număr natural nr. Determinati dacă
	//prima cifră a numărului este pară sau nu.
	int n;
	printf("n=");
	scanf("%d",&n);
	while (n>=10){
		n=n/10;
		printf("n=%d\n",n);
	}
	if (n%2==0){
		printf("Prima cifra este para");
	}
	else{
		printf("Prima cifra este impara");
	}
}