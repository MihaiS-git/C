main(){
	char V[100], A[100];
	int n,i,j,flag;
	
	printf("n=");
	scanf("%d",&n);
	A[0]='a';
	A[1]='e';
	A[2]='i';
	A[3]='o';
	A[4]='u';
			
	printf("introdu un sir de litere:\n");
	for (i=0;i<=n-1;i++) {
		scanf(" %c",&V[i]);
		}
	
	printf("\n");
	printf("consoanele sunt:\n");
	
	for (i=0;i<=n-1;i++){
		flag=1;
		for (j=0;j<=4;j++){
			if (V[i] == A[j]) {flag = 0;}
			}
		if (flag == 1) {
			printf("%c, ",V[i]);
		} 
	}
}
