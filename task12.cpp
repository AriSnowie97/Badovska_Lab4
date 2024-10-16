//task 12
#include <iostream>
using namespace std;

int main() {
    int arr[] = {1,4,45,67,8,9,1,2,6,7,9,3,5};
    int unique[12];
    int uniqueN=0;
    for(int i=0; i < 12; i++){
        bool isCtrlC = false;
        for(int j =0; j<uniqueN; j++){
            if(arr[i]==unique[j]){
                isCtrlC = true;
                break;
                }
            }
        if(!isCtrlC){
            unique[uniqueN]=arr[i];
            uniqueN++;
            }
        }
        cout<<"Unique elements: \n";
        for(int i=0; i<uniqueN; i++){
            cout<<unique[i]<<"";
            }
        cout<<endl;

    return 0;
}
