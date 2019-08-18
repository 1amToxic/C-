#include<iostream>
using namespace std; //standard

class SinhVien{
private:
    int n;
    string name;
    string sub[10];
    double points[10];
public:
    void nhap(){
        cout<<"Nhap ten sinh vien:";
        getline(cin,name);
        cout<<"Nhap so mon hoc:";
        cin >> n;
        cin.ignore();
        for(int i = 1; i <= n; i++){
            cout<<"Nhap ten mon hoc thu "<<i<<" :";
            getline(cin,sub[i]);
            cout<<"Nhap diem cho mon hoc thu "<<i<<" :";
            cin >> points[i];
            cin.ignore();
        }
    }
    void in(){
        cout<<"Bang diem cua sinh vien "<<name<<endl;
        for(int i = 1; i <= n; i++){
            cout<<"Mon hoc "<<sub[i]<<" : "<<points[i]<<endl;
        }
    }
};

int main(){
    SinhVien sv[10];
    int n;
    cout<<"Nhap so sinh vien: ";cin >> n;cin.ignore();
    for(int i = 1; i <= n; i++){
        cout<<"Nhap thong tin cho sinh vien thu: "<<i<<endl;
        sv[i].nhap();
    }
    for(int i = 1; i <= n; i++){
        sv[i].in();
    }
}
