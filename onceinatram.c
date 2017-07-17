#include <stdio.h>

int main(void){

	int n;
	int f=0,l=0;
	int tmp,tmp1;

	scanf("%d",&n);

	tmp = n/1000;
	
	
	for(int i=0;i<3;i++){

		f+=tmp%10;
		tmp=tmp/10;
	}
	
	tmp=n%1000;

	for(int i=0;i<3;i++){

		l+=tmp%10;
		tmp=tmp/10;
	}

	if(l<f){

		tmp=n%1000;
		d=f-l;
		if(d<(10-(tmp%10))){

			printf("%d\n", n+(9-(tmp%10)));	

		}
		else{

			n += (9-(tmp%10));
			d-=(9-(tmp%10));
			tmp1=tmp/10;
			tmp1=tmp1%10;
			if(d<(10-tmp1)){
				n+=(d*10);
				printf("%d\n", n);
			}else{
				d-=(9-tmp1);
				n+=(tmp1*10);
				tmp1/=10;
				n+=((d-tmp1)*100);
				printf("%d\n", n);
			}
		}
	}
}