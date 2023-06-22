#include<iostream>
#include<string>
using namespace std;
 
 #define size 5
 int queue[size], front=-1, rear=-1;
 bool isEmpty(){
 	if(rear ==-1 && front ==-1){
 		return true;
	 }
	 else{
	 	return false;
	 }
 }
 bool isFull(){
 
 	if(front ==0 && rear==size-1 || front==rear+1){
 		return true;
	 }
	 else{
	 	return false;
	 }
 } 
//-------------------------------------------------------------------------------------------------------------------------------------------------- 
 void enqueue(int value){
          if(isFull()){
       cout<<"queue is over flow "<<endl;	
 }
 else{
        if(rear == -1 && front ==-1){
	rear=front=0;
	queue[rear]=value;
 }
 else if (rear ==size-1 ){
 	rear=0;
	queue[rear]=value;
 }
 else{
	rear++;
 	queue[rear]=value;
       }	
    }
 }
//-------------------------------------------------------------------------------------------------------------------------------------------------- 

 void dequeue(){
 if(isEmpty()){
	cout<<"queue is empty "<<endl;
 }
 else {
 
               if(front ==rear) {
               	front = rear = -1;
               }
               
               else if (front == size-1){
               	front = 0;
               }
               	else {
	               
               	front ++;
               }
}
 }
 
//-------------------------------------------------------------------------------------------------------------------------------------------------- 
int peek(){
if(isEmpty()){
	cout<<"queue is empty "<<endl;
	return -1;
 }
 else {
 	
 	return queue[front];
}
}
//-------------------------------------------------------------------------------------------------------------------------------------------------- 
void display(){
     if(isEmpty()){
     	cout<<"queue is empty"<<endl;
     }	
     else{
     	if(front <= rear){
	     
     	for(int i= front ; i<=rear ; i++ ){
     		cout<<queue[i]<<endl;
	     }
                       }
                       else{
                       	for(int i= front ; i<size ; i++ ){
     		cout<<queue[i]<<"\t";
	     }
                        for(int i= 0 ; i<=rear ; i++ ){
     		cout<<queue[i]<<"\t";
	     }
                       }
     }
}
 
 int main(){
 	enqueue(10);
 	enqueue(20);
 	enqueue(30);
 	display();
                    cout<<"your turn "<<peek()<<endl;
                    dequeue();
                    cout<<"-----------------------------\n";
                    display();
 	
 }
 
 
 
 
 
 
 
 
 
 
 
