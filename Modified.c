#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct book
{
	char code[20];
	char name[20];
	char date[20];
	int cost;
}b;

int seat = 60;
void ta_det();

void main()
{
	 int ch;
 	do{
    printf("Sai Varshan - RA2111019010009\n");
	printf("\n==================================");
	printf("\n");
	printf("  Airline Ticket booking ");
	printf("\n");
	printf("\n==================================");
	printf("\n 1 Booking");
   	printf("\n 2 View All Ticket");
	printf("\n 3 Find Ticket ");
	printf("\n 4 Booked Ticket");
	printf("\n 5 View All Record");
	printf("\n 6 Delete Record");
   	printf("\n 0 Exit \n");
   	printf("\nEnter your Choice:  ");
   	scanf("%d",&ch);
   	switch (ch)
   	{
        case 1 :
        ta_det();
   		break;

    default:
    printf("Unavailable\n\n");
    break;
   	}
 }while(ch!=0);
}
void ta_det()
{
	FILE *fp;
	struct book b;
	printf("Enter ticket code :  ");
	scanf("%s",b.code);
	printf("Enter  passenger name :  ");
	scanf("%s",b.name);
	printf("Enter  Date:  ");
	scanf("%s",b.date);
    printf("Enter Ticket Price:  ");
	scanf("%d",&b.cost);
	fp=fopen("BOOKING.txt","a");
    fprintf(fp,"%s %s %s %d\n",b.code,b.name,b.date,b.cost);
    printf("\nCongratulations,Booking successfull\n");
    printf("\n");
	fclose(fp);
}
