// Online C compiler to run C program online
#include<stdio.h>

main()
{
	int i,j,s;
	
	for(i=1;  i<=5; i++)
	{
	  for(s=1; s<i; s++)
	   {
	   	printf(" ");
	   }
	    for(j=5;  j>=i;  j--)
	    {
	      printf("%d",j%2);  	
		}
		  printf("\n");
	   }
}