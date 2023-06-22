#include <iostream>
#include <fstream>
#include <string>
 using namespace std;

class date{
   public:
           int year;
           int month;
           int day; 
           
           void print(){
		cout <<day<<"/ "<<month<<" / "<<year<<endl;
}	
 
void  fill(int y , int m , int d) {
                        	
                    d=day;
                    m=month;

}
        
};


	     	



int main (){
	
      date birthday ;
      birthday.year=2001;
      birthday.month=11;
      birthday.day=9;
      birthday.print();
    	


      date birthday2;
      birthday2.year=1996;
      birthday2.month=5;
      birthday2.day=16;	
      birthday2.print();	  
	  
	
return 0;          
}







