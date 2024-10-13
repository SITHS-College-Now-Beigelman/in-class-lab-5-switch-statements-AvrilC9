// Avril Cao
// Lab 5 Part 3
// October 8, 2024


#include <iostream>
// to use cout, you need #include <iostream>
#include <iomanip>
// to use setprecision, you need #include <iomanip>
#include <cstdlib>
// to use functions rand and strand, you need #include <cstdlib>
#include <ctime>
// to use time, you need the header file: #include <ctime>


using namespace std;
// using namespace std is used so std:: doesn't have to be written before every cout and endl


int main()
// all C++ programs require int () to start


{
    int numBlocks ;
    int direct; 
    int stepsEast; 
    int stepsNorth; 

while (stepsEast != 2 || stepsNorth != 3)
{
    srand(time(0));
// random number between 1 and 4 so each is 25% //probable
    direct = rand() % 4 + 1;
// 1 means North, 2 means South, 3 means East and 4 means West


if (direct == 1)
    cout << "The robot is " << numBlocks << " blocks North from the starting point. " << endl;

else if (direct == 2)
    cout << "The robot is " << numBlocks << " blocks South from the starting point. " << endl;

else if (direct == 3)
    cout << "The robot is " << numBlocks << " blocks East from the starting point. " << endl;
    
else if (direct == 4)
    cout << "The robot is " << numBlocks << " blocks West from the starting point. " << endl;

// I used if and else if to provide different statements for different directions

} 
    cout << "The robot reached the destination in " << numBlocks << " steps. " << endl;

    return 0;
}

/* The robot is 1 blocks South from the starting point. 
The robot is 2 blocks South from the starting point. 
The robot is 3 blocks South from the starting point. 
The robot is 4 blocks South from the starting point. 
The robot is 5 blocks South from the starting point. 
The robot is 6 blocks South from the starting point. 
The robot is 7 blocks South from the starting point. 
The robot is 8 blocks South from the starting point. 
The robot is 9 blocks South from the starting point. 
The robot is 10 blocks South from the starting point. 
The robot is 11 blocks South from the starting point. 
The robot is 12 blocks South from the starting point. 
The robot is 13 blocks South from the starting point. 
The robot is 14 blocks South from the starting point. 
The robot is 15 blocks South from the starting point. 
The robot is 16 blocks South from the starting point. 
The robot is 17 blocks South from the starting point. 
The robot is 18 blocks South from the starting point. 
The robot is 19 blocks South from the starting point. 
The robot is 20 blocks South from the starting point. 
The robot is 21 blocks South from the starting point. 
The robot is 22 blocks South from the starting point. 
The robot is 23 blocks South from the starting point. 
The robot is 24 blocks South from the starting point. 
The robot is 25 blocks South from the starting point. */

