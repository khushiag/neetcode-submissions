class Solution {
public:
    string encode(vector<string>& strs) {
        //return if string is empty
        if(strs.empty()) return "";

        //push all the sizes of each string in an array
        vector<int> sizes;
        string result;
        for(string s : strs){
            sizes.push_back(s.size());
        }
        
        //each size to be converted into string and pushed into result
        for(int sz : sizes){
            result.append(to_string(sz));
            result.push_back(',');
        }

        //at the end of sizes add #
        result.push_back('#');

        //after hash, start adding the strings into result
        for(string s : strs){
            result.append(s);
        }
        return result;
    }


    vector<string> decode(string s) {
        //return if empty
        if(s.empty()) return {};

        vector<string> result;
        vector<int>sizes;

        //sizes end at #
        int i=0;
        while(s[i] != '#'){
            int j=i;
            //sizes are separated by commas, if j is comma then j++
            while(s[j] != ','){
                j++;
            }
            //substring from i to j-i
            sizes.push_back(stoi(s.substr(i,j-i)));
            i=j+1;
        }
        i++;
        //per size, push_back into result
        for(int sz : sizes){
            result.push_back(s.substr(i, sz));
            i+=sz;
        }
        return result;
    }
};
