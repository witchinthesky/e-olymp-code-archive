#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector <int> st;
    string com;
    int size = 0;
    while(cin >> com){
        if (com == "push"){
            int n;
            cin >> n;
            st.push_back(n);
            cout << "ok\n";
        }
        else if (com == "pop"){
                if (st.empty()){
                    cout << "error\n";
                }
                else
            {   cout << st.back() << endl;
                st.pop_back();
            }

        }
        else if (com == "back"){
            if (st.empty()){
            cout << "error\n";
                }
            else {
                cout << st.back() << endl;
            }
        }
        else if (com == "size"){
            cout << st.size() << endl;
        }
        else if (com == "clear"){
            st.clear();
            cout << "ok\n";
        }
        else if (com == "exit"){
            cout << "bye" << endl;
            return 0;
        }

    }
}
