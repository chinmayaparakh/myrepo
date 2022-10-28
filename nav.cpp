#include <iostream>
#include <vector>
#include <windows.h>
#include<bits/stdc++.h>
#include <fstream>
using namespace std;

class nav
{
    int x;
public:
    begins()
    {
        system("cls");
        cout<<endl<<"Choose a category from below"<<endl;
        cout<<"1. FASHION"<<endl;
        cout<<"2. FOOTWEARS"<<endl;
        cout<<"3. ELECTRONICS"<<endl;
        cout<<"4. FOOD"<<endl;
        cout<<"5. PALIKA BAZAAR"<<endl;
        cout<<"6. BIG BAZAAR"<<endl;
        cout<<"7. GAME ZONE"<<endl;
        cout<<"8. EXIT"<<endl;
        cout<<"Enter Index: ";
        cin>>x;
        switch(x)
        {
        case 1:
            fashion();
            Sleep(5000);
            begins();
        case 2:
            footwear();
            Sleep(5000);
            begins();
        case 3:
            electronics();
            Sleep(9000);
            begins();
        case 4:
            food();
            begins();
        case 5:
            palikaBazaar();
            Sleep(3000);
            begins();
        case 6:
            bigBazaar();
            Sleep(3000);
            begins();
        case 7:
            gameZone();
            Sleep(3000);
            begins();
        case 8:
            _Exit(10);
        default:
            cout<<"Please Enter Right Number"<<endl;
            Sleep(900);
            begins();
        }
    }

    void fashion()
    {
        vector<string>fa;
        vector<int>faf;
        vector <int>fas;

        fa.push_back("NIKE");
        fa.push_back("PANTALOONS");
        fa.push_back("LEVIS");
        fa.push_back("BURBERRY");
        fa.push_back("LOUIS VUITTON");
        fas.push_back(27);
        fas.push_back(17);
        fas.push_back(5);
        fas.push_back(7);
        fas.push_back(23);
        faf.push_back(3);
        faf.push_back(2);
        faf.push_back(1);
        faf.push_back(1);
        faf.push_back(3);

        for(int i=0;i<fa.size();i++)
            {
                cout<<fa[i]<<endl<<"  FLOOR: "<<faf[i]<<endl<<"  SHOP: "<<fas[i]<<endl<<endl;
            }
    }

    void footwear()
    {
        vector<string>fo;
        vector<int>fof;
        vector <int>fos;

        fo.push_back("NIKE");
        fo.push_back("WOODLAND");
        fo.push_back("PUMA");
        fo.push_back("ADIDAS");
        fo.push_back("REEBOK");
        fos.push_back(24);
        fos.push_back(18);
        fos.push_back(6);
        fos.push_back(8);
        fos.push_back(26);
        fof.push_back(3);
        fof.push_back(2);
        fof.push_back(1);
        fof.push_back(1);
        fof.push_back(3);

        for(int i=0;i<fo.size();i++)
            {
                cout<<fo[i]<<endl<<"  FLOOR: "<<fof[i]<<endl<<"  SHOP: "<<fos[i]<<endl<<endl;
            }
    }

    void electronics()
    {
        fstream f;
        string line;
        f.open("electronics.txt");
        while(f)
        {
            getline(f,line);
            cout<<line<<endl;
        }
        f.close();
    }


    void food()
    {
        int y;
        cout<<"For Fast Food Enter 1"<<endl;
        cout<<"For Dining Enter 2"<<endl;

        vector<string>f;
        vector<int>ff;
        vector<int>fs;
        //fast food
        f.push_back("FOOD COURT");
        ff.push_back(3);
        fs.push_back(21);
        //restaurants
        f.push_back("Tandoori Village");
        f.push_back("Cafe Coffee Day");
        f.push_back("BBQ");
        f.push_back("Theos");
        f.push_back("Walk In Woods");
        fs.push_back(2);
        fs.push_back(12);
        fs.push_back(22);
        fs.push_back(9);
        fs.push_back(16);
        ff.push_back(1);
        ff.push_back(2);
        ff.push_back(3);
        ff.push_back(1);
        ff.push_back(2);
        foo:
        cin>>y;
        if(y==1)
        {
            cout<<f[0]<<"       FLOOR: "<<ff[0]<<"       SHOP: "<<fs[0]<<endl<<endl;
            Sleep(3000);
        }
        else if(y==2)
        {
            for(int i=1;i<f.size();i++)
            {
                cout<<f[i]<<endl<<"  FLOOR: "<<ff[i]<<endl<<"  SHOP: "<<fs[i]<<endl<<endl;
            }
            Sleep(5000);
        }
        else
        {
            cout<<"Please Enter 1 or 2"<<endl;
            goto foo;
        }
    }

    void palikaBazaar()
    {
        cout<<"FLOOR: BASEMENT       SHOP: 1 "<<endl<<endl;
    }
    void bigBazaar()
    {
        cout<<"FLOOR: 1,2       SHOP: 4,14 "<<endl<<endl;
    }
    void gameZone()
    {
        cout<<"FLOOR: 2       SHOP: 20 "<<endl<<endl;
    }
};
int main()
{
    nav n;
    n.begins();
}
