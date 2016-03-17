#include<iostream>
#include<fstream>
#include<string>
#include<cstdlib>
#include"bmi.h"

using namespace std ;

int main ()
{
int height1 ;
int mass1   ;
float bmi_value ;
string str1 ;
bmi bmi1    ;

ifstream inFile("inputfile.txt",ios::in);
if(!inFile)
{
cerr<<"Failed reading file" ;
exit(1) ;
}

ofstream outFile("outfile",ios::out);
if(!outFile)
{
cerr<<"Failed opening"<<endl ;
exit(1);
}

while(inFile>>height1>>mass1)
{
	if(height1==0 || mass1==0)
	{
		break;
	}
	bmi_value = bmi1.operate(height1,mass1);
	str1 = bmi1.category(bmi_value);
	outFile<<bmi_value<<" "<<str1<<endl;
	
}








return 0 ;
}
