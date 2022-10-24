main(){
	//11.	Max/min dintre n nr citite de la de la tastatura
	int n,x,min,max;
	printf("Introdu n, cate numere vrei sa introduci de la tastatura:\n");
	scanf("%d",&n);
	min = 9999999;
	max = 0;
	while (n > 0){
		printf("x=");
		scanf("%d",&x);
		if (min > x){
			min = x;
			printf("Min=%d\n",min);
		}
		if (max < x){
			max = x;
			printf("Max=%d\n",max);
		}
		n = n - 1;
		printf("n=%d\n",n);
	}
	printf("Maximul este: %d\n", max);
	printf("Minimul este: %d\n", min);
		
}