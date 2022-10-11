main(){
	//4. Fie doua numere naturale. Determinati care dintre ele are mai multe cifre.
	int n1,n2,c1,c2;
	printf("n1=");
	scanf("%d",&n1);
	printf("n2=");
	scanf("%d",&n2);
	
	c1=0;
	while (n1>0){
		n1=n1/10;
		c1++;		
	}
	
	c2=0;
	while (n2>0){
		n2=n2/10;
		c2++;		
	}
	
	if (c1>c2){
		printf("n1 are mai multe cifre");
	}
	else{
		printf("n2 are mai multe cifre");
	}
}