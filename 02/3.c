main(){
	//3.Să se scrie un program care citeşte de la tastatură 
	//un număr natural cu exact trei cifre și determină suma cifrelor sale.
	int n,c1,c2,c3;
	printf("n=");
	scanf("%d",&n);
	c1=n%10;
	n=n/10;
	c2=n%10;
	n=n/10;
	c3=n%10;
	int s=c1+c2+c3;
	printf("Suna este:%d",s);
}