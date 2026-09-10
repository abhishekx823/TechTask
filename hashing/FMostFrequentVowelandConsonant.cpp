// You are given a string s consisting of lowercase English letters ('a' to 'z').

// Your task is to:

// Find the vowel (one of 'a', 'e', 'i', 'o', or 'u') with the maximum frequency.
// Find the consonant (all other letters excluding vowels) with the maximum frequency.
// Return the sum of the two frequencies.

// Note: If multiple vowels or consonants have the same maximum frequency, you may choose any one of them. If there are no vowels or no consonants in the string, consider their frequency as 0.

// The frequency of a letter x is the number of times it occurs in the string.


class Solution {
    const static int N=123;
    int freq[N];
public:
    int maxFreqSum(string s) {
        for(int i=0;i<s.size();i++)
        {
            freq[s[i]]++;
        }
        int max_v=0,max_c=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
            {
                if(max_v<freq[s[i]])
                {
                    max_v=freq[s[i]];
                }
            }
            else{
                if(max_c<freq[s[i]])
                {
                    max_c=freq[s[i]];
                }
            }
        }
        return max_v+max_c;
    }
};
