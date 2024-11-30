#include <iostream>
#include <windows.h>
#include <ctime>


using namespace std;

void display_time (string h,string m,string s) {
int hour = stoi(h);
int minute = stoi(m);
int second = stoi(s);

    while(true) {
      system("cls");

     cout <<" TIME : " << "\n" << "          " <<  hour << ":" << minute << ":" << second <<endl;
     Sleep(1000);
     second++;

     if ( second > 59 ) {
        second = 0;
        minute++;
     }
      if ( minute > 59 ) {
        minute = 0;
        hour++;
    }
     if ( hour > 23 ) {
         hour = 0;

       }
   }
}
void get_time (){
      string info ;
long long now = time(0);
char *dt = ctime(&now);
    info = dt;

    int index = info.find(":");

    string hour ;
    hour = info[index-2];
    hour += info[index-1];

    string minute ;
    minute = info[index+1];
    minute += info[index+2];

    string second ;
    second = info[index+4];
    second += info[index+5];

display_time (hour ,minute ,second);


}
int main() {

get_time();

return (0);
}
