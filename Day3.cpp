#include<iostream>
#include<unordered_map>

using namespace std;

class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char,int> maping = {
            {'I',1},
            {'V',5},
            {'X',10},
            {'L',50},
            {'C',100},
            {'D',500},
            {'M',1000}
        };
        char previous=' ';
        int ans=0;
        for(auto roman_num : s)
        {
            if(previous != ' ' && maping[previous]<maping[roman_num])
            {

                ans+=(maping[roman_num]-maping[previous]);
            }
            else{
                ans+=maping[roman_num];
            }
            previous=roman_num;
        }

        return ans;
    }
};

//Que 2


