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

bmi::bmi()
{
height = 0;
mass = 0;
bmi_value = 0 ;
}

float bmi::operate(int x, int y)
{
height =(float)(x/100.0) ;
mass = (float)y ;
bmi_value =((mass)/((height)*(height)));

return bmi_value ;
}

string bmi::category(float z)
{
if(z < 15.0)
	{
	return "Very severely underweight";
	}
else if (z>=15.0 && z<16.0)
	{
	return "Severely underweight" ;
	}
else if (z>=16.0 && z<18.5)
	{
	return "Underweight" ;
	}
else if (z>=18.5 && z<25)
	{
	return "Normal" ;
	}
else if (z>=25.0 && z<30.0)
	{
	return "Overweight" ;
	}
else if (z>=30.0 && z<35.0)
	{
	return "Obese Class I (Moderately obese)";
	}
else if (z>=35.0 && z<40.0)
	{
	return "Obese Class II (Severely obese)";
	}
else if (z>=40.0)
	{
	return "Obese Class III (Very severely obese)";
	}

}
