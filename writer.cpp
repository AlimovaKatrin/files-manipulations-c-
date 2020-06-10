#include <iostream>
#include <fstream>

using namespace std;

int main()
{
  ofstream file;
  file.open("text.txt");
  file << "This is writefile program";
  file.close();
  return 0;
}
