#include <iostream>
#include<stdio.h>
#include<stdlib.h>
#include<string>
#include<vector>
#include<fstream>
#include<cctype>
#include<windows.h>
using namespace std;
void timer(int sec)
{
    Sleep(sec*1000);
}
int main()
{

    cout << "Wait 5 seconds " << endl;
    timer(5);
    int i,random,num,score=0;
    string line,s;
    bool found=false;
    vector <string> v1;
    vector <string> v2;
    vector <string> v3;


ifstream file_("gre.txt");

    if(file_.is_open())
        {

        while(getline(file_,line))
        {

            v1.push_back(line);
        }
        file_.close();
    }

    else
       {

        std::cout << "File is not open" << '\n';
        std::cin.get();
       }


    ifstream file2_("greans.txt");

    if(file2_.is_open())
        {

        while(getline(file2_,line))
        {

            v2.push_back(line);
        }
        file2_.close();
    }

    else
       {

        std::cout << "File is not open" << '\n';
        std::cin.get();
       }

    for(i=0;i<2;i++){
    random=rand()%5;

    std::cout << v1[random] << endl;
    std::cout << "please enter your choice" << endl;
    cin >>s;


    while(!found){
        if(s=="A"||s=="B"||s=="C"||s=="D"){

            found=true;
        }
        else {
            cout << "please give valid input" << endl;
            cin >> s;
            found=false;
        }

    }
    std::cout << "you entered" << s << endl;
    std::cout << "The correct ans is" << v2[random] << endl;
    v3.push_back(s);
    if(v3[i]==v2[random]){
        cout <<"you have got one point"<<endl;
        ++score;
        cout <<score <<endl;
    }
    else
            {
            cout << "your answer is wrong" <<endl;
            --score;
            cout <<score <<endl;
            }
}

 cout << " The final score is" << score <<endl;


    return 0;

}

