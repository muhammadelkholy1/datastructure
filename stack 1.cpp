#include <iostream>
using namespace std;

#define size 5

int stack[size] , top=-1 ;
void push (int value){	

  if (size==top-1) {
  	 cout<<"overflow"<<endl;
  }
  else {
  	top++;
  	stack[top]=value;	
        }
 
}

int peek(){
	if (top==-1){
		cout<<"stack underflow"<<endl;
		
	}
	else{
		return stack[top];
	}
}


int pop(){
 	if(top==-1){
 		cout<<"stack underflow"<<endl;
	 }
 	else{
 		
 		return stack[top--];
	 }
 }
 
 

 void display(){
	if(top==-1){
		cout<<"stack underflow"<<endl;
	}
	else{
		for (int i=top ; i>=0; i-- ){
			cout<<stack[i]<<endl;
		}
		
	}	
}



 int main(){
    push(20);
    push(15);
    push(10);
    
      display ();
      cout<<"you took "<<pop()<<endl;
     cout<<"its turn  "<< peek()<<endl;
      display();
      	
    return 0;
    
 }
 
