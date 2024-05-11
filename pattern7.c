/*
 This pattern :-   
   *   
  ***  
 ***** 
*******
 ***** 
  ***  
   * 
     
  */  
#include<stdio.h>
int main()
{
  for ( int i = 1 ; i <= 4 ;i++)
  {
    for ( int j = 1 ; j <= 7; j++)
    {
        if ( j >= 5- i && j <=  3+ i  )
        {
            printf("*");
            
        }
        else 
        {
            printf(" ");
        }
    }
    printf("\n");
  }
  
  for ( int k = 3 ; k  >=1 ;k--)
  {
    for ( int x = 7 ; x >= 1; x--)
    {
        if ( x >= 5- k && x <=  3+ k  )
        {
            printf("*");
        }
        else 
        {
            printf(" ");
        }
    }
    printf("\n");
  }
  return 0 ;

}