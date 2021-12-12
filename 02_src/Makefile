all: libs main

main: main.o
	g++ main.o -o main -L. -lpoint

libs: libpoint.a libpoint.so

clean:
	rm -f *.o *.a *.gch *.so main
libpoint.so: point.o
	g++ point.o -lfmt -shared -o libpoint.so
libpoint.a: point.o
	ar rvs libpoint.a point.o
point.o: point.cpp
	g++ point.cpp -c point.o
main.o: main.cpp
	g++ main.cpp -c main.o
