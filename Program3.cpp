#include<iostream>
using namespace std;
class boy
{
    public:
        string name;
        int roll;
        float gpa;

};
int main()
{
    boy boy1;
    boy boy2;

    boy1.name="Rakshit";
    boy1.roll=60;
    boy1.gpa=7.0;

    boy2.name="Kapoor";
    boy2.roll=14;
    boy2.gpa=8.0;


    cout<<"                       details of boy 1 are"<<"\nname:"<<boy1.name<<endl<<"roll:"<<boy1.roll<<endl<<"gpa:"<<boy1.gpa<<endl;
    cout<<"                       details of boy 2 are"<<"\nname:"<<boy2.name<<endl<<"roll:"<<boy2.roll<<endl<<"gpa:"<<boy2.gpa<<endl;


    return 0;
}
