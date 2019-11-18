#include <iostream>
#include "Zoo.h"
using namespace std;

int main()
{
    Zoo UA(12500, "ZooTrop", 500, 2001, 34, 1150, "Lion");
    Zoo USA(14550 , "TropAnimal", 450, 1991, 40, 1200, "Giraf");
    Zoo UK(11600 , "ZooWord" , 700, 1933, 32, 3000,"White Bear");
    UA.getInfo(UA);
    cout<<endl;
    USA.getInfo(USA);
    cout<<endl;
    UK.getInfo(UK);
    cout<<endl;
    
    return 0;
}
