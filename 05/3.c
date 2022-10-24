#include <math.h>
main(){
	//3. Determinati numarul divizorilor proprii ai unui numar natural citit.
	int n, i, contor;
	printf("Introduceti n=");
	scanf("%d",&n);
	contor = 0;
	for (i=2; i<=n/2; i++){
		if (n % i == 0){
			contor++;
		}
	}
	printf("Numarul divizorilor proprii este %d", contor);
}