#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;

class login
{
    int x;
    string password;
    string email;
public:
    login()
    {
        lable:
        cout<<"FOR SIGN IN PRESS 1"<<endl;
        cout<<"FOR SIGN UP PRESS 2"<<endl;
        cin>>x;
        cout<<"ENTER EMAIL"<<endl;
        cin>>email;
        cout<<"ENTER PASSWORD"<<endl;
        cin>>password;
        if(x==1)
            signin();
        else if(x==2)
            signup();
        else
        {
            cout<<"WRONG CHOICE"<<endl;
            goto lable;
        }
    }

    int hashs(string a)
    {
    int b=0,c;
    for(int i=0;i<a.length();i++)
    {
        c=(int(a[i])%5)*2;
        b=10*b+c;
    }
    return b;
    }

    void signup()
    {
        fstream f;
        f.open("login.txt", ios::out | ios::in | ios::app);
        f<<email<<endl;
        f<<hashs(password)<<endl;
        f.close();
    }

    void signin()
    {
        string line;
        int pass=-1;
        fstream f;
        f.open("login.txt", ios::out | ios::in | ios::app);
        f.seekg(0, ios::beg);
        while(getline(f,line))
        {
            if(email.compare(line)==0)
            {
                pass=hashs(password);
                continue;
            }
            if(pass!=-1)
            {
                stringstream ss;
                ss<<pass;

                string s=ss.str();
                if(s.compare(line)==0)
                {
                    cout<<"Logged In";
                    break;
                }
            }
        }
        f.close();
    }

};

int main()
{
    login l;
}
