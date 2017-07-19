#include <stdio.h>
#include <stdlib.h>

int gcd(int a,int b);


int main(void){

	int n;
	int gm=0;
	int tmp;
	unsigned int sum;
	scanf("%d",&n);

	int* a = malloc(sizeof(int)*n);
	int* b = malloc(sizeof(int)*n);

	for(int i=0;i<n;i++)
		scanf("%d",a+i);
	for(int i=0;i<n;i++)
		scanf("%d",b+i);

	for(int i=0;i<n;i++){

		for(int j=0;j<n;j++){

			if(a[i]==b[j]){

				if(gm<a[i]){

					gm = a[i];
					sum=2*a[i];

				}
				
				break;

			}
		}

	}
	

	printf("%u\n", sum);

}

int gcd(int a,int b){

	 if(b==0)
			return a;
		else 
			return gcd(b,a%b);

}