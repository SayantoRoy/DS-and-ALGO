#include<bits/stdc++.h>
using namespace std;

enum class vac {vac , obs};
vector<vac> getVectorRow(string line);


vector<vector<vac>> ReadFileandConvert(string path)
{
    ifstream f;
    f.open(path);
    vector<vector<vac>> maps;
    if(f)
    {
        string line;
        while(getline(f , line))
        {
            vector<vac>r = getVectorRow(line);
            maps.push_back(r);
        }
    }
    return maps;
}
vector<vac> getVectorRow(string line)
{
    istringstream ms(line);
    int n; char c;
    vector<vac>row;
    while(ms >> n>> c && c==',')
    {
        if(n==1)
            row.push_back(vac::obs);
        else
            row.push_back(vac::vac);
    }
    return row;
}

string MapString(vac kk)
{
    switch(kk)
    {
        case vac::obs : return "X  ";
        default : return "Y  ";
    }
}

void PrintMap(vector<vector<vac>>b)
{
    for(int i =0;i<b.size();i++)
    {
        for(int j=0;j<b[i].size();j++)
        {
            cout<<MapString(b[i][j]);
        }
        cout<<"\n";
    }
}

int main()
{
    auto maps = ReadFileandConvert("Matrix.txt");
    PrintMap(maps);

}
