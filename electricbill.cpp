#include<bits/stdc++.h>
using namespace std ;
int main() 
{
  int unit=315; //declare variable unit
    //first we understand unit prize
    /*1 - 100 unit - 5/=
      101-200 unit -  7/=
      201-300 unit - 10/=
      above 300  - 15/=*/
      if(unit<=100){//when this statement is true
            cout<<"Bill amount is: ";
    cout<<unit*5;//this statement is Executed otherwise
}
else if(unit<=200){//when this statement is true
        cout<<"Bill amount is: ";
    cout<<(100*5)+(unit-100)*7;//this statement is Executed otherwise
}
else if(unit<=300){//when this statement is true
    cout<<"Bill amount is: ";
    cout<<(100*5)+(100*7)+(unit-200)*10;//this statement is Executed otherwise
}
else if(unit>300){//when this statement is true
    cout<<"Bill amount is: ";
    cout<<(100*5)+(100*7)+(100*10)+(unit-300)*15;//this statement is Executed otherwise
}
else{//when all statements are false
cout<<"Bill amount is: ";
    cout<<"No value";//this statement is Executed
}
return 0 ;
}