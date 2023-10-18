src = $(wildcard ./*.c)
obj = $(patsubst ./%.c, ./%.o, $(src))

ALL: main

debugArgs = -g

main:$(obj)
	gcc $^ -o $@ $(debugArgs)
./%.o:./%.c
	gcc -c $< -o $@ $(debugArgs)
clean:
	-rm ./*.o main -f
.PHONY:
	clean ALL
