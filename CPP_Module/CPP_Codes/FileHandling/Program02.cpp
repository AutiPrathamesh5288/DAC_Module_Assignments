#include<iostream>
#include<fstream>

using namespace std;

int main() {
    string name;
    cout<<"Enter file name : ";
    cin>>name;

    ofstream fout;

    fout.open(name);

    if(fout.fail()){
        cout<<"error not opened"<<endl;
    }
    else{
        cout<<"opened";
        // fout<<"Hello one";
        string data="HEllo how worlsd";
        fout.write(data.c_str(), data.length());

    }
    fout.close();

    // ifstream fin;

    // fin.open(name);

    // if(fin.is_open()){
    //     cout<<"Openeed"<<endl;
    //     string data;
    //     while (getline(fin,data))
    //     {
    //         cout<<data;
    //     }

    //     fin.close();
        
    // }
    // else{
    //     cout<<"Unable to opened";
    // }
    


}

