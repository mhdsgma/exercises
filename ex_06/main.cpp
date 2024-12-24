#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

void nl(const char *inFileName, const char *outFileName) {
    ifstream infile(inFileName);
    ofstream outfile(outFileName, ios::app);

    int i = 0;
    string line;
    while (getline (infile,line)) {
        i++;
        outfile << setw(4)<< i << "\t" << line << endl;
    }
}


int main (int argc, const char * argv[]) {
    if (argc != 3) {
        cerr << "Usage:" << argv[0] << "[infile] [outfile]" << endl;
        return 1;
    }
    nl(argv[1], argv[2]);
    return 0;
}

