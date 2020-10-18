#include <stdio.h>
#include <stdlib.h>
#include <string.h>


//##################//
// Start struct ///

struct IMS
{
 int no;
 char Bookname[30];
 char Authorname[30];
 char publication[30];
 float price;
}stud;

;int main()
{
    mainbar();
    return 0;
}



/// MAINBAR  START ///

void mainbar(){

system("cls");
    system("color 0C");

  int i,j;

printf("  \n \n \n \n \n \n \t \t \t \t \t \t \2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\n");
printf("\t \t \t \t \t \t \2\2\2                                              \2\2\2\n");
printf("\t \t \t \t \t \t \2\2\2..WELOCME TO OUR INVENTORY MANAGEMENT SYSTEM..\2\2\2  \n");
printf("\t \t \t \t \t \t \2\2\2..............................................\2\2\2\n \t \t \t \t \t \t \2\2\2  ");


for (i=1;i<=43; i++)
{
   for(j=0;j<=10000000;j++)
   {
   }
       printf("%c",62);

}
printf(" \2\2\2  \n \t \t \t \t \t \t \2\2\2                                              \2\2\2  \n");
printf("   \t \t \t \t \t \t \2\2\2                                              \2\2\2 \n");
printf("  \t \t \t \t \t \t \2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\n");
printf("\n");

  printf("\n\t \t \t \t \t \t \2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\n");
  printf(" \t \t \t \t \t \t \2   WELOCME TO OUR INVENTORY MANAGMENT SYSTEM     \2\2 \n");
  printf(" \t \t \t \t \t \t \2                                                 \2\2 \n");
  printf("\t \t \t \t \t \t \2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\n");
  printf(" \t \t \t \t \t \t \2--------------------------------------------------\2\n");
  printf(" \t \t \t \t \t \t \2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2  Menu Bar  \2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2 \n");
  printf(" \t \t \t \t \t \t \2* 1 - Enter 1..........To Book Shop             **\2\n");
  printf(" \t \t \t \t \t \t \2* 2 - Enter 2..........To Shopping Mall         **\2\n");
  printf(" \t \t \t \t \t \t \2* 3 - Enter 3..........To Main Menu             **\2\n");
  printf(" \t \t \t \t \t \t \2* 4 - Enter 4..........To About Us              **\2\n");
  printf(" \t \t \t \t \t \t \2* 5 - Enter 5..........To Contact Us            **\2\n");
  printf(" \t \t \t \t \t \t \2* 6 - Enter 6..........To Help                  **\2\n");
  printf(" \t \t \t \t \t \t \2* 7 - Enter 7..........To Close The Program     **\2\n");

  printf(" \t \t \t \t \t \t \2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\n");
  printf("\n \t \t \t \t \t \t **************** Enter the number ****************** \n \t \t \t \t \t \t \t \t \t");
  int option;
  scanf("%d",&option);
  switch(option)
  {
  case 1:
bookshop();
    break;
  case 2:
  shopping();
    break;
  case 3:
  mainbar();
     break;
  case 4:
    About_us();
    break;
  case 5:
    Contacts_us();
    break;
  case 6:
    help();
    break;
  case 7:
    exit2();
    break;
  default:
  printf("\n\t\t\t\t\t\t\t\t\t\twrong key....");
  getch();
  mainbar();
    break;

 getch();
  }



}
//##################//
//End MainBar//



/// Book Shop  START ///

void bookshop(){
system("cls");
    system("color 0E");

  int i,j;

printf("  \n \n \n \n \n \n \t \t \t \t \t \t \2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\n");
printf("\t \t \t \t \t \t \2\2\2                                              \2\2\2\n");
printf("\t \t \t \t \t \t \2\2\2..WELOCME TO OUR INVENTORY MANAGEMENT SYSTEM..\2\2\2  \n");
printf("\t \t \t \t \t \t \2\2\2..............................................\2\2\2\n \t \t \t \t \t \t \2\2\2  ");


for (i=1;i<=43; i++)
{
   for(j=0;j<=10000000;j++)
   {
   }
       printf("%c",62);

}
printf(" \2\2\2  \n \t \t \t \t \t \t \2\2\2                                              \2\2\2  \n");
printf("   \t \t \t \t \t \t \2\2\2                                              \2\2\2 \n");
printf("  \t \t \t \t \t \t \2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\n");
printf("\n");

  printf("\n\t \t \t \t \t \t \2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\n");
  printf(" \t \t \t \t \t \t \2        WELOCME TO OUR BOOK SHOP                 \2\2 \n");
  printf(" \t \t \t \t \t \t \2                                                 \2\2 \n");
  printf("\t \t \t \t \t \t \2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\n");
  printf(" \t \t \t \t \t \t \2--------------------------------------------------\2\n");
  printf(" \t \t \t \t \t \t \2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2  Menu Bar  \2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2 \n");
  printf(" \t \t \t \t \t \t \2* 1 - Enter 1..........To Academic Books        **\2\n");
  printf(" \t \t \t \t \t \t \2* 2 - Enter 2..........To Story & Novels        **\2\n");
  printf(" \t \t \t \t \t \t \2* 3 - Enter 3..........To Others                **\2\n");
  printf(" \t \t \t \t \t \t \2* 4 - Enter 4..........To Back                  **\2\n");
  printf(" \t \t \t \t \t \t \2* 4 - Enter 4..........To Exit                  **\2\n");

  printf(" \t \t \t \t \t \t \2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\n");
  printf("\t \t \t \t \t \t **************** Enter the number ******************\n \t \t \t \t \t \t \t \t ");
  int option;
  scanf("%d",&option);
  switch(option)
  {
  case 1:
    academics();
    break;
  case 2:
  Snobel();
    break;
  case 3:
    others();
    break;
  case 4:
    mainbar();
    break;
  default:
    printf("\n\t\t\t\t\t\t\t\t\t\twrong Key!......");
    getch();
    bookshop();
    break;

 getch();
  }

}

/// Book Shop  END ///





/// Academics Start ///


void academics(){

system("cls");


  int i,j;

printf("  \n \n \n \n \n \n \t \t \t \t \t \t \2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\n");
printf("\t \t \t \t \t \t \2\2\2                                              \2\2\2\n");
printf("\t \t \t \t \t \t \2\2\2..            WELOCME TO BOOK SHOP          ..\2\2\2  \n");
printf("\t \t \t \t \t \t \2\2\2..............................................\2\2\2\n \t \t \t \t \t \t \2\2\2  ");


for (i=1;i<=43; i++)
{
   for(j=0;j<=10000000;j++)
   {
   }
       printf("%c",62);

}
printf(" \2\2\2  \n \t \t \t \t \t \t \2\2\2                                              \2\2\2  \n");
printf("   \t \t \t \t \t \t \2\2\2                                              \2\2\2 \n");
printf("  \t \t \t \t \t \t \2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\n");
printf("\n");

  printf("\n\t \t \t \t \t \t \2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\n");
  printf(" \t \t \t \t \t \t \2       WELOCME TO OUR ACADEMIC BOOK SLOT         \2\2 \n");
  printf(" \t \t \t \t \t \t \2                                                 \2\2 \n");
  printf("\t \t \t \t \t \t \2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\n");
  printf(" \t \t \t \t \t \t \2--------------------------------------------------\2\n");
  printf(" \t \t \t \t \t \t \2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2  Menu Bar  \2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2 \n");
  printf(" \t \t \t \t \t \t \2* 1 - Enter 1..........To Add Books            **\2\n");
  printf(" \t \t \t \t \t \t \2* 2 - Enter 2..........To Show All Books       **\2\n");
  printf(" \t \t \t \t \t \t \2* 3 - Enter 3..........To Search Books         **\2\n");
  printf(" \t \t \t \t \t \t \2* 4 - Enter 4..........To Edit Book list       **\2\n");
  printf(" \t \t \t \t \t \t \2* 5 - Enter 5..........To Delete Books         **\2\n");
  printf(" \t \t \t \t \t \t \2* 6 - Enter 6..........To Back                 **\2\n");
  printf(" \t \t \t \t \t \t \2* 7 - Enter 7..........To Exit                 **\2\n");


  printf(" \t \t \t \t \t \t \2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\n");
  printf("\t \t \t \t \t \t **************** Enter the number ******************\n \t \t \t \t \t \t \t \t ");
  int option;
  scanf("%d",&option);
  switch(option)
  {
  case 1:
  Aadd();
    break;
  case 2:
   Ashow();
    break;
  case 3:
   Asearch();
    break;
  case 4:
    Aupdate();
    break;
  case 5:
    Adeletefile();
    break;
  case 6:
    bookshop();
    break;
  case 7:
     mainbar();
    break;
  default:
    printf("\t\t\t\t\t\t\t\t\t\t\twrong Key!......");
    getch();
    academics();
    break;
  }
}

//##################//
//Start Insert///

void Aadd()
   {
       system("cls");
       system("color 9f");

  int y,x;

printf("  \n \n \n \n \n \n \t \t \t \t \2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\n");
printf("\t \t \t \t \2\2\2                                                               \2\2\2\n");
printf("\t \t \t \t \2\2\2...................    WELOCME TO ADD BOOK          ...........\2\2\2  \n");
printf("\t \t \t \t \2\2\2...............................................................\2\2\2\n  ");
printf("  \t \t \t \t \2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\n");
printf("\t \t \t \t \2-------------------------------------------------------------------\2\n");
    char another =1;
    while(another){
    FILE *fp;
    fp = fopen("Record", "a");
    printf(" \t \t \t \t \2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2");
    printf("\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\n");

    printf(" \t \t \t \t \2\2 ");
    printf("Enter Serial No \t\t\t           :\2 ");
    scanf("%d", &stud.no);


    printf("\t \t \t \t \2\2 ");
    printf("Enter the Book Name\t\t\t           :\2 ");
    scanf("%s", &stud.Bookname);


    printf("\t \t \t \t \2\2 ");
    printf("Enter the Author Name\t\t\t   :\2 ");
    scanf("%s",&stud.Authorname);


    printf("\t \t \t \t \2\2 ");
    printf("Enter the Publication Name\t\t\t   :\2 ");
    scanf("%s",&stud.publication);


    printf("\t \t \t \t \2\2 ");
    printf("Enter The price of Book\t\t\t   :\2 ");
    scanf("%f",&stud.price);


    printf("\t \t \t \t \2\2................................................................\2\2\2\n  ");
   printf("  \t \t \t \t \2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\n");

    printf("\n\n");


    fwrite(&stud, sizeof(stud), 1, fp);
    fclose(fp);
  printf("\n \t \t \t \t \t \t \2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2");
  printf("\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2");
 printf("\n \t \t \t \t \t \t \2 *Do you want to insert another (Yes or No)?  *\2 \n\t \t \t \t \t \t");
  printf(" \2..............* 1-Yes, -2-No *.................\2\n \t \t \t \t \t \t \t \t \t");
    scanf("%s",&another);
    if (another == 'y')
    {
        Aadd();
    }

    if (another == 'n') {
  mainbar();
    }
     }
   }
