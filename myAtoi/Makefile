main: main.o solution.o
	g++ -g -o main main.o solution.o -std=c++11
main.o: main.cpp
	g++ -c -g -o main.o main.cpp -std=c++11
solution.o: solution.cpp
	g++ -c -g -o solution.o solution.cpp -std=c++11
clean:
	-rm *.o main -f
.PHONY:
	clean
