src = $(wildcard *.c)
obj = $(patsubst %.c, %.o, $(src))

debugArgs = -g -Wall
releaseArgs = -Wall

compileArgs = $(debugArgs)

ALL: main
main: $(obj)
	gcc $^ -o main $(compileArgs)
%.o: %.c
	gcc -c $< -o $@ $(compileArgs)
clean:
	-rm $(obj) main -f
.PHONY:
	clean ALL
