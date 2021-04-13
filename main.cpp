#include <iostream>
#include <math.h>
#include <fstab.h>
#include <fstream>
#include <ostream>
#include <sstream>
#include <condition_variable>
#include <cerrno>
#include <string>
#include <string.h>
#include <vector>
#include <stdio.h>
#include <stdlib.h>
using namespace std; 
int count1 = 0; 
int count2 = 0; 
int count3 = 0; 
int count4 = 0; 
int count5 = 0; 
int count6 = 0; 
int count7 = 0; 
int count8 = 0; 
int count9 = 0; 
int count10 = 0; 
int i = 0; 
int main()
{
   srand(time(NULL)); 
    for (i; i < 1000000; i++)
    {
       int n = rand() %10 +1; 
    switch (n) {
        case 1: count1 = count1 +1; break;  
         case 2: count2 = count2 +1; break;  
          case 3: count3 = count3 +1; break;  
           case 4: count4 = count4 +1; break;  
            case 5: count5 = count5 +1; break;  
             case 6: count6 = count6 +1; break;  
              case 7: count7 = count7 +1; break;  
               case 8: count8 = count8 +1; break;  
                case 9: count9 = count9 +1; break;  
                 case 10: count10 = count10  +1; break; 
    }
        
    }
    cout << "1: " <<  count1 << endl; 
    std::cout << "" <<std::endl; 
    cout << "2: "<< count2 << endl; 
    std::cout << "" <<std::endl; 
    cout << "3: "<< count3 << endl; 
    std::cout << "" <<std::endl; 
    cout << "4: "<< count4 << endl; 
    std::cout << "" <<std::endl; 
    cout << "5: "<< count5 << endl; 
    std::cout << "" <<std::endl; 
    cout << "6: "<< count6 << endl; 
    std::cout << "" <<std::endl; 
    cout << "7: "<< count7 << endl; 
    std::cout << "" <<std::endl; 
    cout << "8: "<< count8 << endl; 
    std::cout << "" <<std::endl; 
    cout << "9: "<< count9 << endl; 
    std::cout << "" <<std::endl; 
    cout << "10: "<< count10 << endl; 
    std::cout << "" <<std::endl; 
    cout << i << endl; 
    int total = count1 + count2 + count3 +count4+count5+count6+count7+count8+count9+count10; 
    cout <<total <<endl; 

    return 0; 
}
