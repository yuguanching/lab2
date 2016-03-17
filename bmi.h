#include<iostream>
#include<string>
using namespace std ;


class bmi
{
public:


bmi() ;

float operate(int,int);
string category(float);


private:
float height ;
float mass   ;
float bmi_value ;
};
