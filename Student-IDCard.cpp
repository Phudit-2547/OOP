#include<iostream>
using namespace std;

class IDCard{
private:
    string id;
    string name;
    string fam_name;
    string bd;
public:
    void set_data(string id,string name,string fam_name,string bd);
    void print_all_data();
};
void IDCard::set_data(string id, string name, string fam_name, string bd){
    this->id = id;
    this->name = name;
    this->fam_name = fam_name;
    this->bd = bd;
}
void IDCard::print_all_data(){
    cout << id << " " << name << " " << fam_name << " " << bd << endl;
}
int main() {
    IDCard Arisu;
    Arisu.set_data("0000","Arisu","Tendou","25/03/2021");
    Arisu.print_all_data();
    IDCard Momoi;
    Momoi.set_data("0001","Momoi","Saiba","8/12/2021");
    Momoi.print_all_data();
    IDCard Midori;
    Midori.set_data("0002", "Midori", "Saiba", "8/12/2021");
    Midori.print_all_data();
    return 0;

}
