obras:	desing.o escultura.o literatura.o main.o pintura.o obras.o
	g++ desing.o escultura.o literatura.o main.o pintura.o obras.o -o dale

desing.o:	desing.cpp desing.h
	g++ -c desing.cpp

escultura.o:	escultura.cpp escultura.h
	g++ -c escultura.cpp

literatura.o:	literatura.cpp literatura.h
	g++ -c literatura.cpp

pintura.o:	pintura.cpp pintura.h
	g++ -c pintura.cpp

obras.o:	obras.cpp obras.h
	g++ -c obras.cpp

main.o:	main.cpp obras.h pintura.h escultura.h literatura.h desing.h
	g++ -c main.cpp