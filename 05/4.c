main(){
	//4. Fie doua numere naturale. Determinati care are suma divizorilor mai mare;
	int a,b,i,j,sd1,sd2;
	printf("a=");
	scanf("%d",&a);
	printf("b=");
	scanf("%d",&b);
	sd1 = 0;
	sd2 = 0;
	for (i=1; i<=a/2; i++){
		if (a % i == 0){
			sd1 = sd1 + i;
		}
	}
	for (j=1; j<=b/2; j++){
		if (b % j == 0){
			sd2 = sd2 + j;
		}	
	}
	
	if (sd1 > sd2){
		printf("a = %d are suma divizorilor mai mare",a);
	}
	else{
		printf("b = %d are suma divizorilor mai mare",b);
	}
}