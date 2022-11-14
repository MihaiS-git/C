# include <stdio.h>

int citm(int V[100][100], int n){
	int i,j;
	for (i=0;i<=n-1;i++){
		for (j=0;j<=n-1;j++){
			printf("V[%d][%d] = ",i,j);
			scanf("%d",&V[i][j]);
		}
	}
	printf("\n");
}

int scrm(int V[100][100], int n){
	int i,j;
	for (i=0;i<=n-1;i++){
		for (j=0;j<=n-1;j++){
			printf("%3d",V[i][j]);
		}
	printf("\n");
	}
printf("\n");
}

int caplsort(int V[100][100], int n){
	int i,j,k,T[100];
	for (k=0;k<=n-1;k++) {	
		for (i=0;i<=n-2;i++){
			if (V[i][0]>V[i+1][0]){			
				for (j=0;j<=n-1;j++){
					T[j]=V[i][j];
					V[i][j]=V[i+1][j];
					V[i+1][j]=T[j];
				}
			}
		}
	}
	return V[100][100];	
}

int capcsort(int V[100][100], int n){
	int i,j,k,T[100];
		for (k=0;k<=n-1;k++) {	
			for (j=0;j<=n-2;j++){
				if (V[0][j]>V[0][j+1]){			
					for (i=0;i<=n-1;i++){
						T[i]=V[i][j];
						V[i][j]=V[i][j+1];
						V[i][j+1]=T[i];
					}
				}
			}
		}
	return V[100][100];
}

void main(){
	int V[100][100],n;
	printf("n=");
	scanf("%d",&n);
	citm(V,n);
	scrm(V,n);
	caplsort(V,n);
	scrm(V,n);
	capcsort(V,n);
	scrm(V,n);
}