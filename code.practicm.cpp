#include<stdio.h>
#include<string.h>

int flag=0,buy_sell,situation,percentage_risk,stock;
float capital,principle;
char choice[3];
char *percentage_01="10%";
char *percentage_02="5%";
char *percentage_03="2%";
char *percentage_04="1%";
char *situation1="Identifying undervalued stocks trading below their intrinsic value.";
char *situation2="Investing in companies with strong growth potential, even if they are currently overvalued.";
char *situation3="A stock price breaks above a resistance level on high volume.";
char *situation4="Stock prices fall temporarily due to market sentiment rather than changes in company fundamentals.";
char *situation5="A company announces better-than-expected earnings or positive news (e.g., a new product launch).";
char *situation6="Shifting focus to sectors expected to perform well based on economic conditions.";
char *situation7="A stock has appreciated significantly and reaches a predetermined target price.";
char *situation8="A stock price drops to a predetermined stop-loss level.";
char *situation9="A company reports disappointing earnings or negative news affecting its prospects.";
char *situation10="A stock price falls below a key support level.";
char *situation11="A change in management, business model, or economic conditions adversely impacts a company.";
char *situation12="The allocation of stocks in a portfolio becomes unbalanced due to price movements.";
char *stock1="The Tata Power Company Ltd(500400)";
char *stock2="Titan Company Ltd(500114)";
char *stock3="Tata Technologies Ltd(544028)";
char *stock4="Tata Consultancy Services Ltd(532540)";
char *stock5="Trent Ltd(500251)";

void welcome(){
printf("\n*************************************************************************************************************************************");
printf("\n                                                  WELCOME TO G SECURITIES");	
printf("\n*************************************************************************************************************************************");
printf("\n                                             Where We Make Your Trades Come True");
printf("\n*************************************************************************************************************************************");	
}

void input(){
printf("\n");	
printf("\nEnter Investment Capital:");
scanf("%f",&capital);
printf("\n");
printf("Select your Investment principle:");
printf("\n");
printf("\n1.percentage01=%s",percentage_01);
printf("\n2.percentage02=%s",percentage_02);
printf("\n3.percentage03=%s",percentage_03);
printf("\n4.percentage04=%s",percentage_04);
printf("\nSelect your Investment percentage:");
printf("\n");
scanf("%d",&percentage_risk);
switch(percentage_risk)
{
	case 1:
		principle=capital/10;
		printf("Principle=%f",principle);
	break;
	case 2:
	    principle=capital/20;
		printf("Principle=%f",principle);
	break;
	case 3:
	    principle=capital/50;
		printf("Principle=%f",principle);
	break;
	case 4:
		principle=capital/100;
		printf("Principle=%f",principle);
	default:;	 	 	
}
printf("\nThe stock you want to invest in:");
printf("\n1.%s",stock1);printf("\n");
printf("\n2.%s",stock2);printf("\n");
printf("\n3.%s",stock3);printf("\n");
printf("\n4.%s",stock4);printf("\n"); 	
printf("\n5.%s",stock5);printf("\n"); 
 	printf("\nPlease enter the interested Stock designation:");
 	scanf("%d",&stock);
 	switch(stock){
 	case 1 :
 		printf("\n%s",stock1);
 		break;
 	case 2 :
 		printf("\n%s",stock2);
 		break;
	case 3 : 
	    printf("\n%s",stock3);
	    break;
	case 4 : 
	    printf("\n%s",stock4);
	    break;
	case 5 :
		printf("\n%s",stock5);
		break;
	default:;	
    }
}

void calculation(){
printf("\n");
printf("\nThe situation of the Stock's value analysis:");	
printf("\n1.situation1=%s",situation1);
printf("\n2.situation2=%s",situation2);
printf("\n3.situation3=%s",situation3);
printf("\n4.situation4=%s",situation4);
printf("\n5.situation5=%s",situation5);
printf("\n6.situation6=%s",situation6);
printf("\n7.situation7=%s",situation7);
printf("\n8.situation8=%s",situation8);
printf("\n9.situation9=%s",situation9);
printf("\n10.situation10=%s",situation10);
printf("\n11.situation11=%s",situation11);
printf("\n12.situation12=%s",situation12);printf("\n");
printf("\nSelect the situation of stock value found in it's analysis:");
scanf("%d",&situation);

}

void output(){
switch(situation) {
 	case 1 :
 	case 2 :
	case 3 : 
	case 4 : 
	case 5 : 
	case 6 : printf("\nBuy the stocks");
 	break;
	case 7 :
	case 8 :
	case 9 :
	case 10 :
	case 11 :
	case 12 : printf("\nSell the stocks");
	default:;	
 }

}

main()
{
  welcome();
do{

  input();  
  calculation();
  output();
   printf("\nDo you want to continue?[yes/no]\n");
 scanf("%s",choice);
}while(strcmp("no",choice));	

}


