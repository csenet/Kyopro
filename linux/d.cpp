#include <iostream>
#include <vector>
#include <string>
using namespace std;

int ctoi(const char c)
{
    switch (c)
    {
    case '0':
        return 0;
    case '1':
        return 1;
    case '2':
        return 2;
    case '3':
        return 3;
    case '4':
        return 4;
    case '5':
        return 5;
    case '6':
        return 6;
    case '7':
        return 7;
    case '8':
        return 8;
    case '9':
        return 9;
    default:
        return -1;
    }
}

int main(void)
{
    string input = "";
    int limit = 0;
    int n = 0;
    cin >> n;
    cin >> limit;
    cin >> input;
    int con_times = 0; //同じが何回続くか？
    for (int i = 0; i < limit; i++)
    {
        con_times = 0;
        vector<int> now_data(3);
        vector<int> begin(n);
        vector<int> end(n);
        vector<int> time(n);
        int back = ctoi(input[0]);
        int id = 0;
        for (int j = 1; j < n; j++)
        {
            int now = ctoi(input[j]);
            if (back == 0 && now == 0)
            {
                if (now_data[2] == 0)
                {
                    now_data[0] = j - 1;
                    now_data[2]++;
                }
                now_data[2]++;
            }
            else
            {
                if (now_data[2] != 0)
                {
                    now_data[1] = j;
                    begin[id] = now_data[0];
                    end[id] = now_data[1];
                    time[id] = now_data[2];
                    id++;
                    now_data[0] = 0;
                    now_data[1] = 0;
                    now_data[2] = 0;
                }
                else if (now == 0)
                {
                    now_data[0] = j;
                    now_data[1] = j;
                    now_data[2] = 1;
                    begin[id] = now_data[0];
                    end[id] = now_data[1];
                    time[id] = now_data[2];
                    id++;
                    now_data[0] = 0;
                    now_data[1] = 0;
                    now_data[2] = 0;
                }
            }
            back = now;
        }
        int max = time[0];
        int max_id = 0;
        for (int i = 1; i <= id; i++)
        {
            if (time[i] > max)
            {
                max = time[i];
                max_id = i;
            }
        }
        //cout << "最大:" << max << "\n";
        for (int i = begin[max_id]; i < end[max_id]; i++)
        {
            int here = ctoi(input[i]);
            if (here > 0)
            {
                input[i] = '0';
            }
            else
            {
                input[i] = '1';
            }
        }
    }
    int count = 0;
    int max = 0;
    for (int i = 0; i < n; i++)
    {
        if (input[i] == '1')
            count++;
    }
    cout << input << "\n";
    cout << count << endl;
    return 0;
}