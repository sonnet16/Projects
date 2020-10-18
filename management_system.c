#include<stdio.h>
#include<string.h>
#include <windows.h>
#include<time.h>

struct node{

    char data[100];
    char syn[100];
    char ant[100];
    int ant1;
    int ant2;
    char ant3[100];
    char ant4[100];
    char ant5[100];
    char ant6[100];
    char ant8[100];
    struct node *link;
};
struct node *head=NULL;
struct node *tail=NULL;
char password[10]={"12345"};

void delay(unsigned int mseconds)
{
    clock_t goal = mseconds + clock();
    while (goal > clock());
}

 ///******************************** CREATE PASSWORD OPTION ***********************

void Password()
{  system("cls");
   char d[25]=" Password Protected";

     system("cls");
   char ch,pass[10];
   int i=0,j;
    for(j=0;j<20;j++)
    {
        delay(50);
    printf("*");
    }
    for(j=0;j<20;j++)
   {
       delay(50);
   printf("%c",d[j]);
   }
   for(j=0;j<20;j++)
   {
       delay(50);
   printf("*");
   }

   printf("\nEnter Password:");

   while(ch!=13)
   {
	ch=getch();

	if(ch!=13 && ch!=8){
	putch('*');
	pass[i] = ch;
	i++;
	}
   }

   pass[i] = '\0';
   if(strcmp(pass,password)==0)
   {
    system("cls");

	printf("Password match");

	printf("Press any key to countinue.....");
	getch();
   }
   else
   {    system("cls");

	 printf("\aWarning!! Incorrect Password");
	 getch();
	 Password();
   }
}


int creat_node( char ch[10],char ch1[50],char ch2[50],int ch3,int ch4,char ch5[50],char ch6[50],char ch7[50],char ch8[50],char ch10[50]){
    struct node *NODE=(struct node*)malloc(sizeof(struct node));
    strcpy(NODE->data,ch);
    strcpy(NODE->syn,ch1);
    strcpy(NODE->ant,ch2);
    NODE->ant1=ch3;
    NODE->ant2=ch4;
    strcpy(NODE->ant3,ch5);
    strcpy(NODE->ant4,ch6);
    strcpy(NODE->ant5,ch7);
    strcpy(NODE->ant6,ch8);
    strcpy(NODE->ant8,ch10);
    NODE->link= NULL;
    if(head==NULL){
        head=tail=NODE;
    }
    else{
        tail->link=NODE;
        tail=NODE;
    }
}

///********************************* CREATE DISPLAY FUNCTION *********************

void display(){
   // system("cls");
    struct node *link=head;

     int i=0;
    while(link!=NULL){
        printf("\t\t\t\t%d.%s\n",++i,link->data);
        printf("\t\t\t\t------------");
        printf("\n\t\t\tPresident:%s",link->syn);
        printf("\n\t\t\tPrime minister:%s",link->ant);
        printf("\n\t\t\tLand area:%d sq mi",link->ant1);
        printf("\n\t\t\tPopulation:%d",link->ant2);
        printf("\n\t\t\tCapital:%s",link->ant3);
        printf("\n\t\t\tMonetary Unit:%s",link->ant4);
        printf("\n\t\t\tReligions:%s",link->ant5);
        printf("\n\t\t\tLiteracy rate:%s",link->ant6);
        printf("\n\t\t\tPrincipal Language:%s\n\n",link->ant8);
        link=link->link;
    }

}

///*********************** CREATE NODE FUNCTUION CALL FOR COUNTRY CREATION **************


void creat(){
    creat_node("Bangladesh"," Abdul Hamid"," Sheik Hasina", 51703, 166280712," Dhaka"," Taka"," Islam"," 57.7%"," Bangla");
    creat_node("India"," Pranab Mukherjee"," Narendra Modi ", 1147949 , 1236344631," New Delhi"," Rupee"," Hindu"," 62.8%"," Hindi");
    creat_node("Pakistan"," Mamnoon Hussain"," Nawaz Sharif ",300664,196174380," Islamabad"," Pakistan rupee"," Islam"," 54.9%"," Urdu (official)");
    creat_node("China"," Xi Jinping"," Premier Li Keqiang ",3600927,1355692576," Beijing"," Yuan/Renminbi"," Buddhist"," 95.1%"," Standard Chinese or Mandarin (official)");
    creat_node("Nepal"," Bidhya Devi Bhandari "," Khadga Prasad Sharma Oli",52819,30986975," Kathmandu"," Nepalese rupee"," Hindu"," 57.4%"," Nepali (official)");

}

/// ..................CREATE SEARCH FUNCTION.............


void search(char valu[10]){
    struct node *item=head;
    while(item!=NULL){
        if(strcmp(item->data,valu)==0){
            break;
        }
        else{
            item=item->link;
        }
    }
    if(item!=NULL){
        printf("Country : %s \nPresident : %s \nPrime minister : %s \nLand area : %d \nPopulation : %d \nCapital : %s\nMonetary Unit: %s\nReligion : %s\nLiteracy Rate : %s\nPrincipal Language: %s",item->data,item->syn,item->ant,item->ant1,item->ant2,item->ant3,item->ant4,item->ant5,item->ant6,item->ant8);
    }
    else{
        printf("\nItem not found");
    }
}

