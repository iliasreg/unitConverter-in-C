#include <stdio.h>

//public variables
  char category;
  int tempChoice;
  int currencyChoice;
  int massChoice;
  int userinputF; // User inputted Fahreinheit;
  int userinputC; // User inputted Celsius;
  int userinputUSDtoEuro; // User inputted for USD to EURO;
  int userinputUSDtoJPY; // User inputted for USD to JPY;
  int userinputUSDtoRMB; // User inputted for USD to RMB;
  int userinputOunce; // User inputted for Ounce;
  int userinputGram; // User inputted for Gram;
  int fahrenheitToCelcius; // variable that stores the converted F->C;
  int celciusToFahrenheit; // variable that stores the converted C->F;
  float USDtoEURO ; // varaible that stores the converted USD->EURO;
  float USDtoJPY; // stores the converted USD->JPY;
  float USDtoRMB; // stores the converted USD->RMB;
  float ounceToPounds; // stores the converted Ounce->Pounds;
  float gramsToPounds; // stores the vonerted Grams->Pounds;
  


int main() {
	
  //prototypes
  void temperature();
  void currency();
  void mass();
  
  
  printf("------------------------------------------\n");
  printf("--            Unit Converter            --\n");
  printf("------------------------------------------\n\n");
  printf("Here is a list of conversation to choose from: \n\n");
  printf("\t(1) for Temperature\n\t(2) for Currency\n\t(3) for Mass\n");
  scanf("%d",&category);
  
  
  switch(category)
  {	
  	case 1: temperature(); break;
  	case 2: currency(); break;
  	case 3: mass(); break;
  	default: printf("Please enter one of the latter numbers next time"); break;
  }
    
  	return 0;  
  }
  
  
  
//function declarations
 void temperature()
  {
  	  printf("Welcome to Temperature Converter! \n");
      printf("Here is a list of conversations to choose from: \n");
      printf("\t(1) for Fahrenheit to Celsius. \n");
      printf("\t(2) for Celsius to Fahrenheit. \n");
      scanf("%d",&tempChoice);
      
      if(tempChoice == 1){
          printf("Please enter the Fahrenheit degree: \n");
          scanf("%d",&userinputF);
          fahrenheitToCelcius =  ((userinputF-32) * (5.0/9.0));
          printf("Celcius: %d\n\n",fahrenheitToCelcius);
      }
      else if(tempChoice == 2){
        printf("Please enter the Celcius degree: \n");
        scanf("%d",&userinputC);
        celciusToFahrenheit = ((9.0/5.0)*userinputC + 32);
        printf("Fahrenheit: %d\n\n",celciusToFahrenheit);
      }
      else
        printf("Please enter the correct choice. \n");
  }
  

  void currency() {
  	
      printf("Welcome to Currency Converter! \n");
      printf("Here is a list of conversations to choose from: \n");
      printf("Enter 1 for USD to Euro. \n");
      printf("Enter 2 for USD to JPY. \n");
      printf("Enter 3 for USD to RMB. \n");
      scanf("%d",&currencyChoice);
      if(currencyChoice == 1){
          printf("Please enter the USD amount: \n");
          scanf("%d",&userinputUSDtoEuro);
          USDtoEURO = userinputUSDtoEuro * 0.87;
          printf("Euro: %.2f\n\n",USDtoEURO); // %.2f = rounds the float to only 2 decimal places;
      }
      else if(currencyChoice == 2){
          printf("Please enter the USD amount: \n");
          scanf("%d",&userinputUSDtoJPY);
          USDtoJPY = userinputUSDtoJPY * 111.09;
          printf("JPY: %.2f\n\n",USDtoJPY);
      }
      else if(currencyChoice == 3) {
        printf("Please enter the USD amount: \n");
        scanf("%d",&userinputUSDtoRMB);
        USDtoRMB = userinputUSDtoRMB * 6.82;
        printf("RMB: %.2f\n\n",USDtoRMB);
      }
      else
        printf("Please enter correct choice. \n");
   }
   
   
  void mass(){
      printf("Welcome to Mass Converter! \n");
      printf("Here is a list of conversations to choose from: \n");
      printf("Enter 1 for ounces to pounds. \n");
      printf("Enter 2 for gram to pounds. \n");
      scanf("%d",&massChoice);
      if(massChoice == 1){
          printf("Please enter the ounce amount: \n");
          scanf("%d",&userinputOunce);
          ounceToPounds = userinputOunce * 0.0625;
          printf("Pounds: %.2f\n\n",ounceToPounds);
      }
      else if(massChoice == 2) {
          printf("Please enter the gram amount: \n");
          scanf("%d",&userinputGram);
          gramsToPounds = userinputGram * 0.00220462;
          printf("Pounds: %.2f\n\n",gramsToPounds);
      }
      else 
        printf("Please enter the correct choice. \n");
   }
   
