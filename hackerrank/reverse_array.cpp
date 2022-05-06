using namespace std;

/*
 * Complete the 'reverseArray' function below.
 *
 * The function is expected to return an INTEGER_ARRAY.
 * The function accepts INTEGER_ARRAY a as parameter.
 */

vector<int> reverseArray(vector<int> a) {
    stack<int> s;
    for (int num:a)
        s.push(num);
  
    for (int& num:a)
    {
        num = s.top();
        s.pop();
    }
    return a;
}
