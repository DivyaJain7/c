#include <bits/stdc++.h>
using namespace std;

class cars{
  public:
  static void display(){
  static int no=2;
  cout<<"number is: "<<no<<endl;
  }
};

int main() {
  cars::display();
  return 0;
}