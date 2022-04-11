#include <fstream>
#include <iostream>
#include <string>

using std::cerr;
using std::cout;
using std::endl;
using std::getline;
using std::ifstream;
using std::ios;
using std::ofstream;
using std::size_t;
using std::string;

int main(int argc, char **argv) {
    if (argc != 4) {
        cerr << "./sed <filename> <s1> <s2>" << endl;

        return 1;
    }

    string infile = argv[1];
    ifstream fin;
    fin.open(infile, ios::in);

    if (!fin) {
        cerr << "error: unable to open " << infile << endl;

        return 2;
    }

    string outfile = infile + ".replace";
    ofstream fout;
    fout.open(outfile, ios::out | ios::trunc);

    if (!fout) {
        cerr << "error: unable to open " << outfile << endl;

        return 3;
    }

    string tmp = "";
    string input = "";

    while (!fin.eof()) {
        getline(fin, tmp);
        input += tmp;

        if (!fin.eof())
            input += '\n';
    }

    fin.close();
    string s1 = argv[2];
    string s2 = argv[3];
    size_t pos = input.find(s1);

    while (pos != string::npos) {
        input.erase(pos, s1.length());
        input.insert(pos, s2);
        pos = input.find(s1, pos + s2.length());
    }

    fout << input;
    fout.close();

    return 0;
}