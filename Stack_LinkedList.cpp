#include <iostream>
using namespace std;

class node
{
	private:
    int data;
    node* next;
    node* head;
    node* ptr;
    
    public:
    void Push(int value)
    {
        node *temp = new node();
        temp->data=value;
        temp->next=NULL;

        if(head==NULL)
        {
            head=temp;
        }

        else
        {
        	node*ptr=head;
            head=temp;
            head->next=ptr;
        }
    }

    void Pop()
    {
    	node*temp=head;
        head=head->next;
        delete temp;
    }

    bool Empty()
    {
        if(head==NULL)
        return true;

        else
        return false;
    }

    int show()
    {
    	if(head!=NULL)
    	{
    		ptr=head;
            while(ptr->next!=NULL)
            {
                cout<<"\t"<<ptr->data;
                ptr=ptr->next;
            }
            cout<<"\t"<<ptr->data;
		}
        
        else return 0; 
    }
};

int main()
{
	cout<<"\t\t\tStack";
    node n;
    int value,opt;

    do
    {
        cout<<"\n\n------------------------------------------------\n\nWould you like to\n1.Push\n2.Pop\n3.Exit\nEnter the number : ";
        cin>>opt;

        if(opt==1)
        {
            cout<<"\n\nEnter a value : ";
            cin>>value;
            n.Push(value);
            cout<<endl<<endl;
            n.show();
        }

        else if(opt==2)
        {
            cout<<endl<<endl;
            
            if(n.Empty())
            {
            	cout<<"STACK IS EMPTY";
            }

            else
            n.Pop();
            
            
            n.show();
        }
    } while (opt == 1 || opt==2);
}
