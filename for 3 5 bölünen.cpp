// 1'den N'e kadar olan sayýlarýn içinde 3 e ve 5 e tam bölünen sayýlarý bulan kod

#include<stdio.h>

main()

{
	int i,N;
	printf("N deðerini giriniz : ");
	scanf("%d",&N);
	
	for (i=1;i<=N;i++)
	{
		if (i%3==0 && i%5==0)
		printf("%d\n",i);
	}
	
	
	
}