//##################//
// End Insert//


//##################//
//Start  view//


   void Ashow()
{
    system("cls");
    system("color 17");
printf("  \n \n \n \n \n \n \t \t \t \t \2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\n");
printf("\t \t \t \t \2\2\2                                                               \2\2\2\n");
printf("\t \t \t \t \2\2\2..............       WELOCME TO  TO VIEW ALL BOOKS        .....\2\2\2  \n");
printf("\t \t \t \t \2\2\2...............................................................\2\2\2");

 FILE *fp1;

 fp1 = fopen("Record", "r");
 printf("\n \t \t\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2");
 printf("\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2");
 printf("\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2");

 printf("\n\t\t\2\2 \t\t\tNo    \t Book Name    \t Author Name      \t Publication       \t Price \t\t \t    \n");
 printf("\t \t\2\2\----------------------------------------------------------------------------------------------------------------------------------\n");

 while (fread(&stud, sizeof(stud), 1, fp1))


 printf("\t \t\2\2\ \t\t\t%d   \t %s     \t %s      \t %s     \t %f \t \n", stud.no, stud.Bookname, stud.Authorname, stud.publication, stud.price);
 printf("\t \t\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2");
 printf("\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2");
 printf("\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2");
 printf("\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\n");



fclose(fp1);


 printf("\n \n \t \t \t \t \t \t \2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2");
  printf("\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2");
 printf("\n \t \t \t \t \t \t \2 *Do you want to go back main bar (Yes or No)?  *\2 \n\t \t \t \t \t \t");
  printf(" \2...............*  -Yes,   -No *..................\2\n \t \t \t \t \t \t \t \t");
  char another;

    scanf("%s",&another);
    if (another == 'y')
    {
        mainbar();
    }

    if (another == 'n') {
    academics();
    }




}

//##################//
// End View//


//START SEARCH//


void Asearch()
{
   system("cls");

   system("color 0a");
int i,j;

printf("  \n \n \n \n \n \n \t \t \t \t \t \t \2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\n");
printf("\t \t \t \t \t \t \2\2\2                                              \2\2\2\n");
printf("\t \t \t \t \t \t \2\2\2......   WELOCME TO OUR BOOK SHOP       ......\2\2\2  \n");
printf("\t \t \t \t \t \t \2\2\2..............................................\2\2\2\n \t \t \t \t \t \t \2\2\2  ");


for (i=1;i<=43; i++)
{
   for(j=0;j<=10000000;j++)
   {
   }
       printf("%c",62);

}
printf(" \2\2\2  \n \t \t \t \t \t \t \2\2\2                                              \2\2\2  \n");
printf("   \t \t \t \t \t \t \2\2\2                                              \2\2\2 \n");
printf("  \t \t \t \t \t \t \2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\n");
printf("\t \t \t \t \t \t \2..................................................\2\n");

 FILE *fp2;
 char another =1;
while(another){
 int r, s, avl;
 printf("\t \t \t \t \t \t \2 *.....Enter the Book no you want to search......*\2\n\t \t \t \t \t \t \t \t \t   :");
 scanf("%d", &r);
 printf(" \t \t \t \t \t \t  ");
 for (i=1;i<=43; i++)
{
   for(j=0;j<=10000000;j++)
   {
   }
       printf("%c",62);

}
printf("\n");

 avl = avlrollno(r);
 if (avl == 0)

  printf("\t \t \t \t \t \t \2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\n\t \t \t \t \t \t \2 *....Roll No %d is not available in the file.....*\2\n",r);

 else
 {
  fp2 = fopen("Record", "r");
  while (fread(&stud, sizeof(stud), 1, fp2))
  {
   s = stud.no;
   if (s == r)
   {
    printf("\n\t \t \t \t \t \t \2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\n");
    printf("\t \t \t \t \t \t \2..................................................\2");
    printf("\n\t \t \t \t \t \t \2  Serial no is     :\t\t%d",stud.no);

    printf("\n\t \t \t \t \t \t \2  Book Name        :\t\t%s",stud.Bookname);

    printf("\n\t \t \t \t \t \t \2  Author Name      :\t\t%s",stud.Authorname);

    printf("\n\t \t \t \t \t \t \2  Publication      :\t\t%s ",stud.publication);

    printf("\n\t \t \t \t \t \t \2  Price Money      :\t\t%f ",stud.price);

   }
  }
  fclose(fp2);
 }
  printf("\n \n \t \t \t \t \t \t \2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2");
  printf("\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2");
 printf("\n \t \t \t \t \t \t \2 *Do you want to Search another (Yes or No)?  *\2 \n\t \t \t \t \t \t");
  printf(" \2..............* 1-Yes, -2-No *.................\2\n \t \t \t \t \t \t \t \t");
    scanf("%s",&another);
    if (another == 'y')
    {
        Asearch();
    }

    if (another == 'n') {
    mainbar();
    }
}
}
//##################//
//End Searching//



//##################//
// Start Update//

void Aupdate()
{
system("cls");
system("color 0c");
int i,j;

printf("  \n \n \n \n \n \n \t \t \t \t \t \t \2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\n");
printf("\t \t \t \t \t \t \2\2\2                                              \2\2\2\n");
printf("\t \t \t \t \t \t \2\2\2........WELOCME TO UPDATING BOOKLIST..........\2\2\2  \n");
printf("\t \t \t \t \t \t \2\2\2..............................................\2\2\2\n \t \t \t \t \t \t \2\2\2  ");


for (i=1;i<=43; i++)
{
   for(j=0;j<=10000000;j++)
   {
   }
       printf("%c",62);

}
printf(" \2\2\2  \n \t \t \t \t \t \t \2\2\2                                              \2\2\2  \n");
printf("   \t \t \t \t \t \t \2\2\2                                              \2\2\2 \n");
printf("  \t \t \t \t \t \t \2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\n");
printf("\t \t \t \t \t \t \2..................................................\2\n");

 int avl;
 FILE *fpt;
 FILE *fpo;
 int s, r, ch;
 char another=1;
 while(another == 1){
 printf("\t \t \t \t \t \t \t \2 *..........Book list update..........*\2\n\t \t \t \t \t \t \t \t \t ");
 printf("\n\t \t \t \t \t \t \t  *...Enter the serial no of Book...*\n\t \t \t \t \t \t \t \t \t ");

 scanf("%d", &r);
 avl = avlrollno(r);
 if (avl == 0)
 {

  printf("\n\t \t \t \t \t \t \2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2");
  printf("\n\t \t \t \t \t \t \2 .Serial No. %d is not Available in the file.\2 \n\n\n", r);

 }
 else
 {
  fpo = fopen("Record", "r");
  fpt = fopen("TempFile", "w");
  while (fread(&stud, sizeof(stud), 1, fpo))
  {
   s = stud.no;
   if (s != r)
    fwrite(&stud, sizeof(stud), 1, fpt);
   else
   {
       printf(" \t \t \t \t \t \t  ");
   for (i=1;i<=50; i++)
{
   for(j=0;j<=10000000;j++)
   {
   }
       printf("%c",62);

}

    printf("\n\t \t \t \t \t \t \2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2");
    printf("\n \t \t \t \t \t \t \2 *1.  Do you want to change The Serial No    :  ?? \2");
    printf("\n \t \t \t \t \t \t \2 *2.  Do you want to change The Book Name    :  ?? \2");
    printf("\n \t \t \t \t \t \t \2 *3.  Do you want to change The Author Name  :  ?? \2");
    printf("\n \t \t \t \t \t \t \2 *4.  Do you want to change The Publication  :  ?? \2");
    printf("\n \t \t \t \t \t \t \2 *5.  Do you want to change The Price        :  ?? \2");
    ;

    printf("\n\t \t \t \t \t \t \2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2");



    printf("\n\t \t \t \t \t \t \2 *.................Enter Your Choice.............*\2\n\t \t \t \t \t \t \t \t \t");
    scanf("%d", &ch);
     printf("\n\t \t \t \t \t \t \2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2");

    switch (ch)
    {
    case 1:
       printf("\n\t \t \t \t \t \t \2 * Enter The Serial No:");
       scanf("%d", &stud.no);
       break;
    case 2:
       printf("\n\t \t \t \t \t \t Enter The Book Name: ");
       scanf("%s", &stud.Bookname);
       break;
    case 3:
       printf("\n\t \t \t \t \t \t Enter The Author Name: ");
       scanf("%s", &stud.Authorname);
       break;
    case 4:
       printf("\n\t \t \t \t \t \t Enter The Publication name : ");
       scanf("%s", &stud.publication);
       break;
    case 5:
       printf("\n\t \t \t \t \t \t Enter The Price : ");
       scanf("%f", &stud.price);
       break;

     default:
       printf("\n\t \t \t \t \t \t Invalid Selection");
       break;
    }
    fwrite(&stud, sizeof(stud), 1, fpt);
   }
  }
  fclose(fpo);
  fclose(fpt);
  fpo = fopen("Record", "w");
  fpt = fopen("TempFile", "r");
  while (fread(&stud, sizeof(stud), 1, fpt))
  {
   fwrite(&stud, sizeof(stud), 1, fpo);
  }
  fclose(fpo);
  fclose(fpt);
  printf(" \t \t \t \t \t \t  ");
   for (i=1;i<=50; i++)
{
   for(j=0;j<=10000000;j++)
   {
   }
       printf("%c",62);

}

  printf("\n\t \t \t \t \t \t \t \t \2RECORD HAS BEEN UPDATED!\2");
  printf("\n\n");
  printf("\n \t \t \t \t \t \t \2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2");
  printf("\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2");
 printf("\n \t \t \t \t \t \t \2 *Do you want to Update another (Yes or No)?  *\2 \n\t \t \t \t \t \t");
  printf(" \2..............* 1-Yes, -2-No *.................\2\n \t \t \t \t \t \t \t \t");
    scanf("%s",&another);
    if (another == 'y')
    {
        Aupdate();
    }
     }
    if (another == 'n') {
    mainbar();
    }

 }
}

//##################//
//END Update//



//##################//
//Start Deleting//


