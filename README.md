CFLAGS = -Wno-implicit-function-declaration

all: final

final: main.o hello.o
    @echo "Linking and producting the final application"
    gcc $(CFLAGS) main.o hello.o -o final

main.o: main.c
    @echo "Compiling the main file"
    gcc $(CFLAGS) -o main.c

hello.o: hello.c
    @echo "compiling the hello file"
    gcc $(CFLAGS) -o hello.c

clean:
    @echo "Removing everything but the source file"
    rm main.o hello.o final