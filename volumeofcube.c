#include<stdio.h>                                                            
                                                                                
void main()                                                                     
{                                                                               
    int length;                                                                 
    float volume=0;                                                             
    printf("\nFinds volume of a cube\n-------------------");                    
    printf("\nEnter length of one side: ");                                     
    scanf("%d", &length);                                                       
                                                                                
    volume = (length*length*length);                                            
                                                                                
    printf("Volume of a cube is: %.2f", volume);                                
}  
