#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main ()
{
    srand (time (0));
    freopen ("questions.txt", "r", stdin);
    int n;
    cin >> n;
    vector <char> used (n, 0);
    vector <string> s (n);
    string t;
    getline (cin, t);

    for (int i = 0; i < n; i++)
        getline (cin, s [i]);

    fclose(stdin);

    for (int i = 0; i < n; i++)
    {
        int num = -1;

        while (num == -1 || used [num])
            num = rand () % n;

        cout << s [num] << endl;
        used[num] = 1;
    }

    return 0;
}
