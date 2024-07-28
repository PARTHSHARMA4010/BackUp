#include <bits/stdc++.h>
using namespace std;
#define int long long int

int32_t main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        int res = 0;
        int mask = pow(2,30);
        bool fa = true, fb = true, fc = true;
        while (mask)
        {
            if ((a & mask) == (b & mask) && (b & mask) == (c & mask))
            {
                mask >>= 1;
                continue;
            }
            if (fa && fb)
            {
                if ((a & mask) == (c & mask))
                {
                    res = -1;
                    fa = false;
                    fb = false;
                }
                else
                {
                    if ((a & mask) == (b & mask))
                    {
                        if ((a & mask))
                        {
                            res |= mask;
                        }
                        fb = false;
                    }
                    else
                    {
                        if ((a & mask))
                        {
                            res |= mask;
                        }
                        fa = false;
                    }
                }
            }
            else if (fa)
            {
                if ((a & mask) != (b & mask))
                {
                    if (a & mask)
                    {
                        res |= mask;
                    }
                    fa = false;
                }
            }
            else if (fb)
            {
                if ((b & mask) != (c & mask))
                {
                    if (b & mask)
                    {
                        res |= mask;
                    }
                    fb = false;
                }
            }
            else
            {
                break;
            }
            mask >>= 1;
        }
        cout << res << endl;
    }
    return 0;
}