///...................CREATE INSERT FUNCTION................
int a;

void insert(){
    struct node *item=head,*loc=(struct node *)malloc(sizeof(struct node));
char valu[50], value[50];

char ch;
     printf("\t\tEnter your Country what do you Add: ");
        scanf("%c ",&ch);
        gets(valu);
        strcpy(loc->data,valu);
     printf("\t\tPresident: ");

        gets(value);
        strcpy(loc->syn,value);
     printf("\t\tPrime minister: ");

        gets(value);
        strcpy(loc->ant,value);
     printf("\t\tLand Area: ");
        scanf("%d",&a);

    loc->ant1=a;
     printf("\t\tPopulation: ");
        scanf("%d",&a);

        loc->ant2=a;
     printf("\t\tCapital: ");
        scanf("%c",&ch);
        gets(value);
        strcpy(loc->ant3,value);
     printf("\t\tMonetary Unit: ");

        gets(value);
        strcpy(loc->ant4,value);
     printf("\t\tReligions: ");

        gets(value);
        strcpy(loc->ant5,value);
     printf("\t\tLiteracy Rate: ");

        gets(value);
        strcpy(loc->ant6,value);
     printf("\t\tprincipal Language: ");

        gets(value);
        strcpy(loc->ant8,value);

    int choos;
    printf("\n");
    printf("Press (1) to add first position\nPress (2) to add after any Country:\n");
    scanf("%d",&choos);


    if(choos==2){
            printf("What Country's after you Add: ");
            scanf("%s",&valu);
            while(item!=NULL){
                if(strcmp(item->data,valu)==0){
                    loc->link=item->link;
                    item->link=loc;
                    break;
                }
                else{
                    item=item->link;
                }
                    }
                }
        else if(choos==1){
        loc->link=head;
        head=loc;
        }else{
            //mainmenu();
        }
display();
printf("Enter any key to go to the main menu:");
    getch();
}

///**************************** CREATE DELETE FUNCTION **************************

void delete(){
    struct node *loc=head;
struct node *locp=NULL;
    char val[100];
    printf("\nEnter the Country What you want to delete: ");
    scanf("%s",&val);
    while(loc!=NULL){
        if(strcmp(loc->data,val)==0)
            break;
        else{
            locp=loc;
            loc=loc->link;
        }
    }
    if(locp==NULL){
        head=loc->link;
    }
    else{
        if(locp!=NULL){
            locp->link=loc->link;
    }
    else{
        printf("Item not found");
        }
    }

display();
printf("Enter any key to go to the main menu:");
getch();
}

/// **************************************** MAIN MENU **************************


