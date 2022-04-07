#include "Algorithm.h"
#include "Sort.h"
#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<string> data;
    Algorithm *a = new Sort();

    data.push_back("10random.txt");
    data.push_back("1000random.txt");
    data.push_back("10000random.txt");
    data.push_back("100000random.txt");
    data.push_back("10reverse.txt");
    data.push_back("1000reverse.txt");
    data.push_back("10000reverse.txt");
    data.push_back("100000reverse.txt");
    data.push_back("1030prandom.txt");
    data.push_back("100030prandom.txt");
    data.push_back("1000030prandom.txt");
    data.push_back("10000030prandom.txt");
    data.push_back("10unique.txt");
    data.push_back("1000unique.txt");
    data.push_back("10000unique.txt");
    data.push_back("100000unique.txt");
      //loads all of the filenames into vector

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < data.size(); j++) {
            a->select(i);
              //selects algorithm
            a->load(data[j]);
              //loads file
            a->execute();
              //executes algorithm with selected file
            //cout << data[j];
            a->stats();
              //prints stats
            a->save();
              //saves to output file
        }  //runs process with each algorithm
    }  //executes all search algorithms, prints files, & prints stats

    return 0;
}

