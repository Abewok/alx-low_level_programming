#include <stdio.h>                                                                                                                      
/**                                                                                                                                     
 *                                                                                                                                      
 * main - fibonachi.                                                                                                                    
 *                                                                                                                                      
 * Return: Always 0.                                                                                                                    
 */                                                                                                                                     
int main(void)                                                                                                                          
{                                                                                                                                       
        int i;                                                                                                                          
 long int a, b, c;                                                                                                                    
                                                                                                                                        
        a = 1;                                                                                                                         
        b = 2;                                                                                                                         
        printf("1, ");                                                                                                                  
        printf("2, ");                                                                                                                  
        for (i = 0; i < 96; i++)                                                                                                        
        {                                                                                                                               
                c = a + b;                                                                                                            
                a =b;                                                                                                                 
                b = c;                                                                                                                 
                printf("%ld", c);                                                                                                       
                if (i != 95)                                                                                                            
                {                                                                                                                       
                        printf(", ");                                                                                                   
                }                                                                                                                       
        }                                                                                                                               
        printf("\n");                                                                                                                   
        return (0);                                                                                                                     
} 
