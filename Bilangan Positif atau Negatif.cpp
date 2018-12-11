#include <stdio.h>

main()
{
	int x;
	printf("masukkan bilangan : ");
	scanf("%d",&x);
	if(x>=0){
		printf("%d adalah bilangan positif\n\n",x);
	}else{
		printf("%d adalah bilangan negatif\n\n",x);
		
	}
	return 0;
	
}