int mainmenu(){
system("cls");
	int i;
	 char ch[10];
 int a;

	struct node *item;

	printf("\n\t\t\xB2\xB2\xB2 Welcome to Our Project Country Management System \xB2\xB2\xB2\n\n");
	printf("\n\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 MAIN MENU");
    printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n");
	printf("\n\n\t\t\xDB\xDB\xDB\xDB\xB2 1. Admin \n ");
	printf("\n\n\t\t\xDB\xDB\xDB\xDB\xB2 2. User\n");
	printf("\n\n\t\t\xDB\xDB\xDB\xDB\xB2 3. About\n");
    printf("\n\n\t\t\xDB\xDB\xDB\xDB\xB2 4. Close Application\n");
	printf("\n\n\t\t------------------------------------------\n");

	printf("\n\xDB\xDB\xDB\xDB\xB2  Enter your choice: ");
    scanf("%d",&a);

 if(a==1){
        system("cls");
        Password();
        system("cls");
    printf("\n\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 ADMIN MENU \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
	printf("\n\n\t\t\xDB\xDB\xDB\xDB\xB2 1. Add New Country.   ");
	printf("\n\n\t\t\xDB\xDB\xDB\xDB\xB2 2. Delete Any Country.");
	printf("\n\n\t\t\xDB\xDB\xDB\xDB\xB2 3. Edit Any Country Information.");
    printf("\n\n\xDB\xB2 Enter your choice: ");
	switch(getch())
	{
		case '1':
            system("cls");
		insert();
		break;
	case '2':
	    system("cls");
		delete();
		break;

    case '3':
        system("cls");
           edit();
            break;
    case '4':
	    {
		system("cls");
		printf("\n\t\tThanks for using our Program..");
        printf("\n\t\tMade by .......\n SUMON\n");
		printf("\n\tExiting in 5 second...........>");
		exit(0);
	    }
	    default:
		{
		printf("\n\t\tWrong Entry!! Press any key back to Mainmenu: ");
		if(getch())
		mainmenu();
		}

}
 }
 else if(a==2){
        system("cls");
	printf("\n\xDB\xDB\xDB\xDB\xB2 1. Search Country\n");
	printf("\n\xDB\xDB\xDB\xDB\xB2 2. Read Country Information\n");

	printf("\nEnter your choice: ");

    switch(getch())
	{

        case '1':
            system("cls");
		    printf("\nWhich Country are You search: ");
		    scanf("%s",&ch);
           search(ch);
           getch();

	    break;
	case '2':
        system("cls");

            display();
            getch();
            break;

         default:
		{
		printf("\n\t\tWrong Entry!! Press any key back to Mainmenu: ");
		getch();
		mainmenu();
		}
	}

 }
    else if(a==3){
            system("cls");
	printf("\n\t\t\xDB\xDB\xDB\xDB\xB2 1. About Software\n");
	printf("\n\t\t\xDB\xDB\xDB\xDB\xB2 2. About Admin\n");
	printf("\nEnter your choice: ");

          switch(getch())
	{

        case '1':
            system("cls");
            About_S();
           getch();

	    break;
	case '2':
        system("cls");
        About_A();
		getch();

            break;
         default:
		printf("\n\t\tWrong Entry!! Press any key back to Mainmenu: ");
		getch();
		mainmenu();
    }
    }

        else if(a==4){
            system("cls");
            printf("\n\n");
		printf("\t\tThanks for using our Program..\n");
        printf("\t\tMade by .......\n\t\t\tSumon Sarder\t\t\tID:161-15-953\n");
		printf("\n\t\tExiting in 5 second...........>");

		exit(0);
        }
        else{
		printf("\aWrong Entry!! Please re-entered correct option");
		getch();
		mainmenu();
        }

		mainmenu();

}

///****************** ABOUT SOFTWARE***************

void About_S(){
    printf("\n\n\t\tWe have created a project using Link list which is called Country Management System.\n\t\tIt contains the information of many countries.\n\t\t You can Insert, Delete, Search and update any details of any country from this Simulation. ");
}

/// ************* ABOUT ADMIN ****************

void About_A(){
    printf("\n\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 ADMIN LIST \xB2\xB2\xB2\xB2\xB2\xB2\n\n\n");
    printf("\t\t\xB2\xB2\xB2 MD.SUMON SARDER\n\n");
    printf("\t\t\xB2\xB2\xB2 Department of CSE\n\n");


}

///********************************* EDIT FUNCTION ***********************

int edit(){

            system("cls");
            struct node *item=head;
            display();
      printf("\nWrite the Country What do you Edit: ");
      char eid[100],eid2[100];
      scanf("%s",&eid);
       while(item!=NULL){
        if(strcmp(item->data,eid)==0){
            break;
        }
        else{
            item=item->link;

        }
    }
      if(item==NULL){
        printf("Item not found.");
        getch();
        edit();
      }
    printf("\n  Press (1) to Edit Country Name.\n");
    printf("  Press (2) to Edit President.\n");
    printf("  Press (3) to Edit Prime minister.\n");
    printf("  Press (4) to Edit Land Area.\n");
    printf("  Press (5) to Edit Population.\n");
    printf("  Press (6) to Edit Capital.\n");
    printf("  Press (7) to Edit Monetary Unit.\n");
    printf("  Press (8) to Edit Religions.\n");
    printf("  Press (9) to Edit Literacy rate.\n");
    printf("  Press (10) to Edit Principal Language.\n");
    printf("  press (0) to Goto Menu\n");
    printf("Enter your choice: ");

    int valu;
    scanf("%d",&valu);


        switch(valu){
        case 1:
                printf("Write the update Country Name: ");
                scanf("%s",&eid2);
                strcpy(item->data,eid2);
                break;
        case 2:
            printf("Write the update President: ");
            scanf("%s",&eid2);
        strcpy(item->syn,eid2);
        break;
        case 3:
            printf("Write the update Prime minister: ");
            scanf("%s",&eid2);
        strcpy(item->ant,eid2);
        break;
         case 4:
            printf("Write the update Land Area: ");
            scanf("%s",&eid2);
        strcpy(item->ant1,eid2);
        break;
          case 5:
            printf("Write the update Population: ");
            scanf("%s",&eid2);
        strcpy(item->ant2,eid2);
        break;
         case 6:
            printf("Write the update Capital : ");
            scanf("%s",&eid2);
        strcpy(item->ant3,eid2);
        break;
        case 7:
            printf("Write the update Monetary: ");
            scanf("%s",&eid2);
        strcpy(item->ant4,eid2);
        break;
        case 8:
            printf("Write the update Religions: ");
            scanf("%s",&eid2);
        strcpy(item->ant5,eid2);
        break;
        case 9:
            printf("Write the update Literacy rate: ");
            scanf("%s",&eid2);
        strcpy(item->ant6,eid2);
        break;
        case 10:
            printf("Write the update Principal language: ");
            scanf("%s",&eid2);
        strcpy(item->ant8,eid2);
        break;
        case 0:
        mainmenu();
        break;
        default:
        system("cls");
            printf("Wrong choose!!! Press any key to Edit again: ");
             getch();
            edit();
            break;
    }
        display();
        getch();
}

///*********************** MAIN FUNCTIO ********************************

int main()
{
     creat();

   mainmenu();
    delay(5);
      getch();
   return 0;

}

///********************************************** THE END ************************
