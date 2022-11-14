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
			printf("%2d",V[i][j]);
	}
	printf("\n");
}
printf("\n");
}

int lsort(int V[100][100], int n){
	//sortare pe linii
	int i,j,k,t;
	for (k=0;k<=n-1;k++){	
		for (i=0;i<=n-1;i++){
			for (j=k;j<=n-1;j++){
				if(V[i][j]<V[i][k]){
					t=V[i][j];
					V[i][j]=V[i][k];
					V[i][k]=t;
				}
			}
		}
	}
	return V[100][100];
}

int csort(int V[100][100], int n){
	//sortare pe coloane
	int i,j,k,t;
	for (k=0;k<=n-1;k++){	
		for (j=0;j<=n-1;j++){
			for (i=k;i<=n-1;i++){
				if (V[i][j]<V[k][j]){
					t=V[i][j];
					V[i][j]=V[k][j];
					V[k][j]=t;
				}
			}
		}
	}
}


void main(){
	int V[100][100],i,j,k,n,t;
	printf("n=");
	scanf("%d",&n);
	citm(V,n);
	scrm(V,n);
	lsort(V,n);
	scrm(V,n);
	csort(V,n);
	scrm(V,n);
}