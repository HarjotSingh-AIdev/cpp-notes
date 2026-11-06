#include <iostream>
using namespace std;

struct student{
    string name;
    int age;
};

int main()
{   
    int size;
    cout<<"Enter the number of students to add : ";
    cin>>size;
    cin.ignore();
    student s1[size];
    for(int i=0;i<size;i++)
    {   cout<<"-----------STUDENT DETAILS------------- "<<"\n";
        cout<<"enter the name of student "<<i+1<<": ";
        getline(cin,s1[i].name);
        cout<<"enter the age of student "<<i+1<<": ";
        cin>>s1[i].age;
        cin.ignore();
    }
     cout<<"\n";
     for(int i=0;i<size;i++)
     {
        cout<<"NAME :"<<s1[i].name<<" ,AGE :"<<s1[i].age<<"\n";
     }
    
}