    #include<stdio.h>
    
      main()
    {
    int i,j,count=11;
    
    for (int i = 1; i <=4; i++) {
        
        for (int j = 1; j <= i; j++) {
            printf("%d ",count++);
            
        }
        printf("\n"); 
    }
    
    }
