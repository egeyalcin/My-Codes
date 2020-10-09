#include <stdio.h>

int main (){
    
    int kenarSayisi, yildiz, bosluk ;
    int i, j, k ;

    printf("Kenar sayisi giriniz : ") ;
    scanf("%d", &kenarSayisi) ;

    yildiz = 2 ;
    bosluk = kenarSayisi - 1 ; 

    for(i = 0 ; i < kenarSayisi ; i++)
    {
        for(j = 0 ; j < bosluk ; j++ )
        {
            printf(" ") ;
            
        }

        for(k = 0 ; k < yildiz ; k++)
        {
            if(k == 0 )
            {
                printf("/") ;
            }
            else if(k == yildiz - 1 )
            {
                printf("\\") ;
            }
            
            else
            {
                printf("*") ;
            }
        }    
    
    yildiz = yildiz + 2 ;
    bosluk = bosluk - 1 ;
    printf("\n") ;

    }
    
    bosluk = bosluk + 1 ;
    yildiz = yildiz - 2 ; 

    int z, m, l ;

    for(z = 0 ; z < kenarSayisi ; z ++ )
    {
        for(m = 0 ; m < bosluk ; m ++ )
        {
            printf(" ") ;
        }

        for(l = 0 ; l < yildiz ; l ++)
        {
            
            if(l == 0 )
            {
                printf("\\") ;
            }
            
            else if(l == yildiz - 1 )
            {
                printf("/") ;
            }
            
            else
            {
                printf("*") ;
            }
            
            
        }
    printf("\n") ; 
    yildiz = yildiz - 2 ;
    bosluk ++ ;
    
    }

}
