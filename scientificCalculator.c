//scintific calculator in c with 10 operations:


#include<stdio.h>
#include<stdlib.h>
#include<math.h>
 int num=0,i=0,a=0,b=0,arr[25],ans=0;
 float floatans=0.0;
//  initialization of functions
int addition();
int subtraction();
int multiplication();
int division();
int modulus();
int power();
int factorial();
int square();
int cube();
int squareroot();
int choice;
// main function
int main()
{   
    // index user can see
    printf("\nHELLOW\n");
    printf("ENTER 0 TO QUITE THE PROGRAM\n");
    printf("ENTER 1 FOR ADDITION:\n");
    printf("ENTER 2 FOR SUBTRACTION:\n");
    printf("ENTER 3 FOR MULTIPLICATION:\n");
    printf("ENTER 4 FOR DIVISION:\n");
    printf("ENTER 5 FOR MODULUS:\n");
    printf("ENTER 6 FOR POWER:\n");
    printf("ENTER 7 FOR FACTORIAL:\n");
    printf("ENTER 8 FOR SQUARE:\n");
    printf("ENTER 9 FOR CUBE:\n");
    printf("ENTER 10 FOR SQUAREROOT:\n");

    while(1)
    {

        printf("\n-----------***-----------\n");
        printf("\nENTER YOUR CHOICE:\n");
        scanf("%d",&choice);

        // swictch cases for choice:
        switch(choice)
        {

        case 0:
              printf("THANK YOU FOR USING SCINTIFIC CALCULATOR!!\n");
              exit(0);

        case 1:
              printf("ADDITION\n");
              addition();
              break;
        
        case 2:
              printf("SUBTRACTION\n");
              subtraction();
              break; 
        
        case 3:
              printf("MULTIPLICATION:\n");
              multiplication();
              break;           
        
        case 4:
              printf("DIVISION:\n");
              division();
              break;           
        
        case 5:
               printf("MODULUS:\n");
               modulus();
               break;
        
        case 6:
               printf("POWER:\n");
               power();
               break; 
        
        case 7:
               printf("FACTORIAL:\n");
               factorial();
               break; 
        
        case 8:
               printf("SQUARE:\n");
               square();
               break;    
        
        case 9:
               printf("CUBE:\n");
               cube();
               break; 
        
        case 10:
               printf("SQUAREROOT:\n");
               squareroot();
               break;                          

        }

    }
    


    return 0;
}
int addition()
    {  
        printf("HOW MANY NUMBERS YOU WANT TO ADD:");
        scanf("%d",&num);
        for(i=0,ans=0;i<num;i++)
        {
            printf("enter number %d:\n",i);
            scanf("%d",&arr[i]);
            ans=ans+arr[i];
        }
        printf("ADDITION OF NUMBERS IS =%d",ans);
        return 0;
    }
int subtraction()
    { printf("ENTER HOW MANY NUMBERS YOU WANT TO SUBTRACT:\n");
      scanf("%d",&num);
      for(i=0,ans=0;i<num;i++)
      {
          printf("ENTER THE NUMBERS:\n");
          scanf("%d",&arr[i]);
          ans=ans-arr[i];

      }
      printf("SUBTRACTION IS =%d",ans);
      return 0;  
    }
// multiplication
int multiplication()
    {
      printf("ENTER  NUMBERS YOU WANT TO MULTIPLY:\n");
      scanf("%d%d",&a,&b);
      ans=a*b;
      printf("MULTIPLICATION OF NUMBERS IS %d\n",ans);
      return 0;
    }    
// division for 2 numbers
int division()
{
    printf("ENTER THE NUMERATOR:\n");
    scanf("%d",&a);
    printf("ENTER THE DENOMIATOR:\n");
    scanf("%d",&b);
    floatans=((float) a/(float) b);
    printf("DIVISION OF NUMBERS IS:%f\n",floatans);
    return 0;
}    

int modulus()
{
     printf("ENTER THE NUMBERS:\n");
     scanf("%d%d",&a,&b);
     ans=(a%b);
     printf("MODULUS OF NUMBERS IS:%d\n",ans);

    return 0;
}
// power
int power()
{
    printf("ENTERTHE NUMBER:\n");
    scanf("%d",&num);
    printf("ENTER THE POWER:\n");
    scanf("%d",&a);
    for(i=0,ans=1;i<a;i++)
    {
        ans=ans*num;
        
    }
    printf("ANSWER IS:%d\n",ans);
    return 0;
}
// factorial
int factorial()
    {
        int factorial=1;
        printf("ENTER THE NUMBER :\n");
        scanf("%d",&num);
        for(i=1;i<=num;i++)
        {
            factorial=factorial*i;
        }
       printf("%d\n",factorial);
       return 0;
    }
int square()
{
    printf("ENTER THE NUMBER:\n");
    scanf("%d",&num);
    ans=(num*num);
    printf("SQUARE OF TWO NUMBERS IS :%d\n",ans);
    return 0;

}
// cube
int cube()
{
    printf("ENTER THE NUMBER:\n");
    scanf("%d",&num);
    ans=(num*num*num);
    printf("CUBE OF TWO NUMBERS IS :%d\n",ans);
    return 0;

}
// square root
int squareroot()
{
    double n=0.0;
    printf("ENTER THE NUMBER:\n");
    scanf("%lf",&n);
    double s;
    s=sqrt(n);
    
         printf("THE SQUARE ROOT OF %lf is %lf",n,s);
    return 0;

}
