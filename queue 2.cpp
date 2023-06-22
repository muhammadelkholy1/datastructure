#include <iostream>
using namespace std;

#define SIZE 5
 int queue [SIZE];
 int front=-1 , rear=-1;
  void  enqueue(int value);
  void  dequeue();
  int peek(); 
  void display();
  
  
  
  
  int main(){
  	enqueue(10);
  	enqueue(20);
  	enqueue(30);
  	enqueue(40);
  	enqueue(50);
  	enqueue(60);
  	enqueue(60);
  	enqueue(60);
  	display(); // 10 20 30 40 50
  	cout<<"took this "<<peek()<<endl;
  	dequeue();
  	display(); // 20 30 40 50
  	cout<<"took this "<<peek()<<endl;
  	dequeue();
  	display(); //30 40 50

  return 0;	
  }
   void  enqueue(int value){
   	if(rear!=SIZE-1){
   	                  if (front==-1 && rear ==-1){
   	                  	  front++;
   	                  	  queue[++rear]=value;
		 }	
		 else{
		 	queue[++rear]=value;
		 }
	   }
	   else{
	   	cout<<"queue is full"<<endl;
	   }
   }
   void dequeue(){
   	if(rear!=-1 && front !=-1 && front<=rear){
   		front++;
	   }
	   else {
	   	cout<<"queue is empty"<<endl;
	   }
   }
   int peek(){
   	if(rear!=-1 && front !=-1 && front<=rear){
   		return queue[front];
	   }
	   else {
                                         cout<<"queue is empty"<<endl;
	   }
   }
   void display(){
   	if(rear!=-1 && front !=-1 && front<=rear){
   		for(int i=front ; i<=rear ; i++){
   			cout<<queue[i]<<"  ";
		   }
		   cout<<endl;
   }
   else{ 
                                            cout<<"queue is empty"<<endl;
   }
}
   
   
   
   
   
   
   
