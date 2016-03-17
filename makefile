bmi.out: Bmi_operate.o
	g++ -o bmi.out Bmi_operate.o 

Bmi_operate.o:Bmi_operate.cpp bmi.h
	g++ -c Bmi_operate.cpp




clean:
	rm Bmi_operate*.o
