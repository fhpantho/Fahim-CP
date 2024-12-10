#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        int longest_blank = 0;
        int  longest_blank_start = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] == 0)
            {
                longest_blank_start++;
            }
            else
            {
                if (longest_blank < longest_blank_start)
                {
                    longest_blank = longest_blank_start;
                }
                longest_blank_start = 0;
                
            }
        }
        int result = max(longest_blank, longest_blank_start);
        cout << result << endl;
        
    }
    return 0;
    
}