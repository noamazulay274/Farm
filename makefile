CPP_FARM:  Animal.o  chicken.o cow.o sheep.o  Product.o Milk.o Eggs.o Wool.o Farm.o cowFarm.o sheepFarm.o chickenFarm.o Market.o farmMarket.o error.o
	g++ Animal.o  chicken.o cow.o sheep.o  Product.o Milk.o Eggs.o Wool.o Farm.o cowFarm.o sheepFarm.o chickenFarm.o Market.o farmMarket.o error.o -o CPP_FARM

Animal.o: Animal.cpp Animal.h 
	g++ -c Animal.cpp


chicken.o: chicken.cpp chicken.h Animal.h 
	g++ -c chicken.cpp

cow.o: cow.cpp cow.h Animal.h 
	g++ -c cow.cpp

sheep.o: sheep.cpp sheep.h Animal.h 
	g++ -c sheep.cpp




Product.o: Product.cpp Product.h 
	g++ -c Product.cpp


Milk.o: Milk.cpp Milk.h Product.h 
	g++ -c Milk.cpp

Eggs.o: Eggs.cpp Eggs.h Product.h 
	g++ -c Eggs.cpp

Wool.o: Wool.cpp Wool.h Product.h 
	g++ -c Wool.cpp





Farm.o: Farm.cpp Farm.h Animal.h Eggs.h Milk.h Wool.h
	g++ -c Farm.cpp
	
cowFarm.o: cowFarm.cpp cowFarm.h Farm.h cow.h
	g++ -c cowFarm.cpp

sheepFarm.o: sheepFarm.cpp sheepFarm.h Farm.h sheep.h
	g++ -c sheepFarm.cpp

chickenFarm.o: chickenFarm.cpp chickenFarm.h Farm.h chicken.h
	g++ -c chickenFarm.cpp



Market.o: Market.cpp Market.h cowFarm.h sheepFarm.h chickenFarm.h error.h
	g++ -c Market.cpp

farmMarket.o: farmMarket.cpp Market.h
	g++ -c farmMarket.cpp


error.o: error.cpp error.h
	g++ -c error.cpp

clean:
	rm -f *.o CPP_FARM
