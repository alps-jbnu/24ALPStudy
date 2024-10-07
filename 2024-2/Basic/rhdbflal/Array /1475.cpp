#include <iostream>
using namespace std;

int main()
{
    int num;
    cin >> num;

    int arr[10] = {0};
    for (int i = num; i > 0; i /= 10)
        arr[i % 10]++; //0부터 9 숫자 배열에 입력받은 수에서 숫자가 몇번씩 나왔는지 확인하기

    int max = 0;
    
    for (int i=0;i<10;i++)
        if(i !=6&&i !=9&& arr[i]>max) 
            max = arr[i];

    //6이랑 9의 갯수 확인하기
    int six_nine_sum = arr[6] + arr[9] + 1;
    if (six_nine_sum / 2 > max)
        max = (six_nine_sum) / 2;

    cout << max;

    return 0;
}
