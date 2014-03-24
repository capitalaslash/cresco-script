#include <iostream>
#include <fstream>

int main(int argc, char* argv[])
{
  if(argc > 1)
  {
    std::cout << "input file = " << argv[1] << std::endl;
    return 0;
  }
  else
  {
    std::cerr << "no input file!" << std::endl;
    return 1;
  }
}