void Adeletefile()
{

 system("cls");
 system("color 8e");

  int i,j;

printf("  \n \n \n \n \n \n \t \t \t \t \t \t \2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\n");
printf("\t \t \t \t \t \t \2\2\2                                              \2\2\2\n");
printf("\t \t \t \t \t \t \2\2\2..............WELCOME TO DELETING.............\2\2\2  \n");
printf("\t \t \t \t \t \t \2\2\2..............................................\2\2\2\n \t \t \t \t \t \t \2\2\2  ");


for (i=1;i<=43; i++)
{
   for(j=0;j<=10000000;j++)
   {
   }
       printf("%c",62);

}
printf(" \2\2\2  \n \t \t \t \t \t \t \2\2\2                                              \2\2\2  \n");
printf("   \t \t \t \t \t \t \2\2\2                                              \2\2\2 \n");
printf("  \t \t \t \t \t \t \2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\n");
printf("\n");


 FILE *fpo;
 FILE *fpt;
 int r, s;
 char another=1;
 while(another == 1){

 printf("\t \t \t \t \t \t Enter the Serial no you want to delete :");
 scanf("%d", &r);
 if (avlrollno(r) == 0)
  printf("\t \t \t \t \t \t Serial no %d is not available in the file\n", r);
 else
 {
  fpo = fopen("Record", "r");
  fpt = fopen("TempFile", "w");
  while (fread(&stud, sizeof(stud), 1, fpo))
  {
   s = stud.no;
   if (s != r)
    fwrite(&stud, sizeof(stud), 1, fpt);
  }
  fclose(fpo);
  fclose(fpt);
  fpo = fopen("Record", "w");
  fpt = fopen("TempFile", "r");
  while (fread(&stud, sizeof(stud), 1, fpt))
   fwrite(&stud, sizeof(stud), 1, fpo);
   printf(" \t \t \t \t \t \t  ");
     for (i=1;i<=50; i++)
{

   for(j=0;j<=10000000;j++)
   {
   }
       printf("%c",62);

}
  printf("\n \t \t \t \t \t \t \t \t \2RECORD HAS BEN DELETED!\2\n");
  printf("\n\n");

  another=0;

  fclose(fpo);
fclose(fpt);


    }
  printf("\n \t \t \t \t \t \t \2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2");
  printf("\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2");
 printf("\n \t \t \t \t \t \t \2 *Do you want to delete another (Yes or No)?  *\2 \n\t \t \t \t \t \t");
  printf(" \2..............* 1-Yes, -2-No *.................\2\n \t \t \t \t \t \t \t \t");
    scanf("%s",&another);
    if (another == 'y')
    {
        Adeletefile();
    }
     }
    if (another == 'n') {
   mainbar();
    }
}

getch();
//##################//
// end Deleting


//##################//
//avlrollno//

int avlrollno(int rno)
{
 FILE *fp;
 int c = 0;
 fp = fopen("Record", "r");
 while (!feof(fp))
 {
  fread(&stud, sizeof(stud), 1, fp);

  if (rno == stud.no)
  {
   fclose(fp);
   return 1;
  }
 }
 fclose(fp);
 return 0;
}
//##################//
//End avlrollno/

//##################//
//empty//
int empty()
{
 int c = 0;
 FILE *fp;
 fp = fopen("Record", "r");
 while (fread(&stud, sizeof(stud), 1, fp))
  c = 1;
 fclose(fp);
 return c;
}

//##################//
//End Empty//


/// Story & Nobel Start ///


void Snobel(){

system("cls");


  int i,j;

printf("  \n \n \n \n \n \n \t \t \t \t \t \t \2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\n");
printf("\t \t \t \t \t \t \2\2\2                                              \2\2\2\n");
printf("\t \t \t \t \t \t \2\2\2..       WELOCME TO OUR BOOK SHOP           ..\2\2\2  \n");
printf("\t \t \t \t \t \t \2\2\2..............................................\2\2\2\n \t \t \t \t \t \t \2\2\2  ");


for (i=1;i<=43; i++)
{
   for(j=0;j<=10000000;j++)
   {
   }
       printf("%c",62);

}
printf(" \2\2\2  \n \t \t \t \t \t \t \2\2\2                                              \2\2\2  \n");
printf("   \t \t \t \t \t \t \2\2\2                                              \2\2\2 \n");
printf("  \t \t \t \t \t \t \2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\n");
printf("\n");

  printf("\n\t \t \t \t \t \t \2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\n");
  printf(" \t \t \t \t \t \t \2      WELOCME TO OUR STORY AND NOBEL SLOT        \2\2 \n");
  printf(" \t \t \t \t \t \t \2                                                 \2\2 \n");
  printf("\t \t \t \t \t \t \2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\n");
  printf(" \t \t \t \t \t \t \2--------------------------------------------------\2\n");
  printf(" \t \t \t \t \t \t \2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2  Menu Bar  \2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2 \n");
  printf(" \t \t \t \t \t \t \2* 1 - Enter 1..........To Add Books         **\2\n");
  printf(" \t \t \t \t \t \t \2* 2 - Enter 2..........To Show All Books    **\2\n");
  printf(" \t \t \t \t \t \t \2* 3 - Enter 3..........To Search Book       **\2\n");
  printf(" \t \t \t \t \t \t \2* 4 - Enter 4..........To Edit Book list    **\2\n");
  printf(" \t \t \t \t \t \t \2* 5 - Enter 5..........To Delete Books      **\2\n");
  printf(" \t \t \t \t \t \t \2* 6 - Enter 6..........To Back              **\2\n");
  printf(" \t \t \t \t \t \t \2* 7 - Enter 7..........To Exit              **\2\n");


  printf(" \t \t \t \t \t \t \2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\n");
  printf("\t \t \t \t \t \t **************** Enter the number ******************\n \t \t \t \t \t \t \t \t ");
  int option;
  scanf("%d",&option);
  switch(option)
  {
  case 1:
  add();
    break;
  case 2:
   show();
    break;
  case 3:
   search();
    break;
  case 4:
    update();
    break;
  case 5:
    deletefile();
    break;
  case 6:
    bookshop();
    break;
  case 7:
     mainbar();
    break;
  default:
    printf("\nt\t\t\t\t\t\t\t\twrong Key!......");
    Snobel();
    break;
  }
}

//##################//
//Start Insert///

void add()
   {
       system("cls");
       system("color 9f");

  int y,x;

printf("  \n \n \n \n \n \n \t \t \t \t \2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\n");
printf("\t \t \t \t \2\2\2                                                               \2\2\2\n");
printf("\t \t \t \t \2\2\2...................    WELOCME TO ADD BOOK          ...........\2\2\2  \n");
printf("\t \t \t \t \2\2\2...............................................................\2\2\2\n  ");
printf("  \t \t \t \t \2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\n");
printf("\t \t \t \t \2-------------------------------------------------------------------\2\n");
    char another =1;
    while(another){
    FILE *fp;
    fp = fopen("Record", "a");
    printf(" \t \t \t \t \2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2");
    printf("\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\n");

    printf(" \t \t \t \t \2\2 ");
    printf("Enter Serial No \t\t\t           :\2 ");
    scanf("%d", &stud.no);


    printf("\t \t \t \t \2\2 ");
    printf("Enter the Book Name\t\t\t           :\2 ");
    scanf("%s", &stud.Bookname);


    printf("\t \t \t \t \2\2 ");
    printf("Enter the Author Name\t\t\t   :\2 ");
    scanf("%s",&stud.Authorname);


    printf("\t \t \t \t \2\2 ");
    printf("Enter the Publication Name\t\t\t   :\2 ");
    scanf("%s",&stud.publication);


    printf("\t \t \t \t \2\2 ");
    printf("Enter The price of Book\t\t\t   :\2 ");
    scanf("%f",&stud.price);


    printf("\t \t \t \t \2\2................................................................\2\2\2\n  ");
   printf("  \t \t \t \t \2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\n");

    printf("\n\n");


    fwrite(&stud, sizeof(stud), 1, fp);
    fclose(fp);
  printf("\n \t \t \t \t \t \t \2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2");
  printf("\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2");
 printf("\n \t \t \t \t \t \t \2 *Do you want to insert another (Yes or No)?  *\2 \n\t \t \t \t \t \t");
  printf(" \2..............* 1-Yes, -2-No *.................\2\n \t \t \t \t \t \t \t \t \t");
    scanf("%s",&another);
    if (another == 'y')
    {
        add();
    }

    if (another == 'n') {
  mainbar();
    }
     }
   }
//##################//
// End Insert//


//##################//
//Start  view//


   void show()
{
    system("cls");
    system("color 17");
printf("  \n \n \n \n \n \n \t \t \t \t \2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\n");
printf("\t \t \t \t \2\2\2                                                               \2\2\2\n");
printf("\t \t \t \t \2\2\2..............         WELOCME TO VIEW ALL BOOKS          .....\2\2\2  \n");
printf("\t \t \t \t \2\2\2...............................................................\2\2\2");

 FILE *fp1;

 fp1 = fopen("Record", "r");
 printf("\n \t \t\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2");
 printf("\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2");
 printf("\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2");

 printf("\n\t\t\2\2 \t\t\tNo    \t Book Name    \t \t Author Name      \t Publication       \t Price \t\t \t    \n");
 printf("\t \t\2\2\----------------------------------------------------------------------------------------------------------------------------------\n");

 while (fread(&stud, sizeof(stud), 1, fp1))


 printf("\t \t\2\2\ \t\t\t%d   \t %s     \t %s      \t %s     \t %f \t \n", stud.no, stud.Bookname, stud.Authorname, stud.publication, stud.price);
 printf("\t \t\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2");
 printf("\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2");
 printf("\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2");
 printf("\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\n");



fclose(fp1);


 printf("\n \n \t \t \t \t \t \t \2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2");
  printf("\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2");
 printf("\n \t \t \t \t \t \t \2 *Do you want to go back main bar (Yes or No)?  *\2 \n\t \t \t \t \t \t");
  printf(" \2...............*  -Yes,   -No *..................\2\n \t \t \t \t \t \t \t \t");
  char another;

    scanf("%s",&another);
    if (another == 'y')
    {
        mainbar();
    }

    if (another == 'n') {
    Snobel();
    }




}

//##################//
// End View//


//START SEARCH//


void search()
{
   system("cls");

   system("color 0a");
int i,j;

printf("  \n \n \n \n \n \n \t \t \t \t \t \t \2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\n");
printf("\t \t \t \t \t \t \2\2\2                                              \2\2\2\n");
printf("\t \t \t \t \t \t \2\2\2      WELOCME TO OUR STORY AND NOBEL SLOT     \2\2\2  \n");
printf("\t \t \t \t \t \t \2\2\2..............................................\2\2\2\n \t \t \t \t \t \t \2\2\2  ");


for (i=1;i<=43; i++)
{
   for(j=0;j<=10000000;j++)
   {
   }
       printf("%c",62);

}
printf(" \2\2\2  \n \t \t \t \t \t \t \2\2\2                                              \2\2\2  \n");
printf("   \t \t \t \t \t \t \2\2\2                                              \2\2\2 \n");
printf("  \t \t \t \t \t \t \2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\n");
printf("\t \t \t \t \t \t \2..................................................\2\n");

 FILE *fp2;
 char another =1;
while(another){
 int r, s, avl;
 printf("\t \t \t \t \t \t \2 *.....Enter the Book no you want to search......*\2\n\t \t \t \t \t \t \t \t \t   :");
 scanf("%d", &r);
 printf(" \t \t \t \t \t \t  ");
 for (i=1;i<=43; i++)
{
   for(j=0;j<=10000000;j++)
   {
   }
       printf("%c",62);

}
printf("\n");

 avl = avlrollno(r);
 if (avl == 0)

  printf("\t \t \t \t \t \t \2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\n\t \t \t \t \t \t \2 *....Roll No %d is not available in the file.....*\2\n",r);

 else
 {
  fp2 = fopen("Record", "r");
  while (fread(&stud, sizeof(stud), 1, fp2))
  {
   s = stud.no;
   if (s == r)
   {
    printf("\n\t \t \t \t \t \t \2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\n");
    printf("\t \t \t \t \t \t \2..................................................\2");
    printf("\n\t \t \t \t \t \t \2  Serial no is     :\t\t%d",stud.no);

    printf("\n\t \t \t \t \t \t \2  Book Name        :\t\t%s",stud.Bookname);

    printf("\n\t \t \t \t \t \t \2  Author Name      :\t\t%s",stud.Authorname);

    printf("\n\t \t \t \t \t \t \2  Publication      :\t\t%s ",stud.publication);

    printf("\n\t \t \t \t \t \t \2  Price Money      :\t\t%f ",stud.price);

   }
  }
  fclose(fp2);
 }
  printf("\n \n \t \t \t \t \t \t \2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2");
  printf("\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2");
 printf("\n \t \t \t \t \t \t \2 *Do you want to Search another (Yes or No)?  *\2 \n\t \t \t \t \t \t");
  printf(" \2..............* 1-Yes, -2-No *.................\2\n \t \t \t \t \t \t \t \t");
    scanf("%s",&another);
    if (another == 'y')
    {
        search();
    }

    if (another == 'n') {
    mainbar();
    }
}
}
//##################//
//End Searching//


