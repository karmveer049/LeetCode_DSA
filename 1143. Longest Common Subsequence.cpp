//PROBLEM DESCRIPTION
Given two strings text1 and text2, return the length of their longest common subsequence. If there is no common subsequence, return 0.

A subsequence of a string is a new string generated from the original string with some characters (can be none) deleted without changing the relative order of the remaining characters.

For example, "ace" is a subsequence of "abcde".
A common subsequence of two strings is a subsequence that is common to both strings.

 

Example 1:

Input: text1 = "abcde", text2 = "ace" 
Output: 3  
Explanation: The longest common subsequence is "ace" and its length is 3.
Example 2:

Input: text1 = "abc", text2 = "abc"
Output: 3
Explanation: The longest common subsequence is "abc" and its length is 3.
Example 3:

Input: text1 = "abc", text2 = "def"
Output: 0
Explanation: There is no such common subsequence, so the result is 0.
 

Constraints:

1 <= text1.length, text2.length <= 1000
text1 and text2 consist of only lowercase English characters.

//CPP CODE HERE
public:
    int lcsRec(int m,int n, string &text1, string &text2,vector<vector<int>>clist){
        if(m==0||n==0) return 0;
        if(clist[m][n]!=-1) return clist[m][n];
        if(text1[m-1]==text2[n-1]) return clist[m][n]=1+
        lcsRec(m-1,n-1,text1,text2,clist);
        return clist[m][n]=max({lcsRec(m,n-1,text1,text2,clist),
        lcsRec(m-1,n,text1,text2,clist)});
    }
    int longestCommonSubsequence(string text1, string text2) {
        int m=text1.length();
        int n=text2.length();
        vector<vector<int>> clist(m+1,vector<int>(n+1,-1));
        return lcsRec(m,n,text1,text2,clist);
    }
