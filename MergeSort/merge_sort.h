#ifndef MERGE_SORT
#define MERGE_SORT
#include <vector>


template<typename T>
void merge(std::vector<T>& array, std::vector<T> left, std::vector<T> right) {
    array.clear();
    auto lsize = left.size();
    auto rsize = right.size();
    unsigned int i=0, j=0;
    while (i < lsize && j < rsize) {
        if (left[i] < right[j]) {
            array.push_back(left[i]);
            ++i;
        }else {
            array.push_back(right[j]);
            ++j;
        }
    }
    for(; i<lsize; ++i)
        array.push_back(left[i]);
    for(; j<rsize; ++j)
        array.push_back(right[j]);
}


template<typename T>
void mergeSort(std::vector<T>& seq) {
    auto n = seq.size();
    if (n > 1) {
        auto start = seq.begin();
        auto end = seq.end();
        auto middle = start + n / 2;
        std::vector<T> left(start, middle);
        std::vector<T> right(middle, end);
        mergeSort(left);
        mergeSort(right);
        merge(seq, left, right);
    }
}


#endif // MERGE_SORT
