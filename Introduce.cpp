#include <iostream>
using namespace std;

class mahasiswa{
public:
int nim;
string nama;
float nilai;

void print_data(){
    cout << "NIM = " << nim << endl;
    cout << "Nama = " << nama << endl;
    cout << "Nilai = " << nilai << endl;
}
};

int main(){