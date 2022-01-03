#include "BubbleSort.h"
#include <vector>
#include <iostream>
using namespace std;

std::vector<int> BubbleSort::sort(std::vector<int> list) {
    for(int i=0;i<list.size()-1;i++)
    {
        for(int j=0;j<list.size()-i-1;j++){
            if(list.at(j)>list.at(j+1))
            {
//                temp = list.at(i);
//                list.at(i) = list.at(j);
//                list.at(j) = temp;
            swap(list.at(j),list.at(j+1));

            }
        }
    }
    return list;
}