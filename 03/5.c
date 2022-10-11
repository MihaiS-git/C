main(){
	//5. Verificati daca un numar natural are toate cifrele pare.
	int n,c,flag;
	printf("n=");
	scanf("%d",&n);
	flag=1;
	do{
		c=n%10;
		n=n/10;
		if (c%2!=0){
			flag=0;
			break;
		}
	} while (n>0);
	if (flag==1){
		printf("Numarul are toate cifrele pare");
	}
	else{
		printf("Numarul nu are toate cifrele pare");
	}
	}
