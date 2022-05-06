using namespace std;

/*
 * Complete the 'camelcase' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts STRING s as parameter.
 */

int camelcase(string s)
{
    int num_words{0};
    for(auto c:s)
        if(isupper(c)) num_words++;
    return ++num_words;
}
