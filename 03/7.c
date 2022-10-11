main(){
	//7. Verificati daca un numar natural contine doar cifre binare (0 sau 1).
	int n,c,flag;
	printf("n=");
	scanf("%d",&n);
	flag=1;
	while (n>0){
		c=n%10;
		n=n/10;
		if (c==0 || c==1){
			flag=1;
		}
		else{
			flag=0;
			break;
		}	
	}
	if (flag==1){
		printf("Numarul contine doar cifre binare");
	}
	else{
		printf("Numarul nu contine doar cifre binare");
	}
}