//##################//
// Start Update//

void update()
{
system("cls");
system("color 0c");
int i,j;

printf("  \n \n \n \n \n \n \t \t \t \t \t \t \2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\n");
printf("\t \t \t \t \t \t \2\2\2                                              \2\2\2\n");
printf("\t \t \t \t \t \t \2\2\2........WELOCME TO UPDATE THE FILE............\2\2\2  \n");
printf("\t \t \t \t \t \t \2\2\2..............................................\2\2\2\n \t \t \t \t \t \t \2\2\2  ");


for (i=1;i<=43; i++)
{
   for(j=0;j<=10000000;j++)
   {
   }
       printf("%c",62);

}
printf(" \2\2\2  \n \t \t \t \t \t \t \2\2\2                                              \2\2\2  \n");
printf("   \t \t \t \t \t \t \2\2\2                                              \2\2\2 \n");
printf("  \t \t \t \t \t \t \2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\n");
printf("\t \t \t \t \t \t \2..................................................\2\n");

 int avl;
 FILE *fpt;
 FILE *fpo;
 int s, r, ch;
 char another=1;
 while(another == 1){
 printf("\t \t \t \t \t \t \t \2 *..........Book list update..........*\2\n\t \t \t \t \t \t \t \t \t ");
 printf("\n\t \t \t \t \t \t \t  *...Enter the serial no of Book...*\n\t \t \t \t \t \t \t \t \t ");
 scanf("%d", &r);
 avl = avlrollno(r);
 if (avl == 0)
 {

  printf("\n\t \t \t \t \t \t \2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2");
  printf("\n\t \t \t \t \t \t \2 .Serial No. %d is not Available in the file.\2 \n\n\n", r);

 }
 else
 {
  fpo = fopen("Record", "r");
  fpt = fopen("TempFile", "w");
  while (fread(&stud, sizeof(stud), 1, fpo))
  {
   s = stud.no;
   if (s != r)
    fwrite(&stud, sizeof(stud), 1, fpt);
   else
   {
       printf(" \t \t \t \t \t \t  ");
   for (i=1;i<=50; i++)
{
   for(j=0;j<=10000000;j++)
   {
   }
       printf("%c",62);

}

    printf("\n\t \t \t \t \t \t \2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2");
    printf("\n \t \t \t \t \t \t \2 *1.  Do you want to change The Serial No    :  ? \2");
    printf("\n \t \t \t \t \t \t \2 *2.  Do you want to change The Book Name    :  ? \2");
    printf("\n \t \t \t \t \t \t \2 *3.  Do you want to change The Author Name  :  ? \2");
    printf("\n \t \t \t \t \t \t \2 *4.  Do you want to change The Publication  :  ? \2");
    printf("\n \t \t \t \t \t \t \2 *5.  Do you want to change The Price        :  ? \2");
    ;

    printf("\n\t \t \t \t \t \t \2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2");



    printf("\n\t \t \t \t \t \t \2 *.................Enter your choice.............*\2\n\t \t \t \t \t \t \t \t \t");
    scanf("%d", &ch);
     printf("\n\t \t \t \t \t \t \2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2");

    switch (ch)
    {
    case 1:
       printf("\n\t \t \t \t \t \t \2 * Enter The Serial No:");
       scanf("%d", &stud.no);
       break;
    case 2:
       printf("\n\t \t \t \t \t \t Enter The Book Name: ");
       scanf("%s", &stud.Bookname);
       break;
    case 3:
       printf("\n\t \t \t \t \t \t Enter The Author Name: ");
       scanf("%s", &stud.Authorname);
       break;
    case 4:
       printf("\n\t \t \t \t \t \t Enter The Publication name : ");
       scanf("%s", &stud.publication);
       break;
    case 5:
       printf("\n\t \t \t \t \t \t Enter The Price : ");
       scanf("%f", &stud.price);
       break;

     default:
       printf("\n\t \t \t \t \t \t Invalid Selection");
       break;
    }
    fwrite(&stud, sizeof(stud), 1, fpt);
   }
  }
  fclose(fpo);
  fclose(fpt);
  fpo = fopen("Record", "w");
  fpt = fopen("TempFile", "r");
  while (fread(&stud, sizeof(stud), 1, fpt))
  {
   fwrite(&stud, sizeof(stud), 1, fpo);
  }
  fclose(fpo);
  fclose(fpt);
  printf(" \t \t \t \t \t \t  ");
   for (i=1;i<=50; i++)
{
   for(j=0;j<=10000000;j++)
   {
   }
       printf("%c",62);

}

  printf("\n\t \t \t \t \t \t \t \t \2RECORD HAS BEEN CHANGE!\2");
  printf("\n\n");
  printf("\n \t \t \t \t \t \t \2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2");
  printf("\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2");
 printf("\n \t \t \t \t \t \t \2 *Do you want to Update another (Yes or No)?  *\2 \n\t \t \t \t \t \t");
  printf(" \2..............* 1-Yes, -2-No *.................\2\n \t \t \t \t \t \t \t \t");
    scanf("%s",&another);
    if (another == 'y')
    {
        update();
    }
     }
    if (another == 'n') {
    mainbar();
    }

 }
}

//##################//
//END Update//



//##################//
//Start Deleting//


void deletefile()
{

 system("cls");
 system("color 8e");

  int i,j;

printf("  \n \n \n \n \n \n \t \t \t \t \t \t \2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\n");
printf("\t \t \t \t \t \t \2\2\2                                              \2\2\2\n");
printf("\t \t \t \t \t \t \2\2\2..............WELCOME TO DELETING.............\2\2\2  \n");
printf("\t \t \t \t \t \t \2\2\2..............................................\2\2\2\n \t \t \t \t \t \t \2\2\2  ");


for (i=1;i<=43; i++)
{
   for(j=0;j<=10000000;j++)
   {
   }
       printf("%c",62);

}
printf(" \2\2\2  \n \t \t \t \t \t \t \2\2\2                                              \2\2\2  \n");
printf("   \t \t \t \t \t \t \2\2\2                                              \2\2\2 \n");
printf("  \t \t \t \t \t \t \2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\n");
printf("\n");


 FILE *fpo;
 FILE *fpt;
 int r, s;
 char another=1;
 while(another == 1){

 printf("\t \t \t \t \t \t Enter the Serial no you want to delete :");
 scanf("%d", &r);
 if (avlrollno(r) == 0)
  printf("\t \t \t \t \t \t Serial no %d is not available in the file\n", r);
 else
 {
  fpo = fopen("Record", "r");
  fpt = fopen("TempFile", "w");
  while (fread(&stud, sizeof(stud), 1, fpo))
  {
   s = stud.no;
   if (s != r)
    fwrite(&stud, sizeof(stud), 1, fpt);
  }
  fclose(fpo);
  fclose(fpt);
  fpo = fopen("Record", "w");
  fpt = fopen("TempFile", "r");
  while (fread(&stud, sizeof(stud), 1, fpt))
   fwrite(&stud, sizeof(stud), 1, fpo);
   printf(" \t \t \t \t \t \t  ");
     for (i=1;i<=50; i++)
{

   for(j=0;j<=10000000;j++)
   {
   }
       printf("%c",62);

}
  printf("\n \t \t \t \t \t \t \t \t \2RECORD HAS BEEN DELETED!\2\n");
  printf("\n\n");

  another=0;

  fclose(fpo);
fclose(fpt);


    }
  printf("\n \t \t \t \t \t \t \2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2");
  printf("\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2");
 printf("\n \t \t \t \t \t \t \2 *Do you want to delete another (Yes or No)?  *\2 \n\t \t \t \t \t \t");
  printf(" \2..............* 1-Yes, -2-No *.................\2\n \t \t \t \t \t \t \t \t");
    scanf("%s",&another);
    if (another == 'y')
    {
        deletefile();
    }
     }
    if (another == 'n') {
   mainbar();
    }
}

getch();
//##################//
// end Deleting


/// Other Book slot Start ///


void others(){

system("cls");


  int i,j;

printf("  \n \n \n \n \n \n \t \t \t \t \t \t \2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\n");
printf("\t \t \t \t \t \t \2\2\2                                              \2\2\2\n");
printf("\t \t \t \t \t \t \2\2\2..          WELOCME TO BOOK SHOP            ..\2\2\2  \n");
printf("\t \t \t \t \t \t \2\2\2..............................................\2\2\2\n \t \t \t \t \t \t \2\2\2  ");


for (i=1;i<=43; i++)
{
   for(j=0;j<=10000000;j++)
   {
   }
       printf("%c",62);

}
printf(" \2\2\2  \n \t \t \t \t \t \t \2\2\2                                              \2\2\2  \n");
printf("   \t \t \t \t \t \t \2\2\2                                              \2\2\2 \n");
printf("  \t \t \t \t \t \t \2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\n");
printf("\n");

  printf("\n\t \t \t \t \t \t \2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\n");
  printf(" \t \t \t \t \t \t \2        WELOCME TO OUR ANOTHER BOOK SLOTS        \2\2 \n");
  printf(" \t \t \t \t \t \t \2                                                 \2\2 \n");
  printf("\t \t \t \t \t \t \2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\n");
  printf(" \t \t \t \t \t \t \2--------------------------------------------------\2\n");
  printf(" \t \t \t \t \t \t \2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2  Menu Bar  \2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2 \n");
  printf(" \t \t \t \t \t \t \2* 1 - Enter 1..........To Add Books         **\2\n");
  printf(" \t \t \t \t \t \t \2* 2 - Enter 2..........To Show All Books    **\2\n");
  printf(" \t \t \t \t \t \t \2* 3 - Enter 3..........To Search Books      **\2\n");
  printf(" \t \t \t \t \t \t \2* 4 - Enter 4..........To Edit Book list    **\2\n");
  printf(" \t \t \t \t \t \t \2* 5 - Enter 5..........To Delete Books      **\2\n");
  printf(" \t \t \t \t \t \t \2* 6 - Enter 6..........To Back              **\2\n");
  printf(" \t \t \t \t \t \t \2* 7 - Enter 7..........To Exit              **\2\n");


  printf(" \t \t \t \t \t \t \2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\n");
  printf("\t \t \t \t \t \t **************** Enter the number ******************\n \t \t \t \t \t \t \t \t ");
  int option;
  scanf("%d",&option);
  switch(option)
  {
  case 1:
  Oadd();
    break;
  case 2:
   Oshow();
    break;
  case 3:
   Osearch();
    break;
  case 4:
    Oupdate();
    break;
  case 5:
    Odeletefile();
    break;
  case 6:
    bookshop();
    break;
  case 7:
     mainbar();
    break;
  default:
    printf("\n\t\t\t\t\t\t\t\t\t\twrong Key!......");
    others();
    break;
  }
}

