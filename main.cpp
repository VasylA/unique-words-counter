#include <unordered_set>
#include <iostream>
#include <fstream>

int main(int argc, char *argv[])
{
  if(argc < 2)
  {
    std::cerr << "Text file path has not been provided!" << std::endl;
    std::cerr << "Usage: \t ./unique-words-counter <FILE_PATH>" << std::endl;
    return 1;
  }

  const char *filePath = argv[1];
  std::cout << "File path: \t" << filePath << std::endl;

  std::ifstream fileStream;
  fileStream.open(filePath);
  if(!fileStream.is_open())
  {
    std::cerr << "Unable to open the file: \t" << filePath << std::endl;
    return 2;
  }

  std::string tempStr;
  std::unordered_set<std::string> uniqueWords;
  while(fileStream >> tempStr)
    uniqueWords.insert(tempStr);

  std::cout << "Number of unique words: \t" << uniqueWords.size() << std::endl;

  return 0;
}
