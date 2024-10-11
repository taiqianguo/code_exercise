#include <iostream>
#include <string>
#include <map>

int roman2int(std::string s){
    int len=s.length();
    std::map<char,int> rom2int;
    rom2int['I']=1;
    rom2int['V']=5;
    rom2int['X']=10;
    rom2int['L']=50;
    rom2int['C']=100;
    rom2int['D']=500;
    rom2int['M']=1000;
    int accum_num=rom2int[s[len-1]];
    
    for(int i=(len-2);i>=0;i--){ // here important note is that char is from big endian
        if(rom2int[s[i]]>=rom2int[s[i+1]])
           { 
            accum_num+=rom2int[s[i]];
           }
        else
            {
            accum_num-=rom2int[s[i]];
            }
    }
    return accum_num;

}

int main(){
    std::string input="LVIII" ;
    int number=roman2int(input);
    std::cout << number << std::endl;
    return 0;

}
