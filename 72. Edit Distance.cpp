//PROBLEM DESCRIPTION
Given two strings word1 and word2, return the minimum number of operations required to convert word1 to word2.

You have the following three operations permitted on a word:

Insert a character
Delete a character
Replace a character
 

Example 1:

Input: word1 = "horse", word2 = "ros"
Output: 3
Explanation: 
horse -> rorse (replace 'h' with 'r')
rorse -> rose (remove 'r')
rose -> ros (remove 'e')
Example 2:

Input: word1 = "intention", word2 = "execution"
Output: 5
Explanation: 
intention -> inention (remove 't')
inention -> enention (replace 'i' with 'e')
enention -> exention (replace 'n' with 'x')
exention -> exection (replace 'n' with 'c')
exection -> execution (insert 'u')
 

Constraints:

0 <= word1.length, word2.length <= 500
word1 and word2 consist of lowercase English letters.

//CPP CODE HERE
class Solution {
public:
    int minDistance(string word1, string word2) {
        int m=word1.length();
        int n=word2.length();
        vector<vector<int>> clist(m+1,vector<int>(n+1));
        for(int i=0;i<=m;i++){
            clist[i][0]=i;
        }
        for(int i=0;i<=n;i++){
            clist[0][i]=i;
        }
        for(int i=1;i<=m;i++){
            for(int j=1;j<=n;j++){
                if(word1[i-1]==word2[j-1]){
                    clist[i][j]=clist[i-1][j-1];
                }
                else {
                     clist[i][j]=1+min({clist[i][j-1],
                clist[i-1][j-1],
                clist[i-1][j]});
                }
            }
        }
        return clist[m][n];
    }
};
