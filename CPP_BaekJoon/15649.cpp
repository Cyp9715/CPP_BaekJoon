#include <iostream>
#include "15649.hpp"

#define MAX 9
using namespace std;

int n, m;
int arr[MAX] = { 0, };
bool visited[MAX] = { 0, };

void dfs(int cnt)
{
    /* 
    * cnt == m �϶� ����ϴ� ���� 
    * cnt �� m �� ���ٴ°��� �� ���� ���� ������ �̹� arr �� ��� ����Ǿ��ִٴ� �ǹ�. 
    * ���� [4,4] matrix ��� 4������ arr ���� ä�����ٸ� ��µȴ�.
    */
    if (cnt == m)
    {
        for (int i = 0; i < m; ++i)
            cout << arr[i] << ' ';
        cout << '\n';
        return;
    }

    /*
    * ����Լ��� �������� DFS ����, 
    * 
    * visited ������ visited �Ǿ����� Ȯ����.
    * arr[cnt] �� i ���� �Ҵ���.
    * dfs �� ����Լ�����.
    */

    for (int i = 1; i <= n; i++)
    {
        if (visited[i] == false)
        {
            visited[i] = true;
            arr[cnt] = i;
            dfs(cnt + 1);
            visited[i] = false;
        }
    }
}

void Execute_15649()
{
    cin >> n >> m;
    dfs(0);
}
