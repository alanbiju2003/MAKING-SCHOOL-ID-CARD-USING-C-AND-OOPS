//student id card registration

//header files

#include<iostream>
#include<string>
#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
using namespace std;

//created a class
class Studentid{

    string fname;
    string sname;
    string age;
    string clas;
    string section;
    string rno;
    string dob_day;
    string dob_month;
    string dob_year;
    string addre;
    string phn;

    
    public:

  //function
  
    void getdata();
    void displaydata();


};

void Studentid::getdata(){
    cout<<"ENTER YOUR FIRSTNAME :";
    cin>>fname;

    cout<<"ENTER YOUR SECONDNAME :";
    cin>>sname;

    cout<<"ENTER YOUR AGE :";
    cin>>age;

    cout<<"WHICH CLASS ARE YOU IN :";
    cin>>clas;

    cout<<"WHICH SECTION :";
    cin>>section;

    cout<<"ENTER YOR ROLL NO :";
    cin>>rno;

    cout<<"ENTER YOUR DATE OF BIRTH DATE :";
    cin>>dob_day;

    cout<<"ENTER YOUR DATE OF BIRTH MONTH :";
    cin>>dob_month;

    cout<<"ENTER YOUR DATE OF BIRTH YEAR :";
    cin>>dob_year;

    cout<<"ENTER YOUR HOUSE ADDRESS : ";
    cin>>addre;

    cout<<"ENTER ONE OF YOUR PARENTS NUMBER : ";
    cin>>phn;

    cout<<endl<<endl;


}

void Studentid::displaydata(){

    cout<<endl<<endl;
    cout<<"--------------------------------------------"<<endl;
    cout<<"|      ABC SENIOR SECONDARY SCHOOL          |"<<endl<<endl<<endl;   
    cout<<"       NAME              :"<<fname<<" "<<sname<<endl;
    cout<<"       DOB               :"<<dob_day<<"-"<<dob_month<<"-"<<dob_year<<endl;
    cout<<"       AGE               :"<<age<<endl;
    cout<<"       CLASS AND SECTION :"<<clas<<" - "<<section<<endl;
    cout<<"       ROLL NO           :"<<rno<<endl;
    cout<<"       ADDRESS           :"<<addre<<endl;
    cout<<"       PHONE NO          :"<<phn<<endl<<endl;
    cout<<"|-------------------------------------------|"<<endl;


    

}




int main(){
 
    cout<<"ABC SENIOR SECONDARY SCHOOL,INDIA"<<endl<<endl;

    int snumb;

    cout<<"HOW MANY STUDENTS DATA YOU WANT TO INSERT"<<endl;
    cin>>snumb;
    cout<<endl<<endl<<endl;


    Studentid obj1[20];
    for (int i = 1; i <=snumb; i++)
    {
        cout<<"STUDENT "<<i<<" FILL THE DETAILS"<<endl;
        obj1[i].getdata();
    }

    cout<<" ID CARD OF STUDENTS ARE "<<endl<<endl;

    for ( int i = 1; i <=snumb; i++)
    {   cout<<endl;
        cout<<"ID CARD "<<i;
        obj1[i].displaydata();
        
    }
    
    

    getchar();

getch();
 

    return 0;
}
