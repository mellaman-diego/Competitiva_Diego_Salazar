#include <stdio.h>

int main(){
	int n;
	scanf("%d",&n);
	int i,j;
	int a[n][2];
	for(i=0;i<n;i++){
		
			scanf("%d %d",&a[i][0],&a[i][1]);
			
		
	}
	for(i=0;i<n;i++){
		if(a[i][0]>a[i][1]){
			printf(">\n",a[i][0],a[i][1]);
		}
		else if(a[i][0]<a[i][1]){
			printf("<\n",a[i][0],a[i][1]);
		}
		else{
		   	printf("=\n",a[i][0],a[i][1]); 
		}
	}
	
	return 0;
}