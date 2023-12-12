#include <cstdlib>
#include <iostream>

using namespace std;
    
float fpersamaan3(int a,int b,int c){
    float hasil;
    hasil = ((b*b)-(4*a*c))/(2*a);
    return hasil;
}
int main (){
    int a,b,c;
    float hasil;
    cout<<"Masukan Nilai A :";
    cin>>a;
    cout<<"Masukan Nilai B :";
    cin>>b;
    cout<<"Masukan Nilai C :";
    cin>>c;
    hasil = fpersamaan3(a,b,c);
    cout<<"Hasil Persamaan 3= "<<hasil<<endl<<endl;  
    system("pause");
    return 0;  
}
