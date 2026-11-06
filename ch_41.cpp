#include <iostream>
using namespace  std;
               //STRUCTURE 
struct student{
    string name;
    int age;
};
void initialise(student *s,string name,int age);

int main()
{ student s1, s2;
  initialise(&s1,"harjot singh",17);
  initialise(&s2,"M",17);

  cout<<s1.name<<"\n";
  cout<<s1.age<<"\n";
  cout<<s2.name<<"\n";
  cout<<s2.age<<"\n";
}

void initialise(student *s,string name,int age)
{
   s->name=name;
   s->age=age;
}
