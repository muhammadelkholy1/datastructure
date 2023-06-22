#include <iostream>
using namespace std;

#define SIZE 5

int queue[SIZE];
int front =-1 , rear=-1 ;
void enqueue(int value);
void dequeue();
int peek();
void display();


int main(){
	 enqueue (10);
                     enqueue (20);
	 enqueue (30);
	 enqueue (40);
	 display(); // 10 20 30 40
	 cout<<"your turn "<<peek()<<endl; //10
	 dequeue();
	 display();// 20 30 40 
	cout<<"your turn "<< peek()<<endl; //20
	 dequeue();
	 display(); //30 40 
	
	return 0 ;
}

void enqueue(int value){
	if(rear !=SIZE-1){
		if(front ==-1 && rear==-1) {
			//rear++;
			front++;
			queue[++rear]=value;
		}
		else{ 
 	                           queue[++rear]=value;
		}
	}
	else{
		cout<<"queue overflow"<<endl;
	}
}
void dequeue(){
	if(rear!=-1 && front!=-1 && front <= rear){
		front++;
	}
	else{
		cout<<"queue is empty"<<endl;
	}
}
int peek(){
	if(rear!=-1 && front!=-1 && front <= rear){
		return queue[front];
	}
	else{
		cout<<"queue is empty"<<endl; 
		return -1;
	}
}
void display(){
	if(rear!=-1 && front!=-1 && front <= rear){ 
	for(int i= front ; i<=rear ; i++){
		cout<<"  "<<queue[i]<<"   ";
                                     }
                                     cout<<endl;
                    }
                    else {
                    	cout<<"queue is empty"<<endl; 
	}
	
}

















