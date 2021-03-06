#include <iostream>

using namespace std;

int main(){
    string line;
    int proc, read, clocks;

    while (getline(cin, line)){
        clocks = 0;
        read = 0;
        cin >> proc;

        for (size_t i = 0; i < line.length(); ++i){
            if (line.at(i) == 'W'){
                clocks++;
            } else {
                read++;
            }

            if (line.at(i) == 'W' || i == line.length() - 1){
                if (read){
                    clocks += read / proc;
                    if (read % proc != 0) clocks++;
                    read = 0;    
                }
            }
        }

        cout << clocks << endl;

        getline(cin, line); // it's a hack
    }
    return 0;
}
