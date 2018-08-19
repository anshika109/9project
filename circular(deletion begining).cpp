 #include<iostream>
using namespace std;
struct node{
	int data;
	node *next;
};
int main(){
	node *head,*tail;
	int n,data1,data2,pos;
	head=NULL;
	tail=NULL;
	cout<<"enter the no of nodes"<<endl;
	cin>>n;
	for(int i=0;i<n;i++){
		cout<<"enter the data to store in "<<i<<"nodes"<<endl;
		cin>>data1;
		node *temp=new node;
		temp->data=data1;
		temp->next=head;
	if(head==NULL){
	    head=temp;
		tail=temp;
	}
	else{
		tail->next=temp;
		tail=tail->next;
	}
    }
	node *temp1;
	temp1=head;
	head=temp1->next;
	tail->next=head;
	delete temp1;
    node *ptr;
    ptr=head;
    while(ptr->next!=head){
    	cout<<ptr->data;
    	cout<<" "<<ptr->next<<endl;
    	ptr=ptr->next;
    	}
    	cout<<ptr->data<<" "<<ptr->next<<endl;
	 return 0;
}
