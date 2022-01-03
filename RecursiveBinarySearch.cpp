#include "RecursiveBinarySearch.h"
#include <vector>
#include <iostream>

using namespace std;

bool RecursiveBinarySearch::search(std::vector<int> array, int num) {

//    int mid = array.size()/2;
//    cout<<"Mid is: "<<mid<<endl;
//    if(mid<0)
//    {
//        return false;
//    }
//
//    else if(array.at(mid) == num)
//    {
//        return true;
//    }
//
//    vector<int> sub1;
//    vector<int> sub2;
//    for(int i=0;i<mid;i++)
//    {
//        sub1.push_back(array.at(i));
//    }
//    cout<<"sub1 size is: "<<sub1.size()<<endl;
//
//    for(int i=mid+1;i<array.size();i++)
//    {
//        sub2.push_back(array.at(i));
//    }
//
//    cout<<"sub2 size is: "<<sub2.size()<<endl;
//
//    return search(sub1,num)+search(sub2,num);

    if(array.size() > 0)
    {
        int mid = array.size()/2;
        //cout<<"Mid is: "<<mid<<endl;

        if(array.at(mid) == num)
        {
            return true;
        }
        if(array.at(mid) > num)
        {
            vector<int> greater;
            for(int i=0;i<mid;i++)
            {
                greater.push_back(array.at(i));
            }

            return search(greater,num);
        }
        if(array.at(mid) < num)
        {
            vector<int> less;
            for(int i=mid+1;i<array.size();i++)
            {
                less.push_back(array.at(i));
            }
            return search(less,num);
        }

    }
    else
    {
        return false;
    }
}