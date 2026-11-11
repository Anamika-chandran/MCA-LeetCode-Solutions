int lengthOfLongestSubstring(char* s) {
    int i,j,max=0,count;
    for(i=0;s[i] != '\0';i++)
    {
        int visited[256] = {0};
        count = 0;
        for(j=i;s[j] != '\0'; j++)
        {
            unsigned char ch = s[j];
            if(visited[ch] == 1)
            break;
            visited[ch] = 1;
            count++;
        }
        if(count > max)
        max = count;
        }
        return max;
    }
