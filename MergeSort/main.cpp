#include <iostream>
#include "merge_sort.h"
#include <vector>
using namespace std;

void print(std::vector<int>& seq) {
    for (auto x: seq) {
        cout << x << " ";
    }

}

int main()
{
    vector<int> seq = {2, 7, 1, 8, 2, 8, 1};
    cout << "unsorted: ";
    print(seq);
    cout << endl;
    mergeSort(seq);
    cout << "sorted: ";
    print(seq);
    cout << endl;
//    vector<int> l = {1, 3, 5};
//    vector<int> r = {2, 4, 6};
//    vector<int> res;
//    merge(res, l, r);
//    print(res);

    return 0;
}

