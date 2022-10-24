main(){
//13.	Suma a n nr, n citit de la tastatura
int n, x, suma;
printf("cate numere introduci? n= ");
scanf("%d",&n);
suma = 0;
while (n > 0){
	printf("x=");
	scanf("%d",&x);
	suma = suma + x;
	n--;
}
printf("Suma = %d", suma);
}