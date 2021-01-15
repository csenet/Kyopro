#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    {
        int n;
        cin >> n;
        map<pair<string, int>, int> data;
        for (int i = 0; i < n; i++)
        {
            string name = "";
            int score;
            cin >> name >> score;
            data.insert(make_pair(make_pair(name, score), i));
        }
        //sort(data.begin(), data.end());
        for (auto itr = data.begin(); itr != data.end(); ++itr)
        {
            std::cout << "key = " << itr->first             // キーを表示
                      << ", val = " << itr->second << "\n"; // 値を表示
        }
        return 0;
    }
}