
#include <iostream>
using namespace std;
int main()
{
    float nMat, nfisika, rerata;
    string status;

    cout << " Masukan nilai matematika ";
    cin >> nMat;
    cout << " Masukan nilai Fisika";
    cin >> nfisika;

    rerata = (nfisika + nMat) / 2;

    if (rerata >= 60) {
        status = "Lulus jalur rerata";
    }
    else if (nMat >= 70) {
        status = " lulus jalur matematika";
    }
    else
    {
        status = "tidak lulus";
    }
    cout << "Statusnya adalah " << status << endl;






}

