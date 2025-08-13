Given a string s, return the longest palindromic substring in s.

 

Example 1:

Input: s = "babad"
Output: "bab"
Explanation: "aba" is also a valid answer.
Example 2:

Input: s = "cbbd"
Output: "bb"
 

Constraints:

1 <= s.length <= 1000
s consist of only digits and English letters.
  

//CPP CODE HERE
  string longestPalindrome(string s) {
        int n=s.size();
        int start=0,maxlen=1;
        for(int i=0;i<n;i++){
            for(int j=0;j<2;j++){
                int low=i;
                int high=i+j;
                while(low>=0&&high<n&&s[low]==s[high]){
                    int currlen= high-low+1;
                    if(maxlen<currlen){
                        maxlen=currlen;
                        start=low;
                    }
                    low--;
                    high++;
                }
            }
        }
        return s.substr(start, maxlen);
    }
