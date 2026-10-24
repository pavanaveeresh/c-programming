#include<stdio.h>
#include<stdlib.h>
struct list
{
    int data;
    struct list*link;
};
typedef struct list* NODE;
NODE frist=NULL;
void insert_front()
{
    int elem;
    NODE temp;
    temp=(NODE)malloc(sizeof(struct list));
    if(temp==NULL)
    {
        printf("Insufficient memory");
        return;
    }
    else
    {
        printf("enter data");
        scanf("%d",&elem);
        temp->data=elem;
        temp->link=frist;
        frist=temp;
    }
}
void delete_front()
{
    NODE temp;
    if(frist==NULL)
    {
        printf("linked list is empty");
        return;
    }
    else{
        temp=frist;
        frist=frist->link;
        printf("deleted information is=%d\n",temp->data);
        free(temp);
    }

}
void disply()
{
    NODE temp;
    if(frist==NULL)
    {
        printf("list is empty\n");
        return;
    }
    else{
        temp=frist;
        printf("linked list :");
    }
    while(temp !=NULL)
    {
        printf("%d ->",temp->data);
        temp = temp->link;
    }
    printf("NULL\n");

}
int main()
{
    int choice;
    while(1)
    {
        printf("\n linked list menu\n");
        printf("1.insert at front\n");
        printf("2. delete at front \n");
        printf("3. display\n");
        printf("4.exist\n");
        printf("enter your choice");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1: insert_front();
            break;
            case 2: delete_front();
            break;
            case 3:disply();
            break;
            case 4:
            printf("existing program\n");
            while(frist !=NULL)
            {
                delete_front();
            }
            return 0;

         default:
            printf("Invalid choice\n");
        }
    }
    return 0;
}

