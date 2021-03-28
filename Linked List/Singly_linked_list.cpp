#include <iostream>
using namespace std;

void crea_node();
void prin_node();

struct node
{
    int data;
    struct node *next;
}*head;


void crea_node()
{
    char choice; int data1;
    struct node *temp;
    do
    {
        struct node *newnode=(struct node*)malloc(sizeof(struct node *));
        std::cout << "Enter the data" << std::endl; std::cin >> data1;
        newnode->data=data1;
        newnode->next=NULL;
        if(head==NULL)
        {
          head=newnode;
          temp=newnode;
          //std::cout << "Overflow" << std::endl;
        }
        else
        {
            temp->next=newnode;
            temp=newnode;
        }
     std::cout << "Do you want to add the list (y/Y)"  << std::endl;
     std::cin >> choice;
    }while(choice=='y' || choice=='Y');
}

void prin_node()
{
    struct node *temp;
    temp=head;
    if(temp==NULL)
    {
        std::cout << "Node is empty" << std::endl;
    }
    else
    {
        std::cout << "The nodes are given below :" << std::endl;
        while(temp!=NULL)
        {
            std::cout << temp->data << std::endl;
            temp=temp->next;
        }
    }
}

int main()
{
    crea_node(); // 5  6
    prin_node(); // 5 6
}
