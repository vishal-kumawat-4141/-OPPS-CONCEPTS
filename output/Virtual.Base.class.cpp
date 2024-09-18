#include <iostream>
using namespace std;
class Student
{
protected:
    int roll_no;

public:
    void set_roll_no(int r)
    {
        roll_no = r;
    }
    void print_roll_no()
    {
        cout << "Your roll_no is : " << roll_no << endl;
    }
};

class Test : virtual public Student
{
protected:
    float maths, physics, chemistry;

public:
    void set_marks(float m1, float m2, float m3)
    {
        maths = m1;
        physics = m2;
        chemistry = m3;
    }
    void print_marks()
    {
        cout << "Your marks are " << endl
             << "maths : " << maths << endl
             << "physics : " << physics << endl
             << "chemistry : " << chemistry << endl;
    }
};

class Score : virtual public Student
{
protected:
    float score;

public:
    void set_score(float sc)
    {
        score = sc;
    }

    void print_score()
    {
        cout << "Your score is : " << score << endl;
    }
};

class Result : public Test, public Score
{
private:
    float total;

public:
    void display()
    {
        total = maths + physics + chemistry + score;
        print_roll_no();
        print_marks();
        print_score();
        cout << "Your total score is : " << total << endl;
    }
};

int main()
{
    Result vinit;
    vinit.set_roll_no(101);
    vinit.set_marks(98.6, 86.4, 95.5);
    vinit.set_score(99.0);
    vinit.display();

    return 0;
}