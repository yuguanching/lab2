bmi.out: Bmi_operate.o bmi.o
	g++ -o bmi.out Bmi_operate.o bmi.o 

Bmi_operate.o:Bmi_operate.cpp bmi.h
	g++ -c Bmi_operate.cpp

bmi.o:bmi.cpp bmi.h
	g++ -c bmi.cpp


clean:
	rm Bmi_operate*.o