//##################//
//Start Insert///

void Oadd()
   {
       system("cls");
       system("color 9f");

  int y,x;

printf("  \n \n \n \n \n \n \t \t \t \t \2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\n");
printf("\t \t \t \t \2\2\2                                                               \2\2\2\n");
printf("\t \t \t \t \2\2\2...................    WELOCME TO ADD BOOK          ...........\2\2\2  \n");
printf("\t \t \t \t \2\2\2...............................................................\2\2\2\n  ");
printf("  \t \t \t \t \2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\n");
printf("\t \t \t \t \2-------------------------------------------------------------------\2\n");
    char another =1;
    while(another){
    FILE *fp;
    fp = fopen("Record", "a");
    printf(" \t \t \t \t \2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2");
    printf("\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\n");

    printf(" \t \t \t \t \2\2 ");
    printf("Enter Serial No \t\t\t           :\2 ");
    scanf("%d", &stud.no);


    printf("\t \t \t \t \2\2 ");
    printf("Enter the Book Name\t\t\t           :\2 ");
    scanf("%s", &stud.Bookname);


    printf("\t \t \t \t \2\2 ");
    printf("Enter the Author Name\t\t\t   :\2 ");
    scanf("%s",&stud.Authorname);


    printf("\t \t \t \t \2\2 ");
    printf("Enter the Publication Name\t\t\t   :\2 ");
    scanf("%s",&stud.publication);


    printf("\t \t \t \t \2\2 ");
    printf("Enter The price of Book\t\t\t   :\2 ");
    scanf("%f",&stud.price);


    printf("\t \t \t \t \2\2................................................................\2\2\2\n  ");
   printf("  \t \t \t \t \2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\n");

    printf("\n\n");


    fwrite(&stud, sizeof(stud), 1, fp);
    fclose(fp);
  printf("\n \t \t \t \t \t \t \2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2");
  printf("\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2");
 printf("\n \t \t \t \t \t \t \2 *Do you want to insert another (Yes or No)?  *\2 \n\t \t \t \t \t \t");
  printf(" \2..............* 1-Yes, -2-No *.................\2\n \t \t \t \t \t \t \t \t \t");
    scanf("%s",&another);
    if (another == 'y')
    {
        Oadd();
    }

    if (another == 'n') {
  mainbar();
    }
     }
   }
//##################//
// End Insert//



//##################//
//Start  view//


   void Oshow()
{
    system("cls");
    system("color 17");
printf("  \n \n \n \n \n \n \t \t \t \t \2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\n");
printf("\t \t \t \t \2\2\2                                                               \2\2\2\n");
printf("\t \t \t \t \2\2\2..............       WELOCME TO  TO VIEW ALL BOOKS        .....\2\2\2  \n");
printf("\t \t \t \t \2\2\2...............................................................\2\2\2");

 FILE *fp1;

 fp1 = fopen("Record", "r");
 printf("\n \t \t\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2");
 printf("\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2");
 printf("\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2");

 printf("\n\t\t\2\2 \t\t\tNo    \t Book Name    \t Author Name      \t Publication       \t Price \t\t \t    \n");
 printf("\t \t\2\2\----------------------------------------------------------------------------------------------------------------------------------\n");

 while (fread(&stud, sizeof(stud), 1, fp1))


 printf("\t \t\2\2\ \t\t\t%d   \t %s     \t %s      \t %s     \t %f \t \n", stud.no, stud.Bookname, stud.Authorname, stud.publication, stud.price);
 printf("\t \t\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2");
 printf("\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2");
 printf("\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2");
 printf("\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\n");



fclose(fp1);


 printf("\n \n \t \t \t \t \t \t \2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2");
  printf("\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2");
 printf("\n \t \t \t \t \t \t \2 *Do you want to go back main bar (Yes or No)?  *\2 \n\t \t \t \t \t \t");
  printf(" \2...............*  -Yes,   -No *..................\2\n \t \t \t \t \t \t \t \t");
  char another;

    scanf("%s",&another);
    if (another == 'y')
    {
        mainbar();
    }

    if (another == 'n') {
    others();
    }




}

//##################//
// End View//




//START SEARCH//


void Osearch()
{
   system("cls");

   system("color 0a");
int i,j;

printf("  \n \n \n \n \n \n \t \t \t \t \t \t \2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\n");
printf("\t \t \t \t \t \t \2\2\2                                              \2\2\2\n");
printf("\t \t \t \t \t \t \2\2\2..WELOCME TO OUR INVENTORY MANAGMENT SYSTEM ..\2\2\2  \n");
printf("\t \t \t \t \t \t \2\2\2..............................................\2\2\2\n \t \t \t \t \t \t \2\2\2  ");


for (i=1;i<=43; i++)
{
   for(j=0;j<=10000000;j++)
   {
   }
       printf("%c",62);

}
printf(" \2\2\2  \n \t \t \t \t \t \t \2\2\2                                              \2\2\2  \n");
printf("   \t \t \t \t \t \t \2\2\2                                              \2\2\2 \n");
printf("  \t \t \t \t \t \t \2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\n");
printf("\t \t \t \t \t \t \2..................................................\2\n");

 FILE *fp2;
 char another =1;
while(another){
 int r, s, avl;
 printf("\t \t \t \t \t \t \2 *.....Enter the Book no you want to search......*\2\n\t \t \t \t \t \t \t \t \t   :");
 scanf("%d", &r);
 printf(" \t \t \t \t \t \t  ");
 for (i=1;i<=43; i++)
{
   for(j=0;j<=10000000;j++)
   {
   }
       printf("%c",62);

}
printf("\n");

 avl = avlrollno(r);
 if (avl == 0)

  printf("\t \t \t \t \t \t \2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\n\t \t \t \t \t \t \2 *....Roll No %d is not available in the file.....*\2\n",r);

 else
 {
  fp2 = fopen("Record", "r");
  while (fread(&stud, sizeof(stud), 1, fp2))
  {
   s = stud.no;
   if (s == r)
   {
    printf("\n\t \t \t \t \t \t \2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\n");
    printf("\t \t \t \t \t \t \2..................................................\2");
    printf("\n\t \t \t \t \t \t \2  Serial no is     :\t\t%d",stud.no);

    printf("\n\t \t \t \t \t \t \2  Book Name        :\t\t%s",stud.Bookname);

    printf("\n\t \t \t \t \t \t \2  Author Name      :\t\t%s",stud.Authorname);

    printf("\n\t \t \t \t \t \t \2  Publication      :\t\t%s ",stud.publication);

    printf("\n\t \t \t \t \t \t \2  Price Money      :\t\t%f ",stud.price);

   }
  }
  fclose(fp2);
 }
  printf("\n \n \t \t \t \t \t \t \2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2");
  printf("\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2");
 printf("\n \t \t \t \t \t \t \2 *Do you want to Search another (Yes or No)?  *\2 \n\t \t \t \t \t \t");
  printf(" \2..............* 1-Yes, -2-No *.................\2\n \t \t \t \t \t \t \t \t");
    scanf("%s",&another);
    if (another == 'y')
    {
        Osearch();
    }

    if (another == 'n') {
    mainbar();
    }
}
}
//##################//
//End Searching//


//##################//
// Start Update//

void Oupdate()
{
system("cls");
system("color 0c");
int i,j;

printf("  \n \n \n \n \n \n \t \t \t \t \t \t \2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\n");
printf("\t \t \t \t \t \t \2\2\2                                              \2\2\2\n");
printf("\t \t \t \t \t \t \2\2\2.........WELOCME TO UPDATE BOOKLIST...........\2\2\2  \n");
printf("\t \t \t \t \t \t \2\2\2..............................................\2\2\2\n \t \t \t \t \t \t \2\2\2  ");


for (i=1;i<=43; i++)
{
   for(j=0;j<=10000000;j++)
   {
   }
       printf("%c",62);

}
printf(" \2\2\2  \n \t \t \t \t \t \t \2\2\2                                              \2\2\2  \n");
printf("   \t \t \t \t \t \t \2\2\2                                              \2\2\2 \n");
printf("  \t \t \t \t \t \t \2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\n");
printf("\t \t \t \t \t \t \2..................................................\2\n");

 int avl;
 FILE *fpt;
 FILE *fpo;
 int s, r, ch;
 char another=1;
 while(another == 1){
 printf("\t \t \t \t \t \t \t \2 *..........Book list update..........*\2\n\t \t \t \t \t \t \t \t \t ");
 printf("\n\t \t \t \t \t \t \t  *...Enter the serial no of Book...*\n\t \t \t \t \t \t \t \t \t ");
 scanf("%d", &r);
 avl = avlrollno(r);
 if (avl == 0)
 {

  printf("\n\t \t \t \t \t \t \2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2");
  printf("\n\t \t \t \t \t \t \2 .Serial No. %d is not Available in the file.\2 \n\n\n", r);

 }
 else
 {
  fpo = fopen("Record", "r");
  fpt = fopen("TempFile", "w");
  while (fread(&stud, sizeof(stud), 1, fpo))
  {
   s = stud.no;
   if (s != r)
    fwrite(&stud, sizeof(stud), 1, fpt);
   else
   {
       printf(" \t \t \t \t \t \t  ");
   for (i=1;i<=50; i++)
{
   for(j=0;j<=10000000;j++)
   {
   }
       printf("%c",62);

}

    printf("\n\t \t \t \t \t \t \2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2");
    printf("\n \t \t \t \t \t \t \2 *1.  Do you want to change The Serial No    :  ? \2");
    printf("\n \t \t \t \t \t \t \2 *2.  Do you want to change The Book Name    :  ? \2");
    printf("\n \t \t \t \t \t \t \2 *3.  Do you want to change The Author Name  :  ? \2");
    printf("\n \t \t \t \t \t \t \2 *4.  Do you want to change The Publication  :  ? \2");
    printf("\n \t \t \t \t \t \t \2 *5.  Do you want to change The Price        :  ? \2");
    ;

    printf("\n\t \t \t \t \t \t \2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2");



    printf("\n\t \t \t \t \t \t \2 *.................Enter your choice.............*\2\n\t \t \t \t \t \t \t \t \t");
    scanf("%d", &ch);
     printf("\n\t \t \t \t \t \t \2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2");

    switch (ch)
    {
    case 1:
       printf("\n\t \t \t \t \t \t \2 * Enter The Serial No:");
       scanf("%d", &stud.no);
       break;
    case 2:
       printf("\n\t \t \t \t \t \t Enter The Book Name: ");
       scanf("%s", &stud.Bookname);
       break;
    case 3:
       printf("\n\t \t \t \t \t \t Enter The Author Name: ");
       scanf("%s", &stud.Authorname);
       break;
    case 4:
       printf("\n\t \t \t \t \t \t Enter The Publication name : ");
       scanf("%s", &stud.publication);
       break;
    case 5:
       printf("\n\t \t \t \t \t \t Enter The Price : ");
       scanf("%f", &stud.price);
       break;

     default:
       printf("\n\t \t \t \t \t \t Invalid Selection");
       break;
    }
    fwrite(&stud, sizeof(stud), 1, fpt);
   }
  }
  fclose(fpo);
  fclose(fpt);
  fpo = fopen("Record", "w");
  fpt = fopen("TempFile", "r");
  while (fread(&stud, sizeof(stud), 1, fpt))
  {
   fwrite(&stud, sizeof(stud), 1, fpo);
  }
  fclose(fpo);
  fclose(fpt);
  printf(" \t \t \t \t \t \t  ");
   for (i=1;i<=50; i++)
{
   for(j=0;j<=10000000;j++)
   {
   }
       printf("%c",62);

}

  printf("\n\t \t \t \t \t \t \t \t \2RECORD HAS BEEN CHANGE!\2");
  printf("\n\n");
  printf("\n \t \t \t \t \t \t \2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2");
  printf("\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2");
 printf("\n \t \t \t \t \t \t \2 *Do you want to Update another (Yes or No)?  *\2 \n\t \t \t \t \t \t");
  printf(" \2..............* 1-Yes, -2-No *.................\2\n \t \t \t \t \t \t \t \t");
    scanf("%s",&another);
    if (another == 'y')
    {
        Oupdate();
    }
     }
    if (another == 'n') {
    mainbar();
    }

 }
}

