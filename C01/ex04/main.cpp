# include <iostream>
# include <fstream> 
# include <string>
#include <sstream>

void write_word(std::string str, std::ofstream   &outFile, char **argv)
{
    std::istringstream iss(str);
    std::string word;
    while (iss >> word)
    {
        if (word == argv[2])
            outFile << argv[3];
        else
            outFile << word;
        if (!(iss >> std::ws).eof())
            outFile << ' ';
    }
    outFile << '\n';
}

// https://math.hws.edu/eck/cs225/s03/files_and_strings.html
int main(int argc, char **argv)
{
    std::ofstream   outFile;
    std::ifstream   inFile;
    std::string     str;
    std::string     strConcat(argv[1]);

    if (argc != 4)
    {
        std::cerr << "./<program> <filename> <string1> <string2>\n";
        return (1);
    }
    inFile.open(argv[1]);
    if (!inFile.is_open())
    {
        std::cerr << "Invalid filename\n";
        return (1);
    }
    strConcat += ".replace";
    outFile.open(strConcat.c_str());
    if (!outFile)
    {
        inFile.close();
        std::cerr << "Error during creation file\n";
        return (1);
    }
    std::getline(inFile, str, '\n');
    while (inFile) {
        write_word(str, outFile, argv);
        std::getline(inFile,str);  
    }
    inFile.close();
    outFile.close();
}