#include <iostream>
using namespace std;

int main()
{
    int a[100], count, i, sum = 0, allSum = 0;
    cout << "Enter number count: ";
    cin >> count;
    for (i = 0; i < count; i++) {
        cin >> a[i];
        sum += a[i];
    }
    
    for(i = 1; i <= count+1; i++){
        allSum += i;
    }
    
    cout<<"Missing number is " <<allSum - sum<<endl;
}
