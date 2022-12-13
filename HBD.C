#include<stdio.h>
#include<conio.h>
#include<dos.h>
#include<time.h>
#include<colordlg.h>

int main ()

{ 
    char i [20];
    COLOR_RED ;
    printf("Enter Name in Capital Letter") ;
    scanf("%s" , & i) ;
    for (int  j = 1; j<=20; j++)
    {
      printf("HAPPY BIRTHDAY %s \2 \n " , i ) ;
     
      
    }
    
 getche() ;
}