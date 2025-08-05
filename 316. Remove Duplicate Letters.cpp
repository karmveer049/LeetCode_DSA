Given a string s, remove duplicate letters so that every letter appears once and only once. You must make sure your result is the smallest in lexicographical order among all possible results.

 

Example 1:

Input: s = "bcabc"
Output: "abc"
Example 2:

Input: s = "cbacdcbc"
Output: "acdb"
 

Constraints:

1 <= s.length <= 104
s consists of lowercase English letters.

//CPP CODE

  string removeDuplicateLetters(string s) {
       vector<int> lastIndex(26);
       for(int i=0;i<s.size();i++){
        lastIndex[s[i]-'a']=i; //array lastIndex in which last index of the words in strings are being stored eg. lastIdex[0]=0 for i=0 and s[i]=a
       }
       vector<bool> seen(26,false);
       string result;
       for(int i=0;i<s.size();i++){
        char c=s[i];
        if(seen[c-'a']) continue;
        while(!result.empty()&& c<result.back()&& i<lastIndex[result.back()-'a']){
            seen[result.back()-'a']=false;
            result.pop_back();
        }
        result=result+c;
        seen[c-'a']=true;
       }
       return result;
    }
