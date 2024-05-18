#include<bits/stdc++.h>
using namespace std;

void testcase() 
{
    int n , k; cin >> n >> k;

    int rounds; cin >> rounds;

    int count = 1 , idx = 0;

    vector<int> fish_count(rounds + 1);

    int went = 0 , splash = 0;

    while(count <= rounds)
    {
        if(((k - 1) - idx + n) % n < count)
        {
            int temp_idx = k - 1;
            int temp_c = count - (((k - 1) - (idx) + n) % n + 1); 
            fish_count[count]++;
            if(temp_c >= n) fish_count[count] += (temp_c / n);
        }

        idx = (idx + count) % n;

        if(((k - 1) - idx + n) % n < count)
        {
            int temp_idx = k - 1;
            int temp_c = count - (((k - 1) - idx + n) % n + 1); 
            went++;
            if(temp_c >= n) went += (temp_c / n);
        }

        idx = (idx + count) % n;

        if(((k - 1) - idx + n) % n < count)
        {
            int temp_idx = k - 1;
            int temp_c = count - (((k - 1) - idx + n) % n + 1); 
            splash++;
            if(temp_c >= n) splash += (temp_c / n);
        }

        idx = (idx + count) % n;
        count++;

    }


    for(int i = 1 ; i <= rounds ; i++) cout << fish_count[i] << " "; cout << "\n";

    cout << went << " " << splash;

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
