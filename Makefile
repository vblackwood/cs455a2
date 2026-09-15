CFLAGS=-Wall -std=c23

.PHONY: all clean

all: server client

server: zip_server.c
	${CC} ${CFLAGS} -o server zip_server.c
client: zip_client.c
	${CC} ${CFLAGS} -o client zip_client.c
clean:
	@rm -f server client
