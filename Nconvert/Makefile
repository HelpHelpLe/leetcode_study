main: main.o solution.o
	g++ -g -o main main.o solution.o
main.o: main.cpp
	g++ -c -g -o main.o main.cpp
solution.o: solution.cpp
	g++ -c -g -o solution.o solution.cpp
clean:
	-rm *.o main -f
.PHONY:
	clean
