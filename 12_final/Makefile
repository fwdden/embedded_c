TARGET = sensor_app
CC = gcc

SRC = $(wildcard *.c)
OBJ = $(patsubst %.c, %.o, $(SRC))

$(TARGET) : $(OBJ)
	$(CC) $(OBJ) -o $(TARGET)

%.o : %c
	$(CC) -c $< -o $@

clean :
	rm $(TARGET) *.o
