#include<stdio.h>

int main(){

    /* 3 Vars (Menu for Cal Selection 
      a for 1st usr input
     b for 2nd User Input   */

     int  menu , a , b;
    
        //   Menu Header
     printf("----------------------------------------\n");
     printf("         WELCOME TO THE MENU\n");
     printf("----------------------------------------\n");
          //Menu Selector
     printf("1: +\n2: -\n3: *\n4: /\n5: Exit\n");
     printf("Please Enter a Value:");
     scanf("%d",&menu);


            // All Calculations functions are inside if menu section 
                 
          if (menu==1 )
     {  
       
        printf("Enter The First Value Below\n");
        scanf("%d",&a); 
          
          printf("Enter The Second Value Below\n");
         scanf("%d",&b);
         printf("Final Output is: %d",a+b);
     }
      else if (menu==2) 
      {
         printf("Enter The First Value Below\n");
        scanf("%d",&a); 
          
          printf("Enter The Second Value Below\n");
         scanf("%d",&b);
       printf("Final Output is: %d",a-b);
      }
       else if (menu==3)
      {
         printf("Enter The First Value Below\n");
        scanf("%d",&a); 
          
          printf("Enter The Second Value Below\n");
         scanf("%d",&b);
       printf("Final Output is: %d",a*b);
      }
       else if (menu==4)
      {    
         
         printf("Enter The First Value Below\n");
        scanf("%d",&a); 
          
          printf("Enter The Second Value Below\n");
         scanf("%d",&b);
         b == 0;
         printf("Invalid Cannot divide by %d ",b); // usr 2nd Input 0 error code 
        printf("Final output is: %f", (float)a / b);
      }

      else if (menu==5)
      {
       return 0;
      }
          // Added a invalid input code here
      else{
        printf("Error Invalid Input!!!!!");
      }
      
   
    
     
     
    return 0;
} 




