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
  // return 0;
}

// #include <iostream>
// #include <fstream>
// #include <string>
// using namespace std;

// int main () {
//   // Create a text string, which is used to output the text file
//   string myText;

//   // Read from the text file
//   ifstream MyReadFile("text.txt");

//   // Use a while loop together with the getline() function to read the file line by line
//   while (getline (MyReadFile, myText)) {
//     // Output the text from the file
//     cout << myText;
//   }

//   // Close the file
//   MyReadFile.close();
// }