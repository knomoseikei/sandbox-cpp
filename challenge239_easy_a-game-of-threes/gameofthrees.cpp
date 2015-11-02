#include iostream

using namespace std;

int main ()
{
    int n, mod;
    cin  n;
    n = 31337357;
    cout  n   ;
    while (n != 1){
        mod = n % 3;
        if (mod & 1){
            cout  -1 ;
            --n;
        } else if (mod == 2) {
            cout  1;
            ++n;
        } else {
            cout  0;
        }
        n = 3;
        cout  endl  n   ;
    }
    return 0;
}