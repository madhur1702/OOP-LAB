#include <iostream>
using namespace std;
class student
{
protected:
char name[20];
        public:
            char branch[10];
                        int roll_no;
                void input(){
                cout<<"enter your name";
                cin>>name;
              cout<<"enter your branch";
                cin>>branch;
                     cout<<"enter your roll_no";
                cin>>roll_no;
}

};
class teacher:public student{
public:
    void display(){
    cout<<name<<endl<<branch<<endl<<roll_no;}
};
int main()
{
        student s1;
       teacher t1;
        t1.input();
        t1.display();
}
