#include <stdlib.h> 
#include <iostream>
using namespace std;
//�һҿ���@һ������
/*
    ˼·���ټ���ɳ©������ �ڴ�ӡɳ©
*/
int main(){
    int N;
    char x;
    cin >> N >> x;

    int w = -1, j;
    int sum = -1;
    for (int i = 1; sum <= N;i+=2){
        w++;
        j = i - 2;
        sum += (2 * i);
    }
    int res = N - sum + 2 * (j+2);
    int t = 0;
    //w��������j���������
    for (int m = 1; m <= w * 2 - 1; m++, j -= 2)
    {
        if (j >= 1){
            t++;
        }
        else
        {
            t--;
            if(j == -1)
                j -= 2;
        }
        for (int k = 1; k <= t - 1; k++)
        {
            cout << ' ';
        }

        for (int k = 1; k <= abs(j); k++)
        {
            cout << x;
        }
        cout << endl;
    }
    cout << res;
    system("pause");
    return 0;
}

