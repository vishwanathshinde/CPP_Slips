#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    string line;
    // For writing text file
    // Creating ofstream & ifstream class object
    ifstream in_file{"original.txt"};
    ofstream out_file{"copy.txt"};

    if (in_file && out_file)
    {

        while (getline(in_file, line))
        {
            out_file << line << "\n";
        }

        cout << "Copy Finished \n";
    }
    else
    {
        // Something went wrong
        printf("Cannot read File");
    }

    // Closing file
    in_file.close();
    out_file.close();

    return 0;
}