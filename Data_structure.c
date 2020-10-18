#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>

    struct Node{
        int number;
        char fname[100];
        char lname[100];
        char gname[100];
        char aname[100];

        struct Node *next;
        };
    typedef struct Node node;

    void insert(node *list, char fname[100],char lname[100],char gname[100] , char aname[100] ,int number)
    {
         node *temp;
         temp= (node*) malloc(sizeof(node));
         temp->number = number;

         strcpy(temp->fname, fname);
         strcpy(temp->lname, lname);
         strcpy(temp->gname, gname);
         strcpy(temp->aname, aname);
         temp->next =NULL;
        while(list->next != NULL)
        {
            list = list->next;
        }
            list->next = temp;

    }

    void delet(node* list, int number)
    {
        node *temp;
        temp=(node*) malloc(sizeof(node));
        while(list->next->number != number)

        list = list->next;
        temp = list->next;
        list->next=temp->next;

        free(temp);
        printf("\n\t\t\t\t\t\t %d Deleted!", number);

    }
//   void search1 (node* list, int number)
//      {
//        while(list->next != NULL)
//        {
//            if(list->next->number == number)
//            {
//                printf("\n\t\t\t\t\t\t %d Found\n",number);
//                printf("\n\t\t\t\t\t\t First Name:%s\n\t\t\t\t\t\t Last Name:%s\n\t\t\t\t\t\t gmail:%s \n\t\t\t\t\t\t address:%s \n\t\t\t\t\t\t Number:%d\n\n",list->next->fname, list->next->lname, list->next->gname, list->next->aname, number);
//                return;
//            }
//            list=list->next;
//        }
//        printf("\n\t\t\t\t\t\t %d Not Found!\n\n", number);
//      }

    void search (node* list, char name1[100])
    {
        while(list->next != NULL)
        {
            if(strcmp(list->next->fname,name1)==0)
            {
                printf("\n\t\t\t\t\t\t %s Found\n",name1);
                printf("\n\t\t\t\t\t\t First Name:%s\n\t\t\t\t\t\t Last Name:%s\n\t\t\t\t\t\t gmail:%s \n\t\t\t\t\t\t Address:%s \n\t\t\t\t\t\t Number:%d\n\n",list->next->fname, list->next->lname,list->next->gname,list->next->aname,list->next->number);
                return;
            }
            list=list->next;
        }
        printf("\n\t\t\t\t\t\t %s Not Found!\n\n", name1);
    }
    void display(node *list)
    {
        while(list->next != NULL )
        {
     printf("\n\t\t\t\t\t\t First Name:%s\n\t\t\t\t\t\t Last Name:%s\n\t\t\t\t\t\t gmail:%s\n\t\t\t\t\t\t address:%s\n\t\t\t\t\t\t Number: 0%d\n", list->next->fname,list->next->lname,list->next->gname,list->next->aname,list->next->number);
      list = list->next;
        }

    }

    void update(node *list,int n1,int n2)
{

    while(list->number!=n1)
    {
        list=list->next;
    }
    list->number=n2;
}


int main(void)
{

    node *list;
    list =(node*)malloc(sizeof(node));
    list->next = NULL;

    printf("\t\t\t\t\t ***Welcome To\tContact List***\t\t\n");
    printf("\t\t\t\t\t=================================\n");
    k:printf("\t\t\t\t\t\t<1> Add New Contact\n\t\t\t\t\t\t<2> Delete Contact\n\t\t\t\t\t\t<3> Edit Contact\n\t\t\t\t\t\t<4> Search Contact\n\t\t\t\t\t\t<5> List Contacts\n");

    int n;
    char ch;
    int n1, n2;

    char fname[100];
    char lname[100];
    char gname[100];
    char aname[100];

    int number;
    int numbe;
    int numb;
    int x;
    char name[100];

    printf("\n\t\t\t\t\t\t     Choose: ");
    scanf("%d", &n);

    if(n==1)
    {
        printf("\n\t\t\t\t\t\t First Name: ");
        scanf("%s", &fname);

        printf("\n\t\t\t\t\t\t Last Name: ");
        scanf(" %s",&lname);

        printf("\n\t\t\t\t\t\t Gmail: ");
        scanf(" %s",  &gname);

        printf("\n\t\t\t\t\t\t Address: ");
        scanf(" %s", &aname);

        printf("\n\t\t\t\t\t\t Number: ");
        scanf(" %d",&number);


     insert(list,fname,lname,gname,aname, number);
    }
   else if(n==2)
    {

        printf("\n\t\t\t\t\t\t Enter a  No to Delete: ");
        scanf("%d", &numbe);
        delet(list, numbe);
    }
   else if(n==3)
    {
        printf("\n\t\t\t\t\t\t Old Number: ");
        scanf("%d",&n1);

        printf("\n\t\t\t\t\t\t New Number: ");
        scanf("%d",&n2);

        update(list,n1,n2);
        display(list);
    }
    else if(n==4)
    {
////        printf("\n\t\t\t\t\t\t Search with Name press 1");
////        printf("\n\t\t\t\t\t\t Search with Number press 2");
////        int n;
////        printf("\n\t\t\t\t\t\t pres : ");
////        scanf("%d",n);
////        switch(n)
////        {
////    case 1:
////        {
////            printf("\n\t\t\t\t\t\t Search Number: ");
////            scanf("%d",&numb);
////            search1(list,numb);
////        }
////    case 2:
////        {
            printf("\n\t\t\t\t\t\t Search Name: ");
            scanf("%s", &name);
            search(list,name);
//        }
//       }
    }

   else if(n==5)
    {
        display(list);
    }
    printf("\n\t\t\t\t\t\t to continue press Y or press N");
    printf("\n\t\t\t\t\t\t Y for Yes & N for No\n\n\n");
    ch = getch();
    system("cls");

    if(ch=='Y' ||ch=='y')
    {
        goto k;
    }

    else
    {
        printf("\nThank You!\n");
    }


    return 0;
}
