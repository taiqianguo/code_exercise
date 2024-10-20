#include <iostream>
#include <string>
#include <vector>
using std::string;
using std::vector;
string longestCommonPrefix(vector<string>& strs) {
    int v_len=strs.size();
    string prefix="";
    char prefix_temp='\0';

    while(true){
    prefix_temp=strs[0][prefix.size()]; 
    for(int i=1;i<=v_len-1;i++){
        if (prefix_temp!='\0' && strs[i][prefix.size()]==prefix_temp) {
            continue;
        }
        else{
            prefix_temp='\0';
            break;
        }
    }
    if(prefix_temp=='\0'){
        break;
    }
    else{
        prefix+=prefix_temp;
    }
    }
    return prefix;
}

int main(){
    std::vector<std::string> input={"LVIII","LVIV","LVVV"} ;
    std::string prefix=longestCommonPrefix(input);
    std::cout << prefix << std::endl;
    return 0;

}