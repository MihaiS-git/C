main(){
	//5. Determinati daca un numar natural este sau nu "perfect". 
	//Un numar este perfect, daca este egal cu suma divizorilor sai 
	//mai mici decat el. Ex. 6 = 1 + 2 + 3.
	int n, i,sd;
	printf("n=");
	scanf("%d",&n);
	sd = 0;
	for (i=1; i<n; i++){
		if (n % i == 0){
			sd = sd + i;
		}
	}
	if (n == sd){
		printf("Numarul este perfect");
	}else{
		printf("Numarul nu este perfect");
	}
}