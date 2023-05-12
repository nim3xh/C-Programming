#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void addItem();
void deleteproduct(void);
void searchItem();
void view();
int mainn();
void calc_bill();
void login();
void del();
void edit();


struct item
{
	int productid;
	char productname[40];
	int Qnt;
	float price;
}st;

int main(){
	
	login();
	mainn();

	
	return 0;
}
void login()

{
 char c; //for user choice
 
 char username[20];
 char password [20];
 
 printf("\n\t\t\t\t  **-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**\n");
 printf("\t\t\t\t       =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
 printf("\n\t\t\t\t        =                 WELCOME                   =");
 printf("\n\t\t\t\t        =                   TO                      =");
 printf("\n\t\t\t\t        =                  HOUSE                    =");
 printf("\n\t\t\t\t        =                   OF                      =");
 printf("\n\t\t\t\t        =                 FASHION                   =");
 printf("\n\t\t\t\t        =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
 printf("\n\t\t\t\t  **-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**\n");
 printf("\n \t\t\t\t \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb LOGIN \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb  ");
 printf("\n\n\t\t\t\t\t\tEnter Username: ");
 gets(username);
 
 printf("\n\t\t\t\t\t\tEnter Password: ");
 gets (password);
 
{

 
     if (strcmp (username, "user")==0) 
   {
	 
     
        if(strcmp (password, "pass")==0) 
		{
		   printf("  \n\n\n \t\t\t     WELCOME TO CLOTHING STORE MANAGEMENT SYSTEM !!!! LOGIN IS SUCCESSFUL\n\n\n"); 
        }
       	      
   
	 else
	    {
			       printf("\n      \t\t\t\t ----SORRY !!!!  You Entered password is wrong----\n\n\n");
			       login();
        }
    }

 else
	    {
			       printf("\n      \t\t\t\t ----SORRY !!!!  You Entered name is wrong----\n\n\n");
			       login(); 
        }        
        
}
	mainn();
}

void view(){
	FILE *vw;
	vw=fopen("houseoffashion.txt","a+");

	char x[500];
	int qit;
	printf("\n\n\n\t\t\t\t\t\t\tWELCOME TO THE VIWER'S SITE :)\n\n");
	
		
	
		
		

printf("---------------------------------------------------------------------------------------------------------------------------------------------\n");
printf("Item's ID\t\t\tItem's Name\t\tItem's Price\t\t\titem's Quantity\n");
printf("---------------------------------------------------------------------------------------------------------------------------------------------\n");



		while(!feof(vw)){
		fgets(x,500,vw);
		printf("%s ",x);
		}
		printf("\t\t\t\t\t\t\t\t[ 1 ]Exit");
		scanf("%d",&qit);
		switch(qit)
		{
		case 1:
			mainn();
			break;
		}
			
		
			
			
		

		fclose(vw);

	}



int mainn(){
	char yn='y';
	int choice;

	printf("\n\t\t\t\t\t         +++++++++++++++++++++++++++++++++      ");
	printf("\n\t\t\t\t\t         +       SELECT THE OPTION       +      ");
	printf("\n\t\t\t\t\t         +++++++++++++++++++++++++++++++++      ");
	printf("                                                                                          ");
	printf("                                                                                          ");
	printf("\n\t\t\t\t\t FEATURE OF CLOTHING STORE\n\t\t\t\t\t ______________________________________________");
	printf("\n\t\t\t\t\t| [1] ADD ITEMS                                |");
	printf("\n\t\t\t\t\t| _____________________________________________|");
	printf("\n\t\t\t\t\t| [2] DELETE ITEMS                             |");
	printf("\n\t\t\t\t\t| _____________________________________________|");
	printf("\n\t\t\t\t\t| [3] SEARCH ITEMS                             |");
	printf("\n\t\t\t\t\t| _____________________________________________|");
	printf("\n\t\t\t\t\t| [4] VIEW ITEMS                               |");
	printf("\n\t\t\t\t\t| _____________________________________________|");
	printf("\n\t\t\t\t\t| [5] EDIT ITEMS                               |");
	printf("\n\t\t\t\t\t| _____________________________________________|");
	printf("\n\t\t\t\t\t| [6] CALCULATE BILLS                          |");
	printf("\n\t\t\t\t\t| _____________________________________________|");
	printf("\n\t\t\t\t\t| [7] EXIT                                     |\n\t\t\t\t\t ________________________________________________\n\t\t\t\t\t\t\t\t");
 
	do{
	printf("\n\t\t\t\tCHOOSE A NUMBER IN THE BOX ABOVE:");
	scanf("%i", &choice);
	
	switch(choice){
	case 1:
		addItem();
		break;
	case 2:
		del();
		break;
	case 3:
		searchItem();
		break;
	case 4:
		view();
		break;
	case 5:
		edit();
		break;
	case 6:
		calc_bill();
		break;

	case 7:
		exit(1);
	default:
		printf("SORRY TRY AGAIN....");
	}
	
	}while(yn!='n');

}

void addItem()
{
	char c; //for user choice

	FILE *fp;

	do
	{
		 printf("\n\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb");
		printf("\n\t\t\t\t\t\t++++++++++++++++++++++++++++++++");
    		printf("\n\t\t\t\t\t\t+   ***Enter Item details***   +");
   		printf("\n\t\t\t\t\t\t++++++++++++++++++++++++++++++++");
		printf("\n\n");

		int i; //for add id
		
		fp=fopen("houseoffashion.txt","a+");
		
		//if(fp!=NULL)
		if((fp = fopen("houseoffashion.txt","a+"))!=NULL)
		{
			printf("\nEnter Item ID\t\t:");
			scanf("%i",&i);
			while(fscanf(fp,"%d %s %f %d",&st.productid, st.productname, &st.price,&st.Qnt)!=EOF)
			{
				if(i == st.productid)
				{
					printf("\n\t|-THE PRODUCT CODE ALREADY EXIST.-|\n\n\n");
					addItem();
				}
			}
			st.productid = i;
		}
		else//runs if sfile is empty
		{
			printf("\nProduct Code\t\t:");
			scanf("%i",&st.productid);
		}
		/*printf("\nEnter Item ID:");
		scanf("%d",&i);*/
			 
		printf("Enter Item Name\t\t:");
		scanf("%s",st.productname);
		
		do
		{
			printf("Enter Quantitiy[1-500]\t:");
			scanf("%d",&st.Qnt);
		}while(st.Qnt>500); //to check quantity greater than 500?

		printf("Enter Price\t\t:");
		scanf("%f",&st.price);
	
		fp=fopen("houseoffashion.txt","a");
		fprintf(fp,"%d %33s %25.2f %30d\n",st.productid, st.productname,st.price,st.Qnt);
		fclose(fp);
		printf("\n\t**************************\n");
		printf("\t+Record sucessfully added+");
		printf("\n\t**************************\n\n\n");
		printf("\n\n To continue : 'y' \n To menu : 'n'\n\n");
		scanf(" %c",&c);

		switch(c)
		{
		case 'y':
		case 'Y':
			break;
		default:
			mainn();
		}
	}while(1);
}


void edit()
{
    int id,a;
    FILE *fp,*rp;
    char edit;


    fp=fopen("houseoffashion.txt","r+"); //existing file 
    if(fp==NULL)
    {
        printf("NO RECORD ADDED.");
        
    }
    else
    {   
        rp = fopen("TempFile.txt","a");
        printf("Enter Item's' Code for edit:");
		scanf("%d",&id);
        while(fscanf(fp,"%d %s %f %d",&st.productid, st.productname, &st.price,&st.Qnt)!=EOF)
        {
            if (id==st.productid)
            {
                a=1;
                printf("\n\t\xdb\xdb\xdb\xdb\xdb Record Found \xdb\xdb\xdb\xdb\xdb");
				printf("\nItem's Name\t\t: %s",st.productname);
				printf("\nPrice\t\t\t: %.2f",st.price);
				printf("\nItem's Code\t\t: %d",st.productid);
				printf("\nItem's Quantity\t\t: %d",st.Qnt);
			
				printf("\n\n\t** New Record **");
                fflush(stdin);
                printf("\nNew Item's Name : ");
				scanf("%s",st.productname);
				fflush(stdin);
                printf("\nNew Price Rupees :");
				scanf("%f",&st.price);
                printf("\nNew Quantity     :");
				scanf("%i",&st.Qnt);
                printf("Press 'y' to edit the existing record or any key to cancel...");
				scanf(" %c",&edit);
				if(edit=='y' || edit=='Y')
				{
					fprintf(rp,"\n%d\t\t\t\t%s\t\t\t\t%.2f\t\t\t\t%d",st.productid, st.productname,st.price,st.Qnt);
					fflush(stdin);
					printf("\n\n********************************************\n");
					printf("YOUR RECORD IS SUCCESSFULLY EDITED!!!");
					printf("\n********************************************\n");
                }

            }
            else
			{
				fprintf(rp,"\n%d\t\t\t\t%s\t\t\t\t%.2f\t\t\t\t%d",st.productid, st.productname,st.price,st.Qnt);
				fflush(stdin);
			}
			
            
        }
        if(!a)
            {
                printf("\n\nTHIS ITEM DOESN'T EXIST!!!!");
            }
	fflush(stdin);
    fclose(fp);
    fclose(rp);
    remove("houseoffashion.txt");
	rename("TempFile.txt","houseoffashion.txt");
    }
     
  mainn();
}

void searchItem()
{
	printf("\n\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb");
		printf("\n\t\t\t\t\t\t++++++++++++++++++++++++++++++++");
    		printf("\n\t\t\t\t\t\t+   ***Search Item details***  +");
   		printf("\n\t\t\t\t\t\t++++++++++++++++++++++++++++++++");
		printf("\n\n");
	char c; //for user choice
	int checker=1;
	FILE *fp;
	int i; //for add id
		
	fp=fopen("houseoffashion.txt","a+");
	//if(fp!=NULL)
	if((fp = fopen("houseoffashion.txt","a+"))!=NULL)
	{
		printf("\nEnter Item ID:");
		scanf("%i",&i);
		while(fscanf(fp,"%d %s %f %d",&st.productid, st.productname, &st.price,&st.Qnt)!=EOF)
		{
			if(i == st.productid)
			{
			printf("\n\t\t\t\t\t\t\t\xdb\xdb\xdb\xdb\xdb Record Found \xdb\xdb\xdb\xdb\xdb\n");printf("---------------------------------------------------------------------------------------------------------------------------------------------\n");
			printf("\t\tItem's ID\t\t\tItem's Name\t\tItem's Price\t\t\titem's Quantity");
					printf("\n---------------------------------------------------------------------------------------------------------------------------------------------\n");
			printf("\t\t%d %33s %25.2f %30d\n",st.productid, st.productname,st.price,st.Qnt);
                	/*printf("\n\t\xdb\xdb\xdb\xdb\xdb Record Found \xdb\xdb\xdb\xdb\xdb");
			printf("\nItem's Name\t\t: %s",st.productname);
			printf("\nPrice\t\t\t: %.2f",st.price);
			printf("\nItem's Code\t\t: %i",st.productid);
			printf("\nItem's Quantity\t:%i",st.Qnt);*/
			checker++;
			break;
			}
		}
		fclose(fp);
		}
		if(checker==1)
		{
			printf("\n\nTHIS ITEM DOESN'T EXIST!!!!\n");
		}
		printf("\n\n To search More: 'y' \n To menu : 'n'\n\n");
		scanf(" %c",&c);
		switch(c)
		{
		case 'y':
		case 'Y':
			searchItem();
		default:
			mainn();
		}
}
void calc_bill()
{ 
  	float total_amount, amount=0, sub_total, discount_amount, tax_amount, value, discount, tax; 
  	int  quantity,quantity2=0;
  	char x;
 	do{
 	do
 	{
 			printf("\n----------------------------------"); 
  			printf("\n Enter the quantity of item sold: "); 
  			scanf ("%d", &quantity) ; 
  			printf("Enter item price		: "); 
  			scanf("%f", &value);
  			amount = amount + (quantity * value);
  			quantity2=quantity+quantity2;
  			printf("----------------------------------"); 
  			
  			printf("\n\n 		Do you want to add another purchase ? (y/n) : "); 
  			scanf (" %c",&x);
	}
	while((x!='n') && (x!='N'));
	
  		printf("\n Enter the percentage of discount: "); 
  		scanf("%f", &discount); 
 		printf (" \n Enter tax percentage: ") ; 
  		scanf ("%f", &tax) ; 
  		 
  		discount_amount = (amount* discount)/100.0; 
  		sub_total =amount - discount_amount; 
  		tax_amount= (sub_total*tax) /100.0; 
 		total_amount =sub_total+ tax_amount; 
 		
 		printf("\n**************************\n");
  		printf (" +\t BILL \t \t+") ;
  		printf("\n**************************\n"); 
  		printf("\nQuantity of items sold	: %d", quantity2); 
  		printf (" \n -------------") ; 
  		printf ("\nPrice for items		: LKR %.2f", amount); 
  		printf ("\nDiscount		:  LKR %.2f", discount_amount) ; 
  		printf ("\nDiscounted Total	: LKR %.2f", sub_total) ; 
 		printf ("\nTax			: LKR %.2f", tax_amount); 
  		printf("\n-------------"); 
  		printf ("\n Total Price LKR %.2f", total_amount);
  		
  		char c;
  		printf ("\n\n Press 'N' to Main menu & Y to another Bill : ");
  		scanf(" %c",&c);
  		switch(c)
		{
		case 'y':
		case 'Y':
			break;
		default:
			mainn();
		}
		}while(1);
}
void del()
     {
     	FILE *fp,*fp1;
     	struct item i1;
     	int productid;

     	
     	fp=fopen("houseoffashion.txt","r");
     	fp1=fopen("copy.txt","w");

		     	
     	   if(fp==NULL)
     	   {
     	   	fprintf(stderr,"Can't opean file");
     	   	exit(0);
     	   	
			}

		printf("\nEnter the Line Number you want to delete:");
		scanf("%d",&productid);
	    char selectedline[500];
	    int selectedlineno = 1;

     	while (fgets(selectedline, sizeof(selectedline),fp))
		{
			if(productid != selectedlineno){
		                fprintf(fp1, "%s", selectedline);
			}

			selectedlineno++;
		}


     	    fclose(fp);
     	    fclose(fp1);
     	      
     	    remove("houseoffashion.txt");
     	    rename("copy.txt","houseoffashion.txt");
     	    
     	    printf("Record deleted sucessfully\n");   	
	 } 
