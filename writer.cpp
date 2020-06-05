#include <iostream>
#include <fstream>

using namespace std;

int main(){

  ofstream file;
  file.open("text.txt");
  file << "This is writefile program";
  file.close();

  // cin.get();
  // return 0;
}