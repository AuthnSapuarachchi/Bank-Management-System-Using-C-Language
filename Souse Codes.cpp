#include<stdio.h>
int main(){
	char card;
	
	int n;
	int p;
	int a;
	int b;
	int diff;
	int i;
	int cad;
	
	printf("Welcome to the ATM\n\n");
	
	printf("Please Insert your card\n\n");
	scanf("%c", &card);
	
	if(card=='k')
	{
		printf("Hello Ken Keneki\n\n");
		
		printf(">Press 1 to withdrawal the money from your account\n\n");
		printf(">Press 2 to check the balance\n\n");
		
		b = 50000;
		
		scanf("%d", &n);
		
		if(n==1)
		{
			printf("Please enter your 4-digit pin : \n");
			scanf("%d",&p);
			
			if(p==1234)
			{
				printf("Eneter the amount to be withdrawal : \n");
				scanf("%d",&a);
				
				if(a>b)
				{
					 printf("insufficiant");
					 
				}
				else
				{
					printf("Collect the money\n\n");
					
					diff = b - a;
					printf("Now, your bank balance is %d", diff);
				}
			}	
			else
			{
				printf("Incorrect pin\n\n");
				
				printf("Pleasse try again\n\n");
				
				scanf("%d",&p);
				
				if(p==1234)
				{
					printf("Eneter the amount to be withdrawal : \n");
					scanf("%d", &a);
					
					if(a>b)
					{
						printf("insufficiant");
							 
					}
					else
					{
						printf("collect the money\n\n");
						
						diff = b - a;
						
						printf("now, your bank balance is %d", diff);
						
					}
				}
				else
				{
					 printf("Your request has been blocked\n");
					 printf("So please try again");
					 
				}
				
			}
		}
		else if(n==2)
		{
			printf("please enter your 4-digit pin : \n");
			scanf("%d",&p);
			
			if(p!=1234)
			{
				  printf("please eneter again\n\n");
				  
				  scanf("%d", &p);
				
				if(p!=1234)
				{
					printf("Your request has been blocked\n");
					printf("so, please try again");
				}
				else
				{
					printf("your bank balance is %d", b);	
				}
			}
		}
		
	}
	else if(card=='s')
	{
		printf("Hello Sasuke Uchiha\n\n");
		
		printf(">Please 1 to withdrawal  the money from your account\n\n");
		printf(">Press 2 to check the balance\n\n");
		
		b = 100000;
		
		scanf("%d",&n);
		
		if(n==1)
		{
			
			printf("Please enter your 4-digit pin : \n");
			scanf("%d",&p);
			
			if(p==5678)
			{
				printf("Eneter the amount to be withdrawal : \n");
				scanf("%d",&a);
				
				if(a>b)
				{
					printf("insufficiant");
				}
				else
				{
					printf("Collect the money \n\n");
					
					diff = b - a;
					
					printf("now, your bank balance is %d",diff);
					
				}
			}
			else
			{
				printf("incorect pin\n\n");
				
				printf("please try again\n\n");
				
				scanf("%d", &p);
				
				if(p==5678)
				{
					printf("eneter the amount to be withdrawal : \n");
					scanf("%d", &a);
					
					if(a>b)
					{
						printf("insufficiant");
						
					}
					else
					{
						printf("collect the money \n\n");
						
						diff = b - a;
						
						printf("now, your bank balance is %d",diff);
					}
				}
				else
				{
					printf("your requeest has been blocked\n");
					printf("so please try again");	
				}	
			}
			
		
		}
		
	}
	else if(n==2)
	{
		printf("Please enter yor 4-digit pin : \n");
		scanf("%d",&p);
		
		if(p!=5678)
		{
			printf("Please try again\n\n");
			
			scanf("%d", &p);
			
			if(p!=5678)
			{
				printf("your request has been blocked\n");
				printf("Please try again");
					
			}
			else
			{
				printf("your bank balance is %d",b);
			}
		}
	}
	else if(card=='I')
	{
		printf("Hello Itachi uchiha\n\n");
		
		printf(">Please 1 to withdrawal  the money from your account\n\n");
		printf(">Press 2 to check the balance\n\n");
		
		b = 60000;
		
		scanf("%d",&n);
		
		if(n==1)
		{
			printf("Please enter your 4-digit pin : \n");
			scanf("%d", &p);
			
			if(p==9123)
			{
				printf("eneter the amount to be withdrawal : \n");
				scanf("%d",&a);
				
				if(a>b)
				{
					printf("Insufficient amount");
					
				}
				else
				{
					printf("Collect the money");
					
					diff = b - a;
					
					printf("Now your balance is : %d",diff);
					
				}
			}
			else 
			{
				printf("Incorrect pin\n\n");
				
				printf("Please try again\n\n");
				
				scanf("%d", &p);
				
				if(p==9123)
				{
					printf("eneter amount to be withdrawal : \n");
					scanf("%d", &a);
					
					if(a>b)
					{
						printf("insufficiant");
						
					}
					else
					{
						printf("Collect the money\n\n");
						
						diff = b - a;
						
						printf("now,your balanse is %d",diff);
						
					}
				}
				else
				{
					printf("Your request has been locked");
					printf("Try again later.");
				}
			}
		}
		else if(n==2)
		{
			printf("Please enter your 4-digit pin : \n");
			scanf("%d",&p);
			
			if(p!=9123)
			{
				printf("please try again later\n\n");
				
				scanf("%d", &p);
				
				if(p!=9123)
				{
					printf("Your request has been blocked");
					printf("Please try again");
					
				}
				else
				{
					printf("Your bank balance is %d",b);
				}
			}
			else if(card=='l')
			{
				printf("Hello light yagami");
				
				printf(">Please 1 to withdrawal  the money from your account\n\n");
				printf(">Press 2 to check the balance\n\n");
		
				b = 40000;
				
				scanf("%d", &n);
				
				if(n==1)
				{
					printf("Please enter your 4-digit pin : \n");
					scanf("%d", &p);
					
					if(p==8123)
					{
						printf("enter the amount to be withdrawal");
						scanf("%d", &a);
						
						if(a>b)
						{
							printf("insufficiant");
						}
						else
						{
							printf("Collect the money\n\n");
							
							diff = b-a;
							
							printf("now,your bank  balance is %d");
							
						}
					}
					else
					{
						printf("incorrect pin\n\n");
						
						printf("Please try again\n\n");
						
						scanf("%d",&p);
						
						if(p==8123)
						{
							printf("eneter the amount to be withdrawal");
							scanf("%d",&a);
							
							if(a>b)
							{
								printf("insufficiant");
								
							}
							else
							{
								printf("Collect the money\n\n");
								
								diff = a - b;
								
								printf("now,your bank balance is %d",diff);
								
							}
						}
						else
						{
							printf("your request has been blocked\n");
							printf("so,Please try again");
						}
					}
				}
				else if(n==2)
				{
					printf("Please enter your 4-digit pin : \n");
					scanf("%d",&p);
					
					if(p!=8123)
					{
						printf("Please try again\n\n");
						scanf("%d",&p);
						
						if(p!=8123)
						{
							printf("your reques has been blocked \n");
							printf("so,please try again");
							
						}
						else
						{
							printf("your bank balance is %d",b);
							
						}
					}
					else
					{
						printf("your bank balance is %d",b);
					}
				}
			}
			
		}
		
	}
}
