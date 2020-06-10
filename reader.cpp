#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
  string text;
  ifstream File;
  File.open("text.txt");
  while (getline (File, text))
  {
    cout << text;
  }
  File.close();
}
