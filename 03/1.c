main(){
	//1. Verificati daca un numar are ultima cifra egala cu prima.
	int n,c1,c2;
	printf("n=");
	scanf("%d",&n);
	c1=n%10;
	while (n>10){
	n=n/10;
	}
	if (c1==n){
		printf("Prima cifra este egala cu ultima");
	}
	else{
		printf("Prima cifra nu este egala cu ultima");
	}
}