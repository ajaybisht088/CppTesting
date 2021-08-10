// struct product
// {
// 	char pname[50];
// 	int pid;
// 	int qty;
// 	double price;
// };
#include <stdio.h>
#include <stdlib.h>
int addOrder();
void deleteOrder(int);
void updateOrder(int);
void viewOrder(int);
int orderNum = 0;
struct orders
{
	int onum;
	char odt[10];
	int oqty;
	int pid;

};
// struct orders *ord, myOrd[1];
struct orders *ord;
void main()
{
	int val = 0, rawValue = 0;
	// ord = myOrd;
	do
	{
		printf("\n1. Add Order.");
		printf("\n2. Delete order");
		printf("\n3. Update Order");
		printf("\n4. Order Details");
		printf("\n5. Exit");
		printf("\nEnter your choice : ");
		scanf("%d",&val);
		switch(val)
		{
			case 1: orderNum += addOrder();
					printf("\norderNum = %d", orderNum);
					break;
			case 2: printf("Enter order Number : ");
					scanf("%d",&rawValue);
					deleteOrder(rawValue);
					break;
			case 3:	printf("Enter order Number : ");
					scanf("%d",&rawValue);
					updateOrder(rawValue);
					break;
			case 4:	printf("Enter order Number : ");
					scanf("%d",&rawValue);
					viewOrder(rawValue);
					break;
			case 5: break;
            default: printf("You entered wrong choice...");
					 break;
		}
	}while(val!=5);
}

int addOrder()
{
	if(orderNum==0){
		printf("malloc executed \n");
		ord = (struct orders*)malloc((orderNum+1)*sizeof(struct orders));
	}
	else{
		printf("\nrealloc executed \n");
		ord = (struct orders*)realloc(ord, (orderNum+1)*sizeof(struct orders));
	}
	if (ord == NULL) {
        printf("\nInsufficient Memory!\n");
        // exit(0);
		printf("\nOrder can't be added!");
		return 0;
    }
    else {
		printf("\nEnter order Number : ");
		scanf("%d",&(ord+orderNum)->onum);

		printf("\nEnter Date : ");
		scanf("%s",(ord+orderNum)->odt); 

		printf("\nEnter Qty : ");
		scanf("%d",&(ord+orderNum)->oqty);

		printf("\nEnter Product ID : ");
		scanf("%d",&(ord+orderNum)->pid);
		printf("\nOrder added succesfully");
		return 1;
	}	
}

void viewOrder(int ordernum){
	ordernum--;
	printf("\nOrder Number : %d", (ord+ordernum)->onum);
	printf("\nOrder Date : %s",(ord+ordernum)->odt); 
	printf("\nEnter Qty : %d",(ord+ordernum)->oqty);
	printf("\nEnter Product ID : %d",(ord+ordernum)->pid);
}
void updateOrder(int ordernum){
	ordernum--;
	int val = 0;
	do
	{
		printf("\n1. Order Number.");
		printf("\n2. Order Date.");
		printf("\n3. Order Quantity.");
		printf("\n4. Product Id.");
		printf("\n5. Exit");
		printf("\nEnter your updation field choice : ");
		scanf("%d",&val);
		switch(val)
		{
			case 1: printf("\nEnter order Number : ");
					scanf("%d",&(ord+ordernum)->onum);
					break;
			case 2: printf("\nEnter Date : ");
					scanf("%s",(ord+ordernum)->odt);
					break;
			case 3:	printf("\nEnter Qty : ");
					scanf("%d",&(ord+ordernum)->oqty);
					break;
			case 4:	printf("\nEnter Product ID : ");
					scanf("%d",&(ord+ordernum)->pid);
					break;
			case 5: break;
            default: printf("You entered wrong choice...");
					 break;
		}
	}while(val!=5);
}

void deleteOrder(int ordernum){
	ordernum--;
	// free(ord+ordernum);
	(ord+ordernum)->onum = NULL;
	strcpy((ord+ordernum)->odt, "None"); 
	(ord+ordernum)->oqty= NULL;
	(ord+ordernum)->pid = NULL;
	// (ord+ordernum) = NULL;
}