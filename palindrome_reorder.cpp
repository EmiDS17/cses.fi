#include <iostream>
using namespace std;

//Me ayude para lograr la solucion
int main(){

    string s;
    cin >> s;

    int n = s.size();
    int freq[26] = {0};

    for(int i=0; i<n; i++){
        freq[s[i]-'A']++;
    }

    int odd = 0;
    for(int i=0; i<26; i++){
        if(freq[i]%2 == 1){
            odd++;
        }
    }

    if(odd > 1){
        cout << "NO SOLUTION" << endl;
        return 0;
    }

    string ans = "";
    for(int i=0; i<26; i++){
        if(freq[i]%2 == 0){
            for(int j=0; j<freq[i]/2; j++){
                ans += (char)('A'+i);
            }
        }
    }

    cout << ans;

    for(int i=0; i<26; i++){
        if(freq[i]%2 == 1){
            for(int j=0; j<freq[i]; j++){
                cout << (char)('A'+i);
            }
        }
    }

    int len = ans.size();
    for(int i=len-1; i>=0; i--){
        cout << ans[i];
    }

    return 0;
}