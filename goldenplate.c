#include <stdio.h>
int main() {
	int w,h,k;
	int i=1;
	int p=0;
	scanf("%d%d%d",&w,&h,&k);
	while(i<=k){
		p=p+2*w+2*h-4;
		w=w-4;
		h=h-4;
		i++;
	}
	printf("%d\n",p);
	return 0;
}
