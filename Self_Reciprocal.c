#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int n,m,d=0,i;
	scanf("%d",&n);
	m=n;
	
	for(i=1;m>0;i*=10){
		d *= 10;
		d += m%10;
		m /= 10;
	}
	
	if (d == n) printf("YES");
	else printf("NO");
	
	return 0;
}
