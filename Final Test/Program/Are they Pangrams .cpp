//C++14
//Function
//Are They pangrams
string isPangram(vector<string> pangram) {
    string result="";
    for(auto i=0;i<pangram.size();i++)
    {
        string s=pangram[i];
        sort(s.begin(), s.end());
        int pos=0, flag=0;
        for(int j=97;j<=122;j++)
        {
            flag=0;
            for(int k=pos;k<s.length();k++)
            {
                if(s[k]==(char)j)
                {
                    flag=1;
                    pos=k+1;
                    break;
                }
            }
            if(flag==0)
            break;
        }
        if(flag==0)
            result= result+"0";
        else {
        result= result+"1";
        }
    }
    return result;
}
