all: main.exe
	./main.exe


main.exe: main.o observer.o ignition.o horn.o display.o RadioSource.o ClimateTemp.o ClimateFan.o ClimateAirFlow.o Defrost.o PowerWindows.o WindowLock.o DoorLock.o MirrorAdjust.o SeatAdjust.o
	gcc -o main.exe main.o observer.o ignition.o horn.o display.o RadioSource.o ClimateTemp.o ClimateFan.o ClimateAirFlow.o Defrost.o PowerWindows.o WindowLock.o DoorLock.o MirrorAdjust.o SeatAdjust.o

main.o: main.c observer.h ignition.h horn.h display.h RadioSource.h ClimateTemp.h ClimateFan.h ClimateAirFlow.h Defrost.h PowerWindows.h WindowLock.h DoorLock.h MirrorAdjust.h SeatAdjust.h
	gcc -c main.c

observer.o: observer.c observer.h
	gcc -c observer.c

display.o: display.c observer.h display.h
	gcc -c display.c

ignition.o: ignition.c observer.h ignition.h
	gcc -c ignition.c
	
horn.o: horn.c observer.h horn.h
	gcc -c horn.c

RadioSource.o : RadioSource.c observer.h RadioSource.h
	gcc -c RadioSource.c

ClimateTemp.o : ClimateTemp.c observer.h ClimateTemp.h
	gcc -c ClimateTemp.c

ClimateFan.o : ClimateFan.c observer.h ClimateFan.h
	gcc -c ClimateFan.c


Defrost.o : Defrost.c observer.h Defrost.h
	gcc -c Defrost.c

PowerWindows.o : PowerWindows.c PowerWindows.h observer.h
	gcc -c PowerWindows.c

WindowLock.o : WindowLock.c WindowLock.h observer.h
	gcc -c WindowLock.c

DoorLock.o : DoorLock.c DoorLock.h observer.h
	gcc -c DoorLock.c


MirrorAdjust.o : MirrorAdjust.c MirrorAdjust.h observer.h
	gcc -c MirrorAdjust.c

SeatAdjust.o : SeatAdjust.c SeatAdjust.h observer.h
	gcc -c SeatAdjust.c
ClimateAirFlow.o : ClimateAirFlow.c ClimateAirFlow.h observer.h
	gcc -c ClimateAirFlow.c
clean:
	rm -f *.o main.exe