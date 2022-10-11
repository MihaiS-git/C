main(){
//8.	Max/min dintre 3 nr
int a,b,c;
a=3;
b=8;
c=5;
if (a>b && a>c && b>c){
	printf("max=%d min=%d",a,c);
}
if (a>b && a>c && b<c){
	printf("max=%d min=%d",a,b);
}
if (b>a && b>c && a>c){
	printf("max=%d min=%d",b,c);
}
if (b>a && b>c && a<c){
	printf("max=%d min=%d",b,a);
}
if (c>a && c>b && a>b){
	printf("max=%d min=%d",c,b);
}
if (c>a && c>b && a<b){
	printf("max=%d min=%d",c,a);
}
}