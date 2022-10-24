main(){
	//14.	Suma tuturor nr pozitive citite de la tastatura
	int x, n, suma;
	printf("cate numere introduci? n= ");
	scanf("%d",&n);
	suma = 0;
	while (n > 0){
		printf("x=");
		scanf("%d",&x);
		if (x > 0){
			suma = suma + x;
		}
		n--;
	}
	printf("Suma = %d", suma);
}