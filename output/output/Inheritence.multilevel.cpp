#include <iostream>
using namespace std;
class Student
{
protected:
    int roll_number;

public:
    void set_roll_number(int);
    void get_roll_number(void);
};

void Student::set_roll_number(int r)
{
    roll_number = r;
}
void Student::get_roll_number()
{
    cout << "The student roll_number is " << roll_number << endl;
}

class Exam : public  Student
{
protected:
    float math;
    float physics;
    float chemistry;

public:
    void set_marks(float, float, float);
    void get_marks();
};

void Exam::set_marks(float m1, float m2, float m3)
{
    math = m1;
    physics = m2;
    chemistry = m3;

}

void Exam ::get_marks()
{
    cout << "The  math marks  are " << math << endl
         << "The physics marks are " << physics << endl
         << "The chemistry marks are " << chemistry << endl;
}

class  Result : public Exam
{
    float result;

public:
    void show_Result()
    {
        get_roll_number();
        get_marks();
        cout << "Your Result is " << (math + physics + chemistry) / 3 << "%" << endl;
    }
};

int main()
{
    Result vinit;
    vinit.set_roll_number(101);
    vinit.set_marks(99.0,80.0,100.0);
    vinit.show_Result();



    return 0;
}