//##################//
//END Update//



//##################//
//Start Deleting//


void Odeletefile()
{

 system("cls");
 system("color 8e");

  int i,j;

printf("  \n \n \n \n \n \n \t \t \t \t \t \t \2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\n");
printf("\t \t \t \t \t \t \2\2\2                                              \2\2\2\n");
printf("\t \t \t \t \t \t \2\2\2..............WELCOME TO DELETING.............\2\2\2  \n");
printf("\t \t \t \t \t \t \2\2\2..............................................\2\2\2\n \t \t \t \t \t \t \2\2\2  ");


for (i=1;i<=43; i++)
{
   for(j=0;j<=10000000;j++)
   {
   }
       printf("%c",62);

}
printf(" \2\2\2  \n \t \t \t \t \t \t \2\2\2                                              \2\2\2  \n");
printf("   \t \t \t \t \t \t \2\2\2                                              \2\2\2 \n");
printf("  \t \t \t \t \t \t \2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\n");
printf("\n");


 FILE *fpo;
 FILE *fpt;
 int r, s;
 char another=1;
 while(another == 1){

 printf("\t \t \t \t \t \t Enter the Serial no you want to delete :");
 scanf("%d", &r);
 if (avlrollno(r) == 0)
  printf("\t \t \t \t \t \t Serial no %d is not available in the file\n", r);
 else
 {
  fpo = fopen("Record", "r");
  fpt = fopen("TempFile", "w");
  while (fread(&stud, sizeof(stud), 1, fpo))
  {
   s = stud.no;
   if (s != r)
    fwrite(&stud, sizeof(stud), 1, fpt);
  }
  fclose(fpo);
  fclose(fpt);
  fpo = fopen("Record", "w");
  fpt = fopen("TempFile", "r");
  while (fread(&stud, sizeof(stud), 1, fpt))
   fwrite(&stud, sizeof(stud), 1, fpo);
   printf(" \t \t \t \t \t \t  ");
     for (i=1;i<=50; i++)
{

   for(j=0;j<=10000000;j++)
   {
   }
       printf("%c",62);

}
  printf("\n \t \t \t \t \t \t \t \t \2RECORD HAS BEN DELETED!\2\n");
  printf("\n\n");

  another=0;

  fclose(fpo);
fclose(fpt);


    }
  printf("\n \t \t \t \t \t \t \2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2");
  printf("\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2");
 printf("\n \t \t \t \t \t \t \2 *Do you want to delete another (Yes or No)?  *\2 \n\t \t \t \t \t \t");
  printf(" \2..............* 1-Yes, -2-No *.................\2\n \t \t \t \t \t \t \t \t");
    scanf("%s",&another);
    if (another == 'y')
    {
        Odeletefile();
    }
     }
    if (another == 'n') {
   mainbar();
    }
}

getch();
//##################//
// end Deleting


//Start Shopping Mall//


void shopping(){

system("cls");


  int i,j;

printf("  \n \n \n \n \n \n \t \t \t \t \t \t \2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\n");
printf("\t \t \t \t \t \t \2\2\2                                              \2\2\2\n");
printf("\t \t \t \t \t \t \2\2\2   WELOCME TO OUR INVENTORY MANAGEMENT SYSTEM \2\2\2  \n");
printf("\t \t \t \t \t \t \2\2\2..............................................\2\2\2\n \t \t \t \t \t \t \2\2\2  ");


for (i=1;i<=43; i++)
{
   for(j=0;j<=10000000;j++)
   {
   }
       printf("%c",62);

}
printf(" \2\2\2  \n \t \t \t \t \t \t \2\2\2                                              \2\2\2  \n");
printf("   \t \t \t \t \t \t \2\2\2                                              \2\2\2 \n");
printf("  \t \t \t \t \t \t \2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\n");
printf("\n");

  printf("\n\t \t \t \t \t \t \2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\n");
  printf(" \t \t \t \t \t \t \2       WELOCME TO OUR SHOPPING MALL              \2\2 \n");
  printf(" \t \t \t \t \t \t \2                                                 \2\2 \n");
  printf("\t \t \t \t \t \t \2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\n");
  printf(" \t \t \t \t \t \t \2--------------------------------------------------\2\n");
  printf(" \t \t \t \t \t \t \2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2  Menu Bar  \2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2 \n");
  printf(" \t \t \t \t \t \t \2* 1 - Enter 1..........To Add Products            **\2\n");
  printf(" \t \t \t \t \t \t \2* 2 - Enter 2..........To Show All Products       **\2\n");
  printf(" \t \t \t \t \t \t \2* 3 - Enter 3..........To Search Products         **\2\n");
  printf(" \t \t \t \t \t \t \2* 4 - Enter 4..........To Edit Product list       **\2\n");
  printf(" \t \t \t \t \t \t \2* 5 - Enter 5..........To Delete Products         **\2\n");
  printf(" \t \t \t \t \t \t \2* 6 - Enter 6..........To Back                    **\2\n");
  printf(" \t \t \t \t \t \t \2* 7 - Enter 7..........To Exit                    **\2\n");


  printf(" \t \t \t \t \t \t \2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\n");
  printf("\t \t \t \t \t \t **************** Enter the number ******************\n \t \t \t \t \t \t \t \t ");
  int option;
  scanf("%d",&option);
  switch(option)
  {
  case 1:
  Sadd();
    break;
  case 2:
   Sshow();
    break;
  case 3:
   Ssearch();
    break;
  case 4:
    Supdate();
    break;
  case 5:
    Sdeletefile();
    break;
  case 6:
    shopping();
    break;
  case 7:
     mainbar();
    break;
  default:
    printf("\t\t\t\t\t\t\t\t\t\t\twrong Key!......");
    getch();
    academics();
    break;
  }
}

//##################//
//Start Insert///

void Sadd()
   {
       system("cls");
       system("color 9f");

  int y,x;

printf("  \n \n \n \n \n \n \t \t \t \t \2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\n");
printf("\t \t \t \t \2\2\2                                                               \2\2\2\n");
printf("\t \t \t \t \2\2\2...................    WELOCME TO ADD PRODUCTS      ...........\2\2\2  \n");
printf("\t \t \t \t \2\2\2...............................................................\2\2\2\n  ");
printf("  \t \t \t \t \2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\n");
printf("\t \t \t \t \2-------------------------------------------------------------------\2\n");
    char another =1;
    while(another){
    FILE *fp;
    fp = fopen("SRecord", "a");
    printf(" \t \t \t \t \2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2");
    printf("\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\n");

    printf(" \t \t \t \t \2\2 ");
    printf("Enter product code \t\t\t           :\2 ");
    scanf("%d", &stud.no);


    printf("\t \t \t \t \2\2 ");
    printf("Enter the Product Type\t\t\t           :\2 ");
    scanf("%s", &stud.Bookname);


    printf("\t \t \t \t \2\2 ");
    printf("Enter the product name \t\t\t   :\2 ");
    scanf("%s",&stud.Authorname);


    printf("\t \t \t \t \2\2 ");
    printf("Enter the Producer Name\t\t\t   :\2 ");
    scanf("%s",&stud.publication);


    printf("\t \t \t \t \2\2 ");
    printf("Enter The price of Product\t\t\t   :\2 ");
    scanf("%f",&stud.price);


    printf("\t \t \t \t \2\2................................................................\2\2\2\n  ");
   printf("  \t \t \t \t \2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\n");

    printf("\n\n");


    fwrite(&stud, sizeof(stud), 1, fp);
    fclose(fp);
  printf("\n \t \t \t \t \t \t \2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2");
  printf("\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2");
 printf("\n \t \t \t \t \t \t \2 *Do you want to insert another (Yes or No)?  *\2 \n\t \t \t \t \t \t");
  printf(" \2..............* 1-Yes, -2-No *.................\2\n \t \t \t \t \t \t \t \t \t");
    scanf("%s",&another);
    if (another == 'y')
    {
        Sadd();
    }

    if (another == 'n') {
  shopping();
    }
     }
   }
//##################//
// End Insert//


