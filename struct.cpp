#include <iostream>

using namespace std;

struct car{
  string name;
  int speed;

};

int main(int argc, char *argv[]){

  cout << "number of arguments: " << endl;


  struct car t;
  t.name = "Toyota";
  t.speed = 60;

  cout << t.name << ":" << t.speed << "mph" << endl;

  struct car *car_array = new car[5];

  for(int i=0; i<5; i++){
    car_array[i].name ="Toyota" ;
    car_array[i].speed = i*10;
    cout << car_array[i].name << ":" << car_array[i].speed << "km/h"  << endl;
  }
}
