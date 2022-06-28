#include<iostream>
using namespace std;

class course
{
  public:
    course()
    {
        mtW=0.3;
        hwW=0.2;
        finW=0.5;
    }
    course(double w1, double w2, double w3)
    {
        mtW=w1;
        hwW=w2;
        finW=w3;
    }
    void calculate()
    {

    }
    void set_midterm(int);
    int get_midterm();
    void set_homework(int);
    int get_homework();
    void set_final(int);
    int get_final();

    void set_name(string);
    string get_name();
    string get_lettergrade();


  private:
    double mtW, hwW, finW;
    int mtG, hwG, finG;
    string name;
    string letterGrade;
};


int main() {

  cousre obj1;
  course obj2(double w1,double w2, double w3 );
  cout<<"Enter weights for second course: ";
  cin>>obj2;


  return 0;
}
