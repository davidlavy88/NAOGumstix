all : client

client : client.o
	arm-linux-gcc -o client client.o -lm -lbluetooth

client.o : client.c
	arm-linux-gcc -c client.c

clean :
	rm client client.o
