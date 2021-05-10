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
void Max(int bill[10]);
void Min(int wurtz[10]); 
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
    for (i = 0; i < 100000000; i++)
    {
       int n = rand() %10 +1; //change this to your desire and don't touch anything else
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
    
    int total = count1 + count2 + count3 +count4+count5+count6+count7+count8+count9+count10; 
   int billwurtz[10] = {count1,count2 , count3 ,count4,count5,count6,count7,count8,count9,count10 }; 
   Max(billwurtz); 
   Min(billwurtz); 
   cout << i << endl; 
    cout <<total <<endl; 
      
    return 0; 
}

void Max(int bill[10]) 
{
   int temp = max(bill[0], bill[1]); 
   int temp1 = max(temp, bill[3]); 
   int temp2 = max(temp1, bill[4]); 
   int temp3 = max(temp2, bill[5]); 
   int temp4 = max(temp3, bill[6]); 
   int temp5 = max(temp4, bill[7]); 
   int temp6 = max(temp5, bill[8]); 
   int fin = max(temp6, bill[9]); 
   if (fin == bill[0])
   {
     cout << "Highest was 1 with " << fin << endl; 
   }
   if (fin == bill[1])
   {
     cout << "Highest was 2 with " << fin << endl; 
   }
   if (fin == bill[2])
   {
     cout << "Highest was 3 with " << fin << endl; 
   }
   if (fin == bill[3])
   {
     cout << "Highest was 4 with " << fin << endl; 
   }
   if (fin == bill[4])
   {
     cout << "Highest was 5 with " << fin << endl; 
   }
   if (fin == bill[5])
   {
     cout << "Highest was 6 with " << fin << endl; 
   }
   if (fin == bill[6])
   {
     cout << "Highest was 7 with " << fin << endl; 
   }
   if (fin == bill[7])
   {
     cout << "Highest was 8 with " << fin << endl; 
   }
   if (fin == bill[8])
   {
     cout << "Highest was 9 with " << fin << endl; 
   }
   if (fin == bill[9])
   {
     cout << "Highest was 10 with " << fin << endl; 
   }

   

   
   
   
   
}
void Min(int wurtz[10])
{
   int temp = min(wurtz[0], wurtz[1]); 
   int temp1 = min(temp, wurtz[3]); 
   int temp2 = min(temp1, wurtz[4]); 
   int temp3 = min(temp2, wurtz[5]); 
   int temp4 = min(temp3, wurtz[6]); 
   int temp5 = min(temp4, wurtz[7]); 
   int temp6 = min(temp5, wurtz[8]); 
   int fin = min(temp6, wurtz[9]); 
   if (fin == wurtz[0])
   {
     cout << "Lowest was 1 with " << fin << endl; 
   }
   if (fin == wurtz[1])
   {
     cout << "Lowest was 2 with " << fin << endl; 
   }
   if (fin == wurtz[2])
   {
     cout << "Lowest was 3 with " << fin << endl; 
   }
   if (fin == wurtz[3])
   {
     cout << "Lowest was 4 with " << fin << endl; 
   }
   if (fin == wurtz[4])
   {
     cout << "Lowest was 5 with " << fin << endl; 
   }
   if (fin == wurtz[5])
   {
     cout << "Lowest was 6 with " << fin << endl; 
   }
   if (fin == wurtz[6])
   {
     cout << "Lowest was 7 with " << fin << endl; 
   }
   if (fin == wurtz[7])
   {
     cout << "Lowest was 8 with " << fin << endl; 
   }
   if (fin == wurtz[8])
   {
     cout << "Lowest was 9 with " << fin << endl; 
   }
   if (fin == wurtz[9])
   {
     cout << "Lowest was 10 with " << fin << endl; 
   }

}
