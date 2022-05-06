using namespace std;


/*
 * Complete the 'dynamicArray' function below.
 *
 * The function is expected to return an INTEGER_ARRAY.
 * The function accepts following parameters:
 *  1. INTEGER n
 *  2. 2D_INTEGER_ARRAY queries
 */

vector<int> dynamicArray(int n, vector<vector<int>> queries)
{
    vector<vector<int>> arr(n);
    vector<int> answers;
    int lastAnswer{0};
    int idx, x, y;
    for (auto query:queries)
    {
        x = query[1];
        y = query[2];
        idx = (x^lastAnswer)%n;
        if (query[0] == 1) arr[idx].push_back((y));
        else
        {
            lastAnswer = arr[idx][y%arr[idx].size()];
            answers.push_back(lastAnswer);
        }
    }
    return answers;
}
