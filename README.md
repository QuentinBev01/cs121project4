# cs121project4

##funtion commands
 void advance(int horseNum, int* horses);
 void printLane(int horseNum, int* horses);
 bool isWinner(int horseNum, int* horses);
```
make a constant int NUM_HORSES
make a constant int TRACK_LENGTH
```
```
make an array of 5 0 values, call it horses set keepGoing to true 

while keepGoing:
run through each in array:
advance that horse 
print that horse's lane 
if that horse won, 
set keepGoing to false 
ask user for input to start next turn

## advance()
```
given a horse number and the array of horses
roll a 0 or 1 value, put it in a coin
add coin to the horse's position value in the array
```
## printLane()
```
given the horse numbers and the array of horses
loop from zero to TRACK_LENGTH
if the current loop index is equal to the horses value 
 print the horses id
 otherwise print 
 a . 
 ```
 ## isWinner()
result = false 