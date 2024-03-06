#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <fstream>
#include <sstream>


using namespace std;


/*
 * Complete the 'findNumber' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts following parameters:
 *  1. INTEGER_ARRAY arr
 *  2. INTEGER k
 */

string findNumber(vector<int> arr, int k) {
    string result = "NO";
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] == k) {
            result = "YES";
            break;
        }

        if (i == arr.size() - 1) {
            result = "NO";
            break;
        }
    }
    return result;
}
// dados 2 enteros imprime los numeros impares entre ellos
vector<int> oddNumbers(int l, int r) {
    vector<int> odd;
    for (int i = l; i <= r; i++) {
        if (i % 2 != 0) {
            odd.push_back(i);
        }
    }
    return odd;
}

int main(){
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int k = 0;
    cout << findNumber(arr, k) << endl;


    vector<int> odd = oddNumbers(2, 5);
    cout << "Impares: ";

    return 0;
}
