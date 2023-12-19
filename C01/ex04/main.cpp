# include <iostream>
# include <fstream> 

int main(int argc, char **argv)
{
    std::ofstream outFile;
    std::ifstream inFile;
    char          *name;

    if (argc != 4)
    {
        std::cerr << "./<program> <filename> <string1> <string2>\n";
        return (1);
    }
    inFile.open(argv[1]);
    if (inFile.is_open())
    {
        std::cerr << "Invalid filename\n";
        return (1);
    }
    outFile.open((std::string)argv[1] + ".replace");
    if (!outFile.is_open())
    {
        inFile.close();
        std::cerr << "Error during creation file\n";
        return (1);
    }
    while 

}