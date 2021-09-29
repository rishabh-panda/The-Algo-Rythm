#include<bits/stdc++.h>
using namespace std;

int main() {
int arr[10] = {1,3,7,2,4,9,6,8,5,0};

for (int i = 0; i < 10; i++)
{
    arr[i] = ++arr[i];
}
cout<<"Incremented: \n";
for (int i = 0; i < 10; i++)
{
    cout<<arr[i]<<endl;
}

return 0;
}