//##################//
//Start  view//


   void Sshow()
{
    system("cls");
    system("color 17");
printf("  \n \n \n \n \n \n \t \t \t \t \2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\n");
printf("\t \t \t \t \2\2\2                                                               \2\2\2\n");
printf("\t \t \t \t \2\2\2..............       WELOCME TO  TO VIEW ALL PRODUCTS     .....\2\2\2  \n");
printf("\t \t \t \t \2\2\2...............................................................\2\2\2");

 FILE *fp1;

 fp1 = fopen("SRecord", "r");
 printf("\n \t \t\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2");
 printf("\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2");
 printf("\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2");

 printf("\n\t\t\2\2 \t\t\tProduct Code    \t Product Type    \tProduct Name   \tProducer      \tPrice \t\t \t    \n");
 printf("\t \t\2\2\----------------------------------------------------------------------------------------------------------------------------------\n");

 while (fread(&stud, sizeof(stud), 1, fp1))


 printf("\t \t\2\2\ \t\t\t%d   \t\t %s     \t %s      \t %s     \t %f \t \n", stud.no, stud.Bookname, stud.Authorname, stud.publication, stud.price);
 printf("\t \t\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2");
 printf("\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2");
 printf("\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2");
 printf("\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\n");



fclose(fp1);


 printf("\n \n \t \t \t \t \t \t \2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2");
  printf("\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2");
 printf("\n \t \t \t \t \t \t \2 *Do you want to go back Shopping Mall (Yes or No)?  *\2 \n\t \t \t \t \t \t");
  printf(" \2...............*  -Yes,   -No *..................\2\n \t \t \t \t \t \t \t \t");
  char another;

    scanf("%s",&another);
    if (another == 'y')
    {
        shopping();
    }

    if (another == 'n') {
    mainbar();
    }




}

//##################//
// End View//


//START SEARCH//


void Ssearch()
{
   system("cls");

   system("color 0a");
int i,j;

printf("  \n \n \n \n \n \n \t \t \t \t \t \t \2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\n");
printf("\t \t \t \t \t \t \2\2\2                                              \2\2\2\n");
printf("\t \t \t \t \t \t \2\2\2....  SEARCHING YOUR DREAMING PRODUCTS   .....\2\2\2  \n");
printf("\t \t \t \t \t \t \2\2\2..............................................\2\2\2\n \t \t \t \t \t \t \2\2\2  ");


for (i=1;i<=43; i++)
{
   for(j=0;j<=10000000;j++)
   {
   }
       printf("%c",62);

}
printf(" \2\2\2  \n \t \t \t \t \t \t \2\2\2                                              \2\2\2  \n");
printf("   \t \t \t \t \t \t \2\2\2                                              \2\2\2 \n");
printf("  \t \t \t \t \t \t \2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\n");
printf("\t \t \t \t \t \t \2..................................................\2\n");

 FILE *fp2;
 char another =1;
while(another){
 int r, s, avl;
 printf("\t \t \t \t \t \t \2 *.....Enter The Product Code What Your Want. ..*\2\n\t \t \t \t \t \t \t \t \t   :");
 scanf("%d", &r);
 printf(" \t \t \t \t \t \t  ");
 for (i=1;i<=43; i++)
{
   for(j=0;j<=10000000;j++)
   {
   }
       printf("%c",62);

}
printf("\n");

 avl = avlrollno(r);
 if (avl == 0)

  printf("\t \t \t \t \t \t \2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\n\t \t \t \t \t \t \2 *....Roll No %d is not available in the file.....*\2\n",r);

 else
 {
  fp2 = fopen("SRecord", "r");
  while (fread(&stud, sizeof(stud), 1, fp2))
  {
   s = stud.no;
   if (s == r)
   {
    printf("\n\t \t \t \t \t \t \2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\n");
    printf("\t \t \t \t \t \t \2..................................................\2");
    printf("\n\t \t \t \t \t \t \2  Product Code is        :\t\t%d",stud.no);

    printf("\n\t \t \t \t \t \t \2  Product Type is        :\t\t%s",stud.Bookname);

    printf("\n\t \t \t \t \t \t \2  Product Name is        :\t\t%s",stud.Authorname);

    printf("\n\t \t \t \t \t \t \2  Producer Name is       :\t\t%s ",stud.publication);

    printf("\n\t \t \t \t \t \t \2  Price of Product is    :\t\t%f ",stud.price);

   }
  }
  fclose(fp2);
 }
  printf("\n \n \t \t \t \t \t \t \2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2");
  printf("\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2");
 printf("\n \t \t \t \t \t \t \2 *Do you want to Search another (Yes or No)?  *\2 \n\t \t \t \t \t \t");
  printf(" \2..............* 1-Yes, -2-No *.................\2\n \t \t \t \t \t \t \t \t");
    scanf("%s",&another);
    if (another == 'y')
    {
        Ssearch();
    }

    if (another == 'n') {
    shopping();
    }
}
}
//##################//
//End Searching//



//##################//
// Start Update//

void Supdate()
{
system("cls");
system("color 0c");
int i,j;

printf("  \n \n \n \n \n \n \t \t \t \t \t \t \2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\n");
printf("\t \t \t \t \t \t \2\2\2                                              \2\2\2\n");
printf("\t \t \t \t \t \t \2\2\2........WELOCME TO UPDATING PRODUCTLIST.......\2\2\2  \n");
printf("\t \t \t \t \t \t \2\2\2..............................................\2\2\2\n \t \t \t \t \t \t \2\2\2  ");


for (i=1;i<=43; i++)
{
   for(j=0;j<=10000000;j++)
   {
   }
       printf("%c",62);

}
printf(" \2\2\2  \n \t \t \t \t \t \t \2\2\2                                              \2\2\2  \n");
printf("   \t \t \t \t \t \t \2\2\2                                              \2\2\2 \n");
printf("  \t \t \t \t \t \t \2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\n");
printf("\t \t \t \t \t \t \2..................................................\2\n");

 int avl;
 FILE *fpt;
 FILE *fpo;
 int s, r, ch;
 char another=1;
 while(another == 1){
 printf("\t \t \t \t \t \t \t \2 *..........Product list update........*\2\n\t \t \t \t \t \t \t \t \t ");
 printf("\n\t \t \t \t \t \t \t  *...     Enter The Product Code    ...*\n\t \t \t \t \t \t \t \t \t ");

 scanf("%d", &r);
 avl = avlrollno(r);
 if (avl == 0)
 {

  printf("\n\t \t \t \t \t \t \2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2");
  printf("\n\t \t \t \t \t \t \2 . Product Code : %d is not Available in the Shopping Mall.\2 \n\n\n", r);

 }
 else
 {
  fpo = fopen("SRecord", "r");
  fpt = fopen("TempFile", "w");
  while (fread(&stud, sizeof(stud), 1, fpo))
  {
   s = stud.no;
   if (s != r)
    fwrite(&stud, sizeof(stud), 1, fpt);
   else
   {
       printf(" \t \t \t \t \t \t  ");
   for (i=1;i<=50; i++)
{
   for(j=0;j<=10000000;j++)
   {
   }
       printf("%c",62);

}

    printf("\n\t \t \t \t \t \t \2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2");
    printf("\n \t \t \t \t \t \t \2 *1.  Do you want to change The Product Code    :  ?? \2");
    printf("\n \t \t \t \t \t \t \2 *2.  Do you want to change The Product Type    :  ?? \2");
    printf("\n \t \t \t \t \t \t \2 *3.  Do you want to change The Product Name    :  ?? \2");
    printf("\n \t \t \t \t \t \t \2 *4.  Do you want to change The Producer Name   :  ?? \2");
    printf("\n \t \t \t \t \t \t \2 *5.  Do you want to change The Price of Product:  ?? \2");
    ;

    printf("\n\t \t \t \t \t \t \2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2");



    printf("\n\t \t \t \t \t \t \2 *.................Enter Your Choice.............*\2\n\t \t \t \t \t \t \t \t \t");
    scanf("%d", &ch);
     printf("\n\t \t \t \t \t \t \2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2");

    switch (ch)
    {
    case 1:
       printf("\n\t \t \t \t \t \t \2 * Enter The Product Code:");
       scanf("%d", &stud.no);
       break;
    case 2:
       printf("\n\t \t \t \t \t \t Enter The Product Type: ");
       scanf("%s", &stud.Bookname);
       break;
    case 3:
       printf("\n\t \t \t \t \t \t Enter The Product Name: ");
       scanf("%s", &stud.Authorname);
       break;
    case 4:
       printf("\n\t \t \t \t \t \t Enter The Producer name : ");
       scanf("%s", &stud.publication);
       break;
    case 5:
       printf("\n\t \t \t \t \t \t Enter The Price : ");
       scanf("%f", &stud.price);
       break;

     default:
       printf("\n\t \t \t \t \t \t Invalid Selection");
       break;
    }
    fwrite(&stud, sizeof(stud), 1, fpt);
   }
  }
  fclose(fpo);
  fclose(fpt);
  fpo = fopen("SRecord", "w");
  fpt = fopen("TempFile", "r");
  while (fread(&stud, sizeof(stud), 1, fpt))
  {
   fwrite(&stud, sizeof(stud), 1, fpo);
  }
  fclose(fpo);
  fclose(fpt);
  printf(" \t \t \t \t \t \t  ");
   for (i=1;i<=50; i++)
{
   for(j=0;j<=10000000;j++)
   {
   }
       printf("%c",62);

}

  printf("\n\t \t \t \t \t \t \t \t \2RECORD HAS BEEN UPDATED!\2");
  printf("\n\n");
  printf("\n \t \t \t \t \t \t \2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2");
  printf("\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2");
 printf("\n \t \t \t \t \t \t \2 *Do you want to Update another (Yes or No)?  *\2 \n\t \t \t \t \t \t");
  printf(" \2..............* 1-Yes, -2-No *.................\2\n \t \t \t \t \t \t \t \t");
    scanf("%s",&another);
    if (another == 'y')
    {
        Supdate();
    }
     }
    if (another == 'n') {
    shopping();
    }

 }
}

//##################//
//END Update//



//##################//
//Start Deleting//


void Sdeletefile()
{

 system("cls");
 system("color 8e");

  int i,j;

printf("  \n \n \n \n \n \n \t \t \t \t \t \t \2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\n");
printf("\t \t \t \t \t \t \2\2\2                                              \2\2\2\n");
printf("\t \t \t \t \t \t \2\2\2..............WELCOME TO DELETING.............\2\2\2  \n");
printf("\t \t \t \t \t \t \2\2\2..............................................\2\2\2\n \t \t \t \t \t \t \2\2\2  ");


for (i=1;i<=43; i++)
{
   for(j=0;j<=10000000;j++)
   {
   }
       printf("%c",62);

}
printf(" \2\2\2  \n \t \t \t \t \t \t \2\2\2                                              \2\2\2  \n");
printf("   \t \t \t \t \t \t \2\2\2                                              \2\2\2 \n");
printf("  \t \t \t \t \t \t \2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\n");
printf("\n");


 FILE *fpo;
 FILE *fpt;
 int r, s;
 char another=1;
 while(another == 1){

 printf("\t \t \t \t \t \t Enter The Product Code What You Want To Delete :");
 scanf("%d", &r);
 if (avlrollno(r) == 0)
  printf("\t \t \t \t \t \t Product Code : %d is not available in the file\n", r);
 else
 {
  fpo = fopen("SRecord", "r");
  fpt = fopen("TempFile", "w");
  while (fread(&stud, sizeof(stud), 1, fpo))
  {
   s = stud.no;
   if (s != r)
    fwrite(&stud, sizeof(stud), 1, fpt);
  }
  fclose(fpo);
  fclose(fpt);
  fpo = fopen("SRecord", "w");
  fpt = fopen("TempFile", "r");
  while (fread(&stud, sizeof(stud), 1, fpt))
   fwrite(&stud, sizeof(stud), 1, fpo);
   printf(" \t \t \t \t \t \t  ");
     for (i=1;i<=50; i++)
{

   for(j=0;j<=10000000;j++)
   {
   }
       printf("%c",62);

}
  printf("\n \t \t \t \t \t \t \t \t \2RECORD HAS BEN DELETED!\2\n");
  printf("\n\n");

  another=0;

  fclose(fpo);
  fclose(fpt);


    }
  printf("\n \t \t \t \t \t \t \2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2");
  printf("\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2\2");
  printf("\n \t \t \t \t \t \t \2 *Do you want to delete another (Yes or No)?  *\2 \n\t \t \t \t \t \t");
  printf(" \2..............* 1-Yes, -2-No *.................\2\n \t \t \t \t \t \t \t \t");
    scanf("%s",&another);
    if (another == 'y')
    {
        Sdeletefile();
    }
     }
    if (another == 'n') {
   shopping();
    }
}

