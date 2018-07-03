#include<stdio.h>
struct student
{
    int roll;
    int id;
    char name[200];
    char sec[200];
    char email[200];
    char address[200];
} s[200];


int main()
{
    FILE *fp;
    fp=fopen("studentdatabase.txt","a");
    int i,id,choice,n,roll;
    char name[200];
    char sec[200];
    char email[200];
    while(choice!=0)
    {
        printf("\n.........MENU..........\n");
        printf("Press 1 to Add records\n");
        printf("Press 2 to display records\n");
        printf("Press 3 to Search a records\n");
        printf("Press 0 to Exit\n");
        printf("\nEnter choice(0-3) : ");
        scanf("%d",&choice);

          switch (choice)
        {
            case 1:
   			 printf("enter the number of student information: ");
  			  scanf("%d",&n);
   			 printf("\nenter student information");
   				 for(i=1; i<=n; i++) //storing information
    			{
      			  printf("\nEnter roll: ");
       			 scanf("%d",&s[i].roll);
       			 fprintf(fp,"%d\n",s[i].roll);
     			 printf("enter id: ");
      			 scanf("%d",&s[i].id);
      			 fprintf(fp,"%d\n",s[i].id);
        		printf("Enter name: ");
      			 scanf("%s",&s[i].name);
       			 fprintf(fp,"%s\n",s[i].name);
      			  printf("enter section : ");
       			 scanf("%s",&s[i].sec);
      			  fprintf(fp,"%s\n",s[i].sec);
       		   	 printf("enter email: ")	;
      			  scanf("%s",&s[i].email);
      			  fprintf(fp,"%s\n\n",s[i].email);
				}
                break;

			 case 2:
                printf("\nDisplaying All records\n");
                 fp=fopen("studentdatabase.txt","r");
                while((fscanf(fp,"%d %d %s %s %s ",&roll,&id,&name,&sec,&email)!=EOF))
                {
                    printf("\nROLL=%d\n",roll);
                    printf("ID=%d\n",id);
                    printf("NAME=%s\n",name);
                    printf("SECTION=%s\n",sec);
                    printf("EMAIL=%s\n",email);
                }
                break;
                fclose(fp);
            case 3:
  	printf("enter id to search: ");
     int roll;
    int id;
    int new_id;
    char name[200];
    char sec[200];
    char email[200];
    char address[200];
    scanf("%d",&id);
    fp=fopen("studentdatabase.txt","r");
    while(fscanf(fp,"%d",&roll)!=EOF)
    {

        fscanf(fp,"%d",&new_id);
        fscanf(fp,"%s",&name);
        fscanf(fp,"%s",&sec);
        fscanf(fp,"%s",&email);

        if(id==new_id)
        {

            printf("Roll=%d\n",roll);
            printf("Id=%d\n",id);
            printf("Name=%s\n",name);
            printf("Section=%s\n",sec);
            printf("Email=%s\n",email);
             break;
        }
}
fclose(fp);
}
}
fclose(fp);

    return 0;
}
