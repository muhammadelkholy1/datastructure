#include<iostream>
#include<fstream>                                    // Muhammad sheriff Elkholy
#include<string>          
using namespace std;

struct node{
	int data;
	node* next;
	node (int d, node* n){
	data=d;
	next=n;
}
};

class linked_list{
   private:
   	int size;
   	node* head;
   	node* tail;
   public:
   	linked_list(){
	   
      size=0;
      head=tail=NULL;
}
       void insert_first(int data){
       	 if(head==NULL){
                                             node* temp= new node(data , NULL);
	       	head=temp;
	       	tail=temp;
	       	size++;
	       }
	       else{
	       	 node* temp= new node(data , head);
	       	head=temp;
	       	size++;
	       }
       } 
       
       void print(){
       	if(head == NULL){
       		cout<<"list is emtpy \n";
	       }
	       else{
	       	node*  p= head;
	       	while (p!=NULL){
	       	 	
	       		cout<<p->data <<endl; 
	       		p=p->next ;
		       }
		       cout<<"size = "<<size<<endl;
	       }
       }
       void insert_end(int data){
       	if(head==NULL){
                                             node* temp= new node(data , NULL);
	       	head=temp;
	       	tail=temp;
	       	size++;
	       	
	       }
	       else{
	       	 node* temp= new node(data , NULL);
	       	tail->next=temp;
	       	tail=temp; 
	       	size++;
	       }
       }	
};

int main(){
	linked_list x;
		x.insert_end(92);

	x.insert_first(6);
	x.insert_first(5);
	x.insert_first(4);
	x.insert_first(3);
	x.insert_first(2);
	x.insert_first(1);
	x.insert_end(90);
	x.print();
	
}










