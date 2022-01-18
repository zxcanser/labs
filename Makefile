CC = gcc
FLAG1 = -Wall
FLAG2 = -c
FLAG3 = -o
nyx = lib
nyx_O = $(nyx).o
nyx_C = $(nyx).c
nyx_H = $(nyx).h
L_13 = 13
L_13_O = $(L_13).o
L_13_C = $(L_13).c

all: $(L_13_O) $(nyx_O)
$(CC) $(nyx_O) $(L_13_O) $(FLAG1) $(FLAG3) $(L_13)

$(nyx_O): $(nyx_C) $(nyx_H)
$(CC) $(FLAG2) $(FLAG1) $(nyx_C)

$(L_13_O): $(L_13_C)
$(CC) $(FLAG2) $(FLAG1) $(L_13_C)
clean:
rm -f *.o
rm -f 13
