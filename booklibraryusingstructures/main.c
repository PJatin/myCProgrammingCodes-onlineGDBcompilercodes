#include <stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<conio.h>

struct Library{
    char accessID[10];
    char author[20];
    char bookTitle[30];
    int flag;
};

void info();
void new();
void specificBook();
void total();
void issue_Return();

int main() {
    int index,b,i;
    printf("MENU:\n1.Display book info.\n2.Add new book\n3.Display titles of all the books of an author\n");
    printf("4.Number of books of a particular title\n5.Display total no. of books in the lib.\n");
    printf("6.Issue/Return a book\n\nEnter the Desired function: ");
    scanf("%d",&index);
    switch(index)
    {
        case 1:info();
                break;
                
        case 2:printf("How many books ? ");
               new();
               break;
        case 3:specificBook();
                break;
        case 4:total();
                break;
        case 5:
                break;
        case 6:
                break;
    }
	return 0;
}