main(){
	//1.Calculați ultima cifră a sumei a două numere naturale.
	int a,b,s,c;
	printf("a=");
	scanf("%d",&a);
	printf("b=");
	scanf("%d",&b);
	s=a+b;
	c=s%10;
	printf("Ultima cifra=%d",c);
}