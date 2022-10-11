main(){
	//5.	Să se scrie un program care citeşte de la tastatură
	//un număr natural cu exact trei cifre şi determină numărul 
	//obţinut prin eliminarea cifrei din mijloc.
	int n,c1,c2,c3,p;
	printf("n=");
	scanf("%d",&n);
	c1=n%10;
	n=n/100;
	c2=n%10;
	p=c2*10+c1;
	printf("Noul numar este: %d",p);
}