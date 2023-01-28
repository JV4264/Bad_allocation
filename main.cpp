//Justin Vasquez
#include "tools.hpp"
  
int main(){
  banner();
  vector<int*> data;
  int counter;
  double num = 0;
  for(;;){
    int* bits = new int[10000000000];
    cout<<data.size()<<" "<<data.capacity()<<" "<< counter <<"\n";
    data.push_back(bits);
    num ++;
    counter = num/10;
  }
 bye();
}
/*
--------------------------------------------------------
    Program 7: Bad_alloc 
    Justin Vasquez
    CS 2212-01
    Mon Apr 18 2022 14:20:46
----------------------------------------------------------
*/
