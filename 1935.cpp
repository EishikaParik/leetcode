class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        int count=0;
        unordered_map<char,int>mp;
        for(char&ch:brokenLetters)
        {
            mp[ch]++;
        }
        string word;
        stringstream ss(text);
        while(ss>>word)
        {
            bool canType=true;
            for(char& ch:word)
            {
                if(mp.find(ch)!=mp.end())
                {
                    canType=false;
                }
            }
            if(canType)count++;
        }
        return count;

        
    }
};