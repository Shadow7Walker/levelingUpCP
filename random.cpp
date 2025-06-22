#include<iostream>
#include <random> 
using namespace std;

int main(){
random_device rd;
default_random_engine source(rd());
uniform_int_distribution<int> sampler(0,10);
cout<<rd()<<endl;
cout<<source()<<endl;
cout<<sampler(source)<<endl;
}