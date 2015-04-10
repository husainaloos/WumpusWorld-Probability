# Makefile

CC = c++
OBJECTS = Action.o Agent.o Location.o Orientation.o Percept.o WumpusWorld.o Probability.o LocationProbability.o

all: wumpsim

wumpsim: wumpsim.h wumpsim.cc $(OBJECTS)
	$(CC) -o wumpsim wumpsim.cc $(OBJECTS)

Action.o: Action.h Action.cc
	$(CC) -c Action.cc

Agent.o: Agent.h Agent.cc
	$(CC) -c Agent.cc

Location.o: Location.h Location.cc
	$(CC) -c Location.cc

Orientation.o: Orientation.h Orientation.cc
	$(CC) -c Orientation.cc

Percept.o: Percept.h Percept.cc
	$(CC) -c Percept.cc

WumpusWorld.o: WumpusWorld.h WumpusWorld.cc
	$(CC) -c WumpusWorld.cc

Probability.o: Probability.h Probability.cc
	$(CC) -c Probability.cc

LocationProbability.o: LocationProbability.h LocationProbability.cc Location.h Probability.h
	$(CC) -c LocationProbability.cc

clean:
	rm -f *.o wumpsim
