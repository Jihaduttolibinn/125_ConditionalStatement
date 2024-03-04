

#include <iostream>
using namespace std;
int main()
{
string status;
    srand(time(0));
    int nBilA, nBilB;


    nBilA = rand() % 11;
    nBilB = rand() % 11;

    if (nBilA == nBilB) {
        status = "bilangan A lebih besar dari bilangan A";
    }
    else if (nBilA > nBilB) {
        status = "bilangan A Lebih kecil dari bilangan B";
    }
    else {
        status = "Bilangann A lebih kecil dari Bilangan B";
    }

    cout << "Bilangan A =" << nBilA << endl;
    cout << "Bilangan B =" << nBilB << endl;
    cout << "statusnya =" << status << endl;
}


