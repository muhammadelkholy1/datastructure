#include <iostream>
#include <vector>
#include <string>
using namespace std;

class car{
  private:
     
      // char name[10];
    // char colour[10];
     
     string color;
  string name;
     int maxspeed;
     int model;
     
 	
  public:	
           void setName(string  n){
          	name=n;
           }
           void setColor(string c){
           	color=c;
           }
           void setMaxspeed(int m){
           	maxspeed=m;
          	
           }
           void setModel(int m){
           	model=m;
           }
           string getName(){
           	return name;
           }
           string getColor(){
           	return color;
           }
           int getMaxspeed(){
           	return maxspeed;
           }
           int getModel(){
           	return model;
           }
           void print(){
           	cout<<"name is "<<getName()<<"\n"<<"color is "<<color<<"\n"<<"model is "<<model<<"\n"<<"max speed is "<<maxspeed<<endl;
           }
           
};


int main(){
             car x ;
             x.setName("boghaty chiron");
             x.setColor("black");
             x.setMaxspeed(500);
             x.setModel(2020);
             x.print();
             
cout<<x.getName( mo);
   
	
 
}


