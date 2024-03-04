main: main.o solution.o
	g++ -o main main.o solution.o -g
main.o: main.cpp
	g++ -c -o main.o main.cpp -g
solution.o: solution.cpp
	g++ -c -o solution.o solution.cpp -g
clean:
	-rm *.o main -f
.PHONY:
	clean
