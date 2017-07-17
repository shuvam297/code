#include <stdio.h>
#include <stdlib.h>
int partition(int* a,int m,int e){

	if(m==e)
		return e;

	int i=e+1,j=m-1;

	int d = a[e],tmp;



	while(!(i>j)){

		while(d>a[i])
			i++;
		while(d<a[j])
			j--;

		if(i<j){

			tmp=a[i];
			a[i]=a[j];
			a[j]=tmp;
			i++;j--;
		}
		else i++;

	}

	a[e] = a[j];
	a[j] = d;

	return j;
}

int main(void){

	int n,k;
	int flag;
	int c;
	scanf("%d",&n);

	int* ar = malloc(sizeof(int)*n);

	for(int i=0;i<n;i++)
		scanf("%d",ar+i);

	k=n/2;

	flag=partition(ar,n,0);


	while(flag!=k){

		if(flag<k){
			c=flag+1;

		}
		else{
			c=flag-1;
			n = flag-1;
		}

		flag = partition(ar,n,c);
		

		if(flag==k){

			printf("%d\n", ar[k]);
			break;
		}
	}

}