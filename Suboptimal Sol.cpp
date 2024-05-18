#include<bits/stdc++.h>
using namespace std;

void testcase() 
{
    int n , k; cin >> n >> k;

    int rounds; cin >> rounds;

    vector<vector<string>> answer(n);

    int idx = 0 , count = 1;

    while(rounds--)
    {
        for(int i = 0; i < count ; i++)
        {
            string temp = to_string(count);
            temp += " Fish";
            answer[idx].push_back(temp);
            idx = (idx + 1) % n;
        }

        for(int i = 0 ; i < count ; i++)
        {
            answer[idx].push_back("Went In");
            idx = (idx + 1) % n;
        }

        for(int i = 0 ; i < count ; i++)
        {
            answer[idx].push_back("Splash");
            idx = (idx + 1) % n;
        }

        count++;
    }

    for(auto &i : answer[k - 1]) cout << i << "\n";
}


int main() 
{

    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

    #ifndef ONLINE_JUDGE
            freopen("input.txt", "r", stdin);
            freopen("output.txt", "w", stdout);
        #endif

    int tc = 1;
    //cin >> tc;
    while(tc--) testcase();

    return 0;
}
