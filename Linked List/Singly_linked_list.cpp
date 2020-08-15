#include<iostream>
using namespace std;

struct node
{
    int n1;
    struct node *next;
};
struct node *head=NULL;

void insert_node(int n2);
void display();

void insert_node(int n2)
{
    struct node *new_node;
    struct node *temp;
    int num;
    head = (struct node *)malloc(sizeof(struct node));
    if(head == NULL)
    {
        cout<<" Memory can not be allocated";
    }
    else
    {

        cout<<"\nEnter the data for node 1: ";
        cin>>num;
        head-> n1 = num;
        head-> next = NULL;
        temp = head;

    for(int i=2; i<=n2; i++)
        {
    new_node= (struct node*)malloc(sizeof(struct node));
    if(new_node==NULL)
    {
        cout<<" Memory can not be allocated";
                break;
    }
    else
    {
        cout<<"Enter the data for node "<<i<<": ";
        cin>>num;
        new_node->n1=num;
        new_node->next=NULL;
        temp->next=new_node;
        temp=new_node;
    }
    }
}
}

void display(){
    struct node *temp;
    int count=0;
    if(head == NULL)
    {
        cout<<" No data found in the list";
    }
    else
    {
        temp= head;
        cout<<"Linked List: ";
        while(temp!=0)
            {
                count++;
                cout<<temp->n1<<" ";
                temp=temp->next;
                }
}
cout<<"\n Total Number of nodes in a list:"<<count<<endl;
}

int main()
{
    int n,i;
    cout<<"Enter the number of nodes: ";
    cin>>n;
    insert_node(n);
    cout<<"\nLinked list data: \n";
    display();
    return 0;
}
