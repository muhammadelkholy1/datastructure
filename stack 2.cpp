#include <iostream>
using namespace std;
#define size 4
 
 int stack[size] , top=-1;
  void push (int value);
  int pop();
  int peek();
  void display();
  
  int main(){
 	push(40);
 	push(30);
 	push(20);
 	push(10);
 //	push(5);
                    display();
                    cout<<"you took "<<pop()<<endl;
                    cout<<"then you have this on the top "<<peek()<<endl;
                    pop();
                    pop();
             //       pop();
                    cout<<"then you took 3 elements \n"<<endl;
                  display();
  	return 0;
  }
   void push (int value) {
   	if (top==size-1){
   		cout<<"stack overflow "<<endl;
	   }
	   else{
	   	top++;
	   	stack[top]=value;
	   }	   
   }
   int pop(){
   	if(top==-1){
   		cout<<"stack underflow "<<endl;
	   }
	   else{
	   	return stack[top--];
	   }
   }
   int peek(){
   	if(top==-1){
   		cout<<"stack underflow "<<endl;
	   }
	   else{
	   	return stack[top];
	   }
   }
   void display(){
   	if(top==-1){
   		cout<<"stack underflow "<<endl;
	   }
	   else{
	   	for(int i=top ; i>=0 ; i--){
	   		cout<<stack[i]<<endl;
		   }
	   }
   }
   
  
