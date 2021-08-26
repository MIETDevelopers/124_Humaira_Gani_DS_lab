#include<stdio.h> 
#include<string.h> // ( Different String funtion sstrcmp() compares the two strings 
#include<stdlib.h> // Used for exit 
struct Shop
{
     int bno,bcost;
     char bname[20],bauthor[20];
}p[10];
int main()
{
     int n,i,ch;
     char Akrotname[20],Shop_name[20];
     printf("\nHow Many RecordsTo enter :" );
     scanf("%d",&n);
     printf("------------------------------------------\n");
     for(i=0;i<n;i++)
     {
          printf("\tEnter Shops-%d",i+1);
          printf("\n------------------------------------------\n");
          printf("Shop Number      : ");
          scanf("%d",&p[i].bno);
    	  printf("\nShop Name     : ");
          scanf("%s",p[i].bauthor);
          printf("\nCost/Kg:  ");
          scanf("%d",&p[i].bcost);
     }
     while(1)
     {
          printf("\n\t\tMENU\n");
          printf("------------------------------------------\n");
          printf("\n1.All Walnuts Costing Rs. 900");
          printf("\n2.All Shops Details");
          printf("\n3.Exit");
          printf("\nEnter Your Choice : ");
          scanf("%d",&ch);
          printf("\n");
          switch(ch)
          {
            
              
               case 1:
                    for(i=0;i<n;i++)
                    {
                         if(p[i].bcost=900)
                         {
                              printf("Shop Number : %d\n",p[i].bno);
                              printf("Shop Name : %s \n",p[i].bname);
                              printf("Cost : %d\n",p[i].bcost);
                              printf("\n------------------------------------------\n");
                         }
                    }
                    break;
               case 2:
                    for(i=0;i<n;i++)
                    {
                         printf("Shop Number   : %d\n",p[i].bno);
                         printf("Shop Name : %s\n",p[i].bauthor);
                         printf("Cost : %d\n",p[i].bcost);
                         printf("\n------------------------------------------\n");
                    }
                    break;
               case 3:
                    exit(0);
          }
     }
     return 0;
}
