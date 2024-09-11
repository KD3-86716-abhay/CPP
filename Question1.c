#include<stdio.h>
struct Date {

int day;
int month;
int year;

};

void menu(int choice, struct Date* date);
void initDate(struct Date* ptrDate);
void printDateOnConsole(struct Date* ptrDate);
void acceptDateFromConsole(struct Date* ptrDate);


int main()
{
        struct Date date;
        int choice;

        do
        {
        printf("\nMenu:\n");
        printf("1. Initialize Date\n");
        printf("2. Input Date\n");
        printf("3. Display Date\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        menu(choice,&date);

        //void choiceAllDate();
        
        
        }while(choice!=4);
        return 0;
}

void menu(int choice,struct Date* date)
{          
    switch (choice) 
    {
            case 1:
                initDate(date);
                printf("Date initialized to 10/12/2002.\n");
                break;
            case 2:
                acceptDateFromConsole(date);
                printf("Date accepted from console.\n");
                break;
            case 3:
                printDateOnConsole(date);
                break;
            case 4:
                printf("Exiting program.\n");
                break;
            default:
                printf("Invalid choice! Please try again.\n");
                break;
        
    }
}




void initDate(struct Date* ptrDate)
{
    ptrDate->day=10;
    ptrDate->month=12;
    ptrDate-> year=2002;
    printf("day-->%dmonth-->%dyear-->%d",ptrDate->day,ptrDate->month,ptrDate->year);
}
void printDateOnConsole(struct Date* ptrDate)
{
    printf("enter day from user::");
    scanf("%d",&ptrDate->day);
    printf("enter month from user::");
    scanf("%d",&ptrDate->month);
    printf("enter year from user::");
    scanf("%d",&ptrDate->year);
    
    printf("%d %d %d",ptrDate->day,ptrDate->month,ptrDate->year);

}

void acceptDateFromConsole(struct Date* ptrDate)
{
    printf("Date: %d \t %d \t %d \n",ptrDate->day,ptrDate->month,ptrDate->year);

}





