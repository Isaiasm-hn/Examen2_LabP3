main:	main.cpp EvilFruit.o Logia.o Marina.o Paramecia.o Piratas.o Revolucionarios.o Seres.o Zoan.o 
	g++ main.cpp EvilFruit.o Logia.o Marina.o Paramecia.o Piratas.o Revolucionarios.o Seres.o Zoan.o -o main

main.o:	main.cpp EvilFruit.h Logia.h Marina.h Paramecia.h Piratas.h Revolucionarios.h Seres.h Zoan.h 
	g++ -c main.cpp
EvilFruit.o:	EvilFruit.cpp EvilFruit.h
	g++ -c EvilFruit.cpp 
Logia.o:	Logia.cpp Logia.h
	g++ -c Logia.cpp
Paramecia.o:	Paramecia.cpp Paramecia.h EvilFruit.h
	g++ -c Paramecia.cpp
Zoan.o:	Zoan.cpp Zoan.h	EvilFruit.h
	g++ -c Zoan.cpp
Marina.o:	Marina.cpp Marina.h Seres.h
	g++ -c Marina.cpp
Revolucionarios.o:	Revolucionarios.cpp Revolucionarios.h Seres.h
	g++ -c Revolucionarios.cpp
Piratas.o:	Piratas.cpp Piratas.h Seres.h
	g++ -c Piratas.cpp
clean:
	rm	*.o main