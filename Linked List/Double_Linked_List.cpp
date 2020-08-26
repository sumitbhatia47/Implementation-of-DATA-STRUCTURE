#include<iostream>
using namespace std;
struct node
{
    int n1;
    struct node *next;//pointer variable next which is used to link the next node........
    struct node *prev;//pointer variable previous which is used to link the previous node........

};
struct node *head=NULL; // head is pointer variable which is stored to the starting address of the node.... /starting head is zero

void create_node();
void display();

void create_node()
{
    int num,choice=1;
    struct node *temp; // temp  is also pointer variable which store the address of new next node or it store the pointer variable of struct node.....
    do
    {
    // malloc () is just return a pointer to starting address of that memory block....
    struct node *newnode=(struct node*)malloc(sizeof(struct node)); //new node  is pointer variable which store the address of new next node or it store the pointer variable of struct node.....
    cout<<"Enter data :";
    cin>>num;
    newnode->n1=num;   // num is assigned  to the newnode......
    newnode->prev=NULL; // it points to the previous node in the memory block and return null
    newnode->next=NULL; // it points to the next node in the memory block and return null
    if(head==NULL)
    {
        head=temp=newnode;   // the value of newnode is assigned to the head node and temp node...
    }
    else
    {
        temp->next=newnode; // it points to the next node in the memory block.....
        newnode->prev=temp; //it points to the previous node in the memory block.....
        temp=newnode;      // the value of new node is assigned to the temp node.....
    }
    cout<<"Do you want to continue :";
    cin>>choice;
}while(choice==1);
}

void display()
{
    struct node *temp;
    temp=head; 
    while(temp!=NULL)
    {
        cout<<temp->n1<<" "; 
        temp=temp->next;  

    }
}

int main()
{
    cout<<"\nCreating the nodes: \n";
    create_node();
    cout<<"\nLinked list data: \n";
    display();
    return 0;
}
