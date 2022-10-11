main(){
	//6. Fie un numar natural. Daca are un numar impar de cifre
	//afisati cifra din mijloc, in caz contrar afisati un mesaj.
	int n,nn,c,contor,i;
	printf("n=");
	scanf("%d",&n);
	nn=n;
	contor=0;
	while (nn>0){
		nn=nn/10;
		contor++;
	}
	if (contor%2!=0){
		for (i=1;i<contor/2+1;i++){
			n=n/10;
		}
		c=n%10;
		printf("Cifra din mijloc este %d",c);
	}
	else{
		printf("Numarul de cifre este par");
	}
	
}