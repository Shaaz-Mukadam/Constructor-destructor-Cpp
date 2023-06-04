//*************CONSTRUCTOR***********
//Constructor is used to initialize the object.
//when object is created constructor is automatically created.
//if u dont create the constructor then that is called default constructor
//Copy Constructor is used to copy the value from one to another. eg stuent c = a
#include<iostream>
using namespace std;
 class Students{
     string name;
     public:
     int age;
     bool gender;

     void setName(string s){
      name=s;
     }

     void getName() {
     cout<<name<<endl;
     }
     Students(){
     cout<<"\n*****Default constructor*****"<<endl;
     }
     Students(string s, int a , int g){
         cout<<"*****Parameterized Constructor*****"<<endl;
     name = s;
     age = a;
     gender = g;
     }   //This is a parametrized constructor

     Students(Students &a){
     cout<<"\n\n *****Copy Constructor*****"<<endl;
      name = a.name;
      age = a.age;
      gender = a.gender;
     }

     ~Students() {
        cout<<"Destructor called"<<endl;
     }

     void printInfo() {
      cout<<"Name =";
      cout<<name<<endl;
      cout<<"Age =";
      cout<<age<<endl;
      cout<<"Gender";
      cout<<gender<<endl;
     }

 };
int main() {

    Students a("Shaaz" , 20 , 1);
    a.printInfo();
    Students b;
    Students c = a;


}


//*********OUTPUT********
*****Parameterized Constructor*****
Name =Shaaz
Age =20
Gender1

*****Default constructor*****


 *****Copy Constructor*****
Destructor called
Destructor called
Destructor called

