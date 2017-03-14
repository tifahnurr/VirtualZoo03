#include <iostream>
#include <time.h>
#include <string.h>
#include <fstream>
//#include <curses.h>
#include "stdlib.h"
#include "zoo.h"

using namespace std;

void delay(int milliseconds){
  long pause;
  clock_t now,then;

  pause = milliseconds*(CLOCKS_PER_SEC/1000);
  now = then = clock();
  while ((now-then) < pause){
    now = clock();
  }
};

void clearscr(void){
  #ifdef _WIN32
      system("cls");
  #elif defined(unix) || defined(__unix__) || defined(__unix) || (defined(__APPLE__) && defined(__MACH__))
      system("clear");
  //add some other OSes here if needed
  #else
      #error "OS not supported."
      //you can also throw an exception indicating the function can't be used
  #endif
} 

void LoadingScreen(){
  int i,j;
  for (i = 0; i<=13; i++) {
    clearscr();
    cout << endl << endl << endl << endl << endl << endl << endl;
    cout << "              LOADING    " << endl;
    for (j=12-i ; j>=0; j--){
      cout << "            ▒▒▒▒▒▒▒▒▒▒▒    " << endl;
    }
    for (j=i; j>=0; j--){
      cout << "            ███████████    " << endl;
    }
    delay(200);
  }
  clearscr();
  cout << "                                        " << endl;
  cout << " 888     888 8888888 8888888b. 88888888888 888     888       d8888 888     " << endl;
  cout << " 888     888   888   888   Y88b    888     888     888      d88888 888     " << endl;
  cout << " 888     888   888   888    888    888     888     888     d88P888 888     " << endl;
  cout << " Y88b   d88P   888   888   d88P    888     888     888    d88P 888 888     " << endl;
  cout << "  Y88b d88P    888   8888888P      888     888     888   d88P  888 888     " << endl;
  cout << "   Y88o88P     888   888 T88b      888     888     888  d88P   888 888     " << endl;
  cout << "    Y888P      888   888  T88b     888     Y88b. .d88P d8888888888 888     " << endl;
  cout << "     Y8P     8888888 888   T88b    888       Y88888P  d88P     888 88888888 " << endl;
  cout << "                                       " << endl;
  cout << "                                       " << endl;
  cout << "          8888888888P  .d88888b.   .d88888b.             " << endl;
  cout << "                d88P  d88P   Y88b d88P   Y88b             " << endl;
  cout << "               d88P   888     888 888     888             " << endl;
  cout << "              d88P    888     888 888     888             " << endl;
  cout << "             d88P     888     888 888     888             " << endl;
  cout << "            d88P      888     888 888     888             " << endl;
  cout << "           d88P       Y88b. .d88P Y88b. .d88P             " << endl;
  cout << "          d8888888888   Y88888P     Y88888P              " << endl;
  cout << "                                        " << endl;
  cout << endl;
  cout << "            E N J O Y   Y O U R   T R I P             " << endl;
  delay(2000);
  clearscr();
};

void LoadMap(Zoo& zoo);

int main(){

  int i, j;
  static const int panjang = 25;
  static const int lebar = 50;
  Zoo Peta(panjang,lebar);
  LoadMap(Peta);
  LoadingScreen();
  return 0;
}


void LoadMap(Zoo& zoo){
  
  string line;
  ifstream file ("map.txt");
  
  if(file.is_open()){
    for(int i = 0; i < zoo.GetPanjang(); i++){
        string row;
        getline (file, row);
        if (file >> row){
          for (int j = 0; j != min<int>(zoo.GetLebar(),row.length()); ++j){
            zoo.SetCell(row[j],i,j);
        }
      } else break;
    }
  }
  file.close();
}
