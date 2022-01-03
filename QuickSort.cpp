#include "QuickSort.h"
#include <vector>
#include <string>
#include <iostream>

using namespace std;

std::vector<int> QuickSort::sort(std::vector<int> list) {
    if (list.size() <=1)
    {
        return list;
    }

        vector<int> less;
        vector<int> greater;
        vector<int> P;
        if(list.size() >= 3)
        {
            int pivot = list.at(2);

            for(int i=0;i<2;i++)
            {
                if(list.at(i)<=pivot)
                {
                    less.push_back(list.at(i));
                }
                if(list.at(i)>pivot)
                {
                    greater.push_back(list.at(i));
                }
            }

            for(int i=3;i<list.size();i++)
            {
                if(list.at(i)<=pivot)
                {
                    less.push_back(list.at(i));
                }
                if(list.at(i)>pivot)
                {
                    greater.push_back(list.at(i));
                }
            }
        }

        else if(list.size() < 3)
        {
            int pivot = list.at(0);

            for(int i=1;i<list.size();i++)
                {
                    if(list.at(i)<=pivot)
                    {
                        less.push_back(list.at(i));
                    }
                    if(list.at(i)>pivot)
                    {
                        greater.push_back(list.at(i));
                    }
                }
            }

        vector<int> L = sort(less);

        for(int i=0;i<L.size();i++)
        {
            P.push_back(L.at(i));
        }

        if(list.size()>=3)
        {
            int pivot = list.at(2);
            //cout<<"Pivot is: "<<pivot<<endl;
            P.push_back(pivot);
        }
        else
        {
            int pivot = list.at(0);
            //cout<<"Pivot is: "<<pivot<<endl;
            P.push_back(pivot);
        }

        vector<int> G = sort(greater);

        for(int i=0;i<G.size();i++)
        {
            P.push_back(G.at(i));
        }

//        for(int i=0;i<P.size();i++)
//        {
//            cout<<"Vector P is: "<<P.at(i)<<endl;
//        }

        return P;

}