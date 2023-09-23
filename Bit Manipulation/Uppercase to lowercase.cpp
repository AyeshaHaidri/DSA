// uppercase to lowercase 
#include<bits/stdc++.h>
using namespace std;
int main()
{
    char c;
    cin>>c;
    cout << char(c | (1<<5)) << endl;
    return 0;
}

// Another method for converting uppercase to lowercase 
#include<bits/stdc++.h>
using namespace std;
int main()
{
    char c;
    cin>>c;
    cout << char(c | ' ') << endl;
    return 0;
}
