all:
	gcc -c src/controller/controller.c -I ./include -o obj/controller.o
	gcc -c src/matriz_reader/matriz_handler.c -I ./include -o obj/matriz_handler.o
	
run:
	gcc obj/controller.o obj/matriz_handler.o -o bin/main
clean:
	rm -rf bin obj
	mkdir -p bin obj