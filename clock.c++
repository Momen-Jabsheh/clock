#include<iostream>
#include<windows.h>
int hour ;
int mint ;
int sec ;
using namespace std ;
int main(){
   cout << "hour : " ;
   cin >> hour ;
   cout << "\n min : " ;
   cin >> mint ;
   cout << " \n sec : " ;
   cin >> sec ;
   while(true)
   {  sec ++ ;
    system("cls") ;
    if (sec > 59)
    {
      mint ++ ;
      sec = 0 ;
    }
    if (mint > 59)
    {
        hour ++ ;
        mint = 0 ;
    }
    if (hour > 23) hour = 0 ;
    cout << hour << " : " << mint << " : " << sec ;
    Sleep(1000) ;
   }
    return 0 ;
}