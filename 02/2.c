main(){
	//2.	Să se scrie un program care citeşte de la tastatură
	//un număr natural cu cel puţin două cifre şi determină suma 
	//dintre cifra zecilor şi cifra unităţilor numărului citit.
	int n,c;
	printf("n=");
	scanf("%d",&n);
	c = n % 10;
	printf("Ultima cifra este: %d",c);
}