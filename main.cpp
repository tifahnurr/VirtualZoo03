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
  
  int x,y;
  
  for (int i = 0; i < panjang; i++){
    for (int j = 0; j < lebar; j++){
      cout << Peta[i][j];
    }
    cout << endl;
  }
  
  initscr();
  getmaxyx(stdscr,y,x);
  start_color();
  
  init_pair(1, COLOR_WHITE, COLOR_RED);
  init_pair(2, COLOR_WHITE, COLOR_GREEN);
  init_pair(3, COLOR_WHITE, COLOR_YELLOW);
  init_pair(4, COLOR_WHITE, COLOR_BLUE);
  init_pair(5, COLOR_WHITE, COLOR_MAGENTA);
  init_pair(6, COLOR_WHITE, COLOR_CYAN);
  init_pair(7, COLOR_WHITE, COLOR_WHITE);
  
  for (int i = 1; i <= panjang+1; i++){
	for (int j = 1; j <= lebar; j++){
	  switch (Peta[i-1][j-1]) {
        case ('-') :
		attron(COLOR_PAIR(3));
        mvprintw(i,j," ");
        refresh(); attroff(COLOR_PAIR(3)); break;
        case ('W') :
        attron(COLOR_PAIR(6));
        mvprintw(i,j,"X");
        refresh(); attroff(COLOR_PAIR(6)); break;
        case ('F') :
        attron(COLOR_PAIR(5));
        mvprintw(i,j,"X");
        refresh(); attroff(COLOR_PAIR(5)); break;
        case ('L') :
        attron(COLOR_PAIR(2));
        mvprintw(i,j,"X");
        refresh(); attroff(COLOR_PAIR(2)); break;
        case ('w') :
        attron(COLOR_PAIR(6));
        mvprintw(i,j," ");
        refresh(); attroff(COLOR_PAIR(6)); break;
        case ('f') :
        attron(COLOR_PAIR(5));
        mvprintw(i,j," ");
        refresh(); attroff(COLOR_PAIR(5)); break;
        case ('l') :
        attron(COLOR_PAIR(2));
        mvprintw(i,j," ");
        refresh(); attroff(COLOR_PAIR(2)); break;
        case ('P') :
        attron(COLOR_PAIR(7));
        mvprintw(i,j," ");
        refresh(); attroff(COLOR_PAIR(7)); break;
        case ('R') :
        attron(COLOR_PAIR(1));
        mvprintw(i,j," ");
        refresh(); attroff(COLOR_PAIR(1)); break;
        case ('E') :
        attron(COLOR_PAIR(3));
        mvprintw(i,j," ");
        refresh(); attroff(COLOR_PAIR(3)); break;
        case ('X') :
        attron(COLOR_PAIR(3));
        mvprintw(i,j," ");
        refresh(); attroff(COLOR_PAIR(3)); break;
        }
      }
	}
  cout << endl;
  getch();
  endwin();
  
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
