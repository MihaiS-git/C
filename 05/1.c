#include <stdbool.h>
int main(void){
	//1. Se dă un număr natural n. Sa se verifice daca numarul este prim.
	int i, n;
	printf("introdu n pentru a verifica daca este prim\n");
	scanf("%d",&n);
	bool flag = true;
	for (i = 2; i < n/2; i++){
		if (n % i == 0){
			flag = false;
		}
	}
	if (flag){
		printf("Numarul este prim");
	}
	else{
		printf("Numarul nu este prim");
	}
}