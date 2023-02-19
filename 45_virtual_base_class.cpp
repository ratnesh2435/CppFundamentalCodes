#include<iostream>
using namespace std;
// Inheritance:
//     [     A     ]
//     v-----|----v
//     [ B ]   [ C ]
//     v-----|----vl
//     [     D     ]
class Student{
    protected:
    int roll_no;
    public:
    void set_rollno(int a){
        roll_no = a;
    }
    void print_rollno(void){
        cout<<"Your roll no is "<<roll_no<<endl;
    }
};

class Test: virtual public Student{
    protected:
    float maths, physics;
    public:
    void set_marks(float a, float b){
        maths = a;
        physics = b;
    }
    void print_marks(void){
        cout<<"Your result is here: "<<endl
            <<"Maths : "<<maths<<endl
            <<"Physics : "<<physics<<endl;
    }

};

class Sports: virtual public Student{
    protected:
    float score;
    public:
    void set_score(int a){
        score = a;
    }
    void print_score(void){
        cout<<"Your PT score is : "<<score<<endl;
    }
};

class Result: public Test, public Sports{
    int total;
    public:
        void display(void){
            total = maths + physics + score;
            print_rollno();
            print_score();
            print_marks();
            cout<<"Your total score is: "<<total<<endl;
        }
};
int main(){
    Result ratnesh;
    ratnesh.set_rollno(24);
    ratnesh.set_marks(89.0, 59.5);
    ratnesh.set_score(9);
    ratnesh.display();
    return 0;
}