// Ascii value  A->65(1000001) a->97 (1100001)
// Ascii value  B->66(1000010) b->98 (1100010)
// .
// .
// .
// Ascii value  Z->90(1011010) z->122(1111010)
// only the 5th bit differs in each case 

// lowercase to uppercase
#include<bits/stdc++.h>
using namespace std;
int main()
{
    char c;
    cin>>c;
    cout << char(c & ~(1<<5)) << endl;
    return 0;
}
 
// Ascii value of '_' underscore is 95 (01011111) 
// Ascii value of ' ' space is 32 (00100000)

// Another method for converting lowercase to uppercase 
#include<bits/stdc++.h>
using namespace std;
int main()
{
    char c;
    cin>>c;
    cout << char(c & '_') << endl;
    return 0;
}
