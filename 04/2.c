void main(){
//12.	Max/min a numerelor pozitive citite de la tastatura
int min, max, n, x;
printf("cate numere introduci de la tastatura n= ");
scanf("%d",&n); 
printf("x=");
scanf("%d",&x);
if (x > 0) {
	min = x;
	max = x;
} else{
	max = 0;
	min = 99999999;
}
n = n - 1;
do{
	printf("x=");
	scanf("%d",&x);
	if (x >= 0){
		if (max < x){
			max = x;
			printf("max=%d\n",max);
		}
		if (min > x){
			min = x;
			printf("min=%d\n",min);
		}
	}
	n=n-1;
}while (n > 0);
printf("Maximul este: %d\n", max);
printf("Minimul este: %d\n", min);
}
