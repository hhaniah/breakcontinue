#include <iostream>
using namespace std;

int main(){
    char inputku;
    cout << "Ketik n untuk berhenti" << endl;

    while(1){
        cin >> inputku;
        if(inputku=='n')break;
        cout << "____" << endl;
    }
    cout << "====" << endl;
    cout << "selesai" << endl;

    for(int i=0;i<5;i++){
	    cout << endl << "i=" << i;
	    if(i%2==0)continue;
	    cout << "====tidak ada continue";
    }

    cout << endl << "____" << endl;
    cout << "selesai" << endl;
    return 0;
}