getch();
//##################//
// end Deleting


//##################//
//avlrollno//

int Savlrollno(int sno)
{
 FILE *fp;
 int c = 0;
 fp = fopen("SRecord", "r");
 while (!feof(fp))
 {
  fread(&stud, sizeof(stud), 1, fp);

  if (sno == stud.no)
  {
   fclose(fp);
   return 1;
  }
 }
 fclose(fp);
 return 0;
}
//##################//
//End avlrollno/

//##################//
//empty//
int sempty()
{
 int c = 0;
 FILE *fp;
 fp = fopen("SRecord", "r");
 while (fread(&stud, sizeof(stud), 1, fp))
  c = 1;
 fclose(fp);
 return c;
}

//##################//
//End Empty//

//End Shopping Mall//



//* Start About Us//
//##################//


void About_us () {
  system("cls");
 int i,j;
  printf(" \t \t \t \t \t \t \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n");

  printf("\t \t \t \t \t \t \xB2\xB2\xB2  ......THANKS FOR YOUR TIME TO VISIT US!!......  \xB2\xB2\xB2  \n");
  printf("\t \t \t \t \t \t \xB2\xB2\xB2  ............ABOUT US IS Loading...............  \xB2\xB2\xB2\n \t \t \t \t \t \t \xB2\xB2\xB2  ");


  for (i=1;i<=46; i++)
  {
      for(j=0;j<=10000000;j++)
      {
      }
          printf("%c",177);

  }
  printf("  \xB2\xB2\xB2\n");
  printf(" \t \t \t \t \t \t \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n");

printf(" \n \n   \t \t  \t \t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
printf("\n \t \t \t \t\xB2\xB2 \t \t \t \t  Inventory Management System                                         \xB2\xB2  \n");
printf("\t \t  \t \t\xB2\xB2                          It is designed by the group 'MURCURY'                                     \xB2\xB2   \n \t \t  \t \t\xB2\xB2");
printf("                       By Using This System we can develop our digitalization.                      \xB2\xB2\n \t \t  \t \t\xB2\xB2");
printf("                                           GROUP MEMBERS                                            \xB2\xB2 \n  \t \t  \t \t\xB2\xB2");
printf("       Shahrukh Ahamad  , Muiduzzaman Mahim  , Hasnat Abdullah , Md Shahabuddin , Kanak Chandra     \xB2\xB2 \n\t \t  \t \t\xB2\xB2");
printf("                           For better improvement have any query ???                                \xB2\xB2\n\t \t  \t \t\xB2\xB2  ");
printf(" \t \t \t \t \t \t      \t \t \t \t \t \t      \xB2\xB2\n \t \t  \t \t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");

 printf("\n \n \t \t \t \t \t \t \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
  printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
 printf("\n \t \t \t \t \t \t \xB2 *Do you want to go back main bar (Yes or No)?  *\xB2 \n\t \t \t \t \t \t");
  printf(" \xB2...............*  -y,    -n  *..................\xB2\n \t \t \t \t \t \t \t \t");
  char another;

    scanf("%s",&another);
    if (another == 'y')
    {
        mainbar();
    }

    if (another == 'n') {
    exit2();
    }

getch();

}
//##################//
//End About_us//



//##################//
// Start Contacts_us//
void Contacts_us() {
  system("cls");
  system("color 0a");
  int i,j;
  printf(" \n  \t \t \t \t \t \t \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n");

  printf("\t \t \t \t \t \t \xB2\xB2\xB2  ************Contacts US***********  \xB2\xB2\xB2  \n");
  printf("\t \t \t \t \t \t \xB2\xB2\xB2  ..................................  \xB2\xB2\xB2\n \t \t \t \t \t \t \xB2\xB2\xB2  ");


  for (i=1;i<=34; i++)
  {
      for(j=0;j<=10000000;j++)
      {
      }
          printf("%c",177);

  }

printf("  \xB2\xB2\xB2  \n \t \t \t \t \t \t \xB2\xB2\xB2                                      \xB2\xB2\xB2  \n");
printf("   \t \t \t \t \t \t \xB2\xB2\xB2                                      \xB2\xB2\xB2 \n");
printf(" \t \t \t \t \t \t \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n");
printf("\n \n \n");
printf("\t \t \t \t \t \t \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n ");
printf("\t \t \t \t \t \t \xB2\xB2 ...................................... \xB2\xB2\n");
printf("\t \t \t \t \t \t \xB2\xB2 .......NAME: Muiduzzaman Mahim........ \xB2\xB2\n");
printf("\t \t \t \t \t \t \xB2\xB2 .......Student ID: 173-15-1680........ \xB2\xB2\n");
printf("\t \t \t \t \t \t \xB2\xB2 .......Phone: +8801763955888  ........ \xB2\xB2\n");
printf("\t \t \t \t \t \t \xB2\xB2 .......EMAIL: 2012mahim@gmail.com..... \xB2\xB2\n");
printf("\t \t \t \t \t \t \xB2\xB2 .......Website:www.facebook.com/MMZM96.\xB2\xB2\n");
printf("\t \t \t \t \t \t \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n ");
printf("\n \n \n");

 printf("\n \n \t \t \t \t \t \t \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
  printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
 printf("\n \t \t \t \t \t \t \xB2 *Do you want to go back main bar (Yes or No)?  *\xB2 \n\t \t \t \t \t \t");
  printf(" \xB2...............*  -y  ,   -n  *..................\xB2\n \t \t \t \t \t \t \t \t");
  char another;

    scanf("%s",&another);
    if (another == 'y')
    {
        mainbar();
    }

    if (another == 'n') {
    exit2();
    }


getch();

}
//##################//
//End Contact US//




//##################//
//Star Help//


void help() {

system("cls");
system("color 9f");

 int i,j;
 printf("\t \t \t \t \t \t \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n ");

 printf("\t \t \t \t \t \t \xB2\xB2\xB2  ************     You need help!!  *********  \xB2\xB2\xB2  \n");
 printf("\t \t \t \t \t \t \xB2\xB2\xB2      ..................................       \xB2\xB2\xB2\n \t \t \t \t \t \t \xB2\xB2\xB2  ");


 for (i=1;i<=43; i++)
 {
     for(j=0;j<=10000000;j++)
     {
     }
         printf("%c",177);

 }

printf("  \xB2\xB2\xB2  \n \t \t \t \t \t \t \xB2\xB2\xB2                                               \xB2\xB2\xB2  \n");
printf("   \t \t \t \t \t \t \xB2\xB2\xB2                                               \xB2\xB2\xB2 \n");
printf("\t \t \t \t \t \t \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n ");
printf("\n \n \n");
printf("\t \t \t \t \t \t \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n ");
printf("\t \t \t \t \t \t \xB2\xB2 ..............................................  \xB2\xB2\n");
printf("\t \t \t \t \t \t \xB2\xB2                                                 \xB2\xB2\n");
printf("\t \t \t \t \t \t \xB2\xB2 ..       IF YOU WANT TO ASK US QUESTION ......  \xB2\xB2\n");
printf("\t \t \t \t \t \t \xB2\xB2                                                 \xB2\xB2\n");
printf("\t \t \t \t \t \t \xB2\xB2 ......    Email: 2012mahim@gmail.com    ......  \xB2\xB2\n");
printf("\t \t \t \t \t \t \xB2\xB2                                                 \xB2\xB2\n");
printf("\t \t \t \t \t \t \xB2\xB2 ..............................................  \xB2\xB2\n");
printf("\t \t \t \t \t \t \xB2\xB2 ..     MAKING APPOINMENTt IN ONLINE    .......  \xB2\xB2\n");
printf("\t \t \t \t \t \t \xB2\xB2 ......    Email: 2012mahim@gmail.com   .......  \xB2\xB2\n");
printf("\t \t \t \t \t \t \xB2\xB2                                                 \xB2\xB2\n");
printf("\t \t \t \t \t \t \xB2\xB2 ..............................................  \xB2\xB2\n");
printf("\t \t \t \t \t \t \xB2\xB2 ..                 CALL US             .......  \xB2\xB2\n");
printf("\t \t \t \t \t \t \xB2\xB2 ..Mobile: +8801763955888/01701034263   .......  \xB2\xB2\n");
printf("\t \t \t \t \t \t \xB2\xB2                                                 \xB2\xB2\n");
printf("\t \t \t \t \t \t \xB2\xB2 ..............................................  \xB2\xB2\n");
printf("\t \t \t \t \t \t \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n ");

printf("\n ");
printf("\t \t \t \t \t \t \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n ");

 printf("\n \n \t \t \t \t \t \t \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
  printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
 printf("\n \t \t \t \t \t \t \xB2 *Do you want to go back main bar (Yes or No)?  *\xB2 \n\t \t \t \t \t \t");
  printf(" \xB2...............*  -Yes,   -No *..................\xB2\n \t \t \t \t \t \t \t \t");
  char another;
  scanf("%s",&another);
    if (another == 'y')
    {
        mainbar();
    }

    if (another == 'n') {
    exit2();
    }

getch();

}
//##################//
//End Help//



//##################//
// Start Exit//


void exit2() {
     system("color cf");
  int i,j;
  printf(" \n \n \n \t \t \t \t \t \t \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n");

  printf("\t \t \t \t \t \t \xB2\xB2\xB2  THANKS FOR YOUR TIME TO VISIT US!!  \xB2\xB2\xB2  \n");
  printf("\t \t \t \t \t \t \xB2\xB2\xB2  ..........Exit Is Loading.........  \xB2\xB2\xB2\n \t \t \t \t \t \t \xB2\xB2\xB2  ");


  for (i=1;i<=34; i++)
  {
      for(j=0;j<=10000000;j++)
      {
      }
          printf("%c",177);

  }

  printf("  \xB2\xB2\xB2  \n \t \t \t \t \t \t \xB2\xB2\xB2                                      \xB2\xB2\xB2  \n");
  printf("   \t \t \t \t \t \t \xB2\xB2\xB2                                      \xB2\xB2\xB2 \n");
  printf(" \t \t \t \t \t \t \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n");
printf("\n");

exit(0);


   }


//##################//
//End exit//
