#include <iostream>
#include <algorithm>

using namespace std;

string start_White[8] = { "WBWBWBWB",
                          "BWBWBWBW",
                          "WBWBWBWB",
                          "BWBWBWBW",
                          "WBWBWBWB",
                          "BWBWBWBW",
                          "WBWBWBWB",
                          "BWBWBWBW" };
string start_Black[8] = { "BWBWBWBW",
                          "WBWBWBWB",
                          "BWBWBWBW",
                          "WBWBWBWB",
                          "BWBWBWBW",
                          "WBWBWBWB",
                          "BWBWBWBW", 
                          "WBWBWBWB" };
string board[50] = { "", };

int start_White_cnt(int n, int m)
{
    int cnt = 0;

    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            if (board[n + i][m + j] != start_White[i][j]) {
                cnt++;
            }
        }
    }

    return cnt;
}

int start_Black_cnt(int n, int m)
{
    int cnt = 0;

    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            if (board[n + i][m + j] != start_Black[i][j]) {
                cnt++;
            }
        }
    }

    return cnt;
}

int main() 
{
    int N = 0, M = 0, cnt = 0, minimum = 0, result = 32;

    cin >> N >> M;
    for (int i = 0; i < N; i++) {
        cin >> board[i];
    }
    for (int i = 0; i + 8 <= N; i++) {
        for (int j = 0; j + 8 <= M; j++) {
            minimum = min(start_White_cnt(i, j), start_Black_cnt(i, j));
            if (minimum < result) {
                result = minimum;
            }
        }
    }
    cout << result;

    return 0;
}