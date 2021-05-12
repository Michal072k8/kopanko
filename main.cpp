#include <iostream>
#include <unistd.h>
#include <time.h>

using namespace std;

int odp, liczba, kamien, obsydian, zelazo, miedz, srebro, szafir, diament, wykopane_bloki, czas;

int main() {
  cout << "co sekunde bedziesz dostawal rzeczy z kopania kliknij 1  by zobaczyc drop klinknij 2 by od razy kopac" << endl;
  cin >> odp;

  if(odp<2)
  {
    cout << "70%kamien, 10%obsydian, 5%zelazo, 5%miedz, 5%srebro, 3%szafir, 2%diament  a teraz zresetuj program";
    sleep(10);
    system("clear");

  }
  else if(odp<3 & odp>1)
  {
    for(;;)
    {
      
      srand(time(NULL));
      liczba = rand()%99+1;
      
      if(liczba<71)
      {
        kamien=kamien+1;
        sleep(1);
        czas=czas+1;
      }
      else if(liczba>70 && liczba<81)
      {
        obsydian=obsydian+1;
        sleep(5);
        czas=czas+5;

      }
      else if(liczba>80 && liczba<86)
      {
        zelazo=zelazo+1;
        sleep(3);
        czas=czas+3;
      }
      else if(liczba>85 && liczba<91)
      {
        miedz=miedz+1;
        sleep(3);
        czas=czas+3;
      }
      else if(liczba>90 && liczba<96)
      {
        srebro=srebro+1;
        sleep(4);
        czas=czas+4;
      }
      else if(liczba>95 && liczba<99)
      {
        szafir=szafir+1;
        sleep(1);
        czas=czas+1;
      }
      else if(liczba>98)
      {
        diament=diament+1;
        sleep(2);
        czas=czas+2;
      }
      wykopane_bloki=wykopane_bloki+1;
      system("clear");

      cout << "kamien " << kamien << endl; 
      cout << "obsydian " << obsydian << endl; 
      cout << "zelazo " << zelazo << endl; 
      cout << "miedz " << miedz << endl; 
      cout << "srebro " << srebro << endl; 
      cout << "szafir " << szafir << endl; 
      cout << "diament " << diament << endl; 
      cout << "wykopane bloki " << wykopane_bloki<< endl; 
      cout << "czas " << czas << endl; 

    }
  }
  else
  {
    cout << "zla liczba zresetuj program";
  }
}
