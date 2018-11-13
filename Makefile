output: main.o Trapezoid.o Rectangle.o Test.o Menu.o Quadrangle.o Point.o Rhomboid.o
	g++ main.o Trapezoid.o Rectangle.o Test.o Menu.o Quadrangle.o Point.o Rhomboid.o -o output

main.o: main.cpp
	g++ -c main.cpp

Trapezoid.o: Trapezoid.cpp Trapezoid.h
	g++ -c Trapezoid.cpp Trapezoid.h

Rhomboid.o: Rhomboid.cpp Rhomboid.h
	g++ -c Rhomboid.cpp Rhomboid.h

Rectangle.o: Rectangle.cpp Rectangle.h
	g++ -c Rectangle.cpp Rectangle.h

Menu.o: Menu.cpp Menu.h
	g++ -c Menu.cpp Menu.h

Test.o: Test.cpp Test.h
	g++ -c Test.cpp Test.h

Quadrangle.o: Quadrangle.cpp Quadrangle.h
	g++ -c Quadrangle.cpp Quadrangle.h


Point.o: Point.cpp Point.h
	g++ -c Point.cpp Point.h

clean:
	rm -rf *o output







