class Solution {
public:
    string removeDuplicates(string s) {
        string temp = "";
        int index = 0;

        while(index < s.length()){
            // same wala case 
            // temp ka rightmost character and string s ka current character is same
            if(temp.length() > 0 && temp[temp.length()-1] == s[index]){
                // pop from temp string
                temp.pop_back();
            }
            else {
                //push 
                temp.push_back(s[index]);
            }
            index++;
        }
        return temp;
    }
};