main: math.o cmath.o main.cpp
	clang++ math.o cmath.o main.cpp -o main

math.o: math.cpp
	clang++ -c math.cpp

cmath.o:
	clang++ -c cmath.cpp

clean:
	rm *.o
