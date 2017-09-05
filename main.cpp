#include <iostream>

#include<vector>
#include<set>
#include<string>

using namespace std;

/*****************************
STL  set map vector sort

*****************************/


int main()
{
    cout << "Hello world to stl 呵呵!" << endl;

    //vector 用法
    cout << "----vector------!" << endl;
    vector<int> vec1;//声明
    cout<<"size= "<<vec1.size()<<endl;
    vec1.push_back(11);
    vec1.push_back(12);
    vec1.push_back(13);
    vec1.push_back(14);
    vec1.push_back(15);
    cout<<"size= "<<vec1.size()<<endl;
    vec1.pop_back();
    cout<<"size= "<<vec1.size()<<endl;
    int a = vec1.back();
    cout<<"back= "<<a<<endl;

    cout<<"[4]= "<<vec1[4]<<" "<<vec1.at(3)<<endl;

    for(int i=0;i<vec1.size();i++){
        cout<<vec1[i]<<endl;
    }
    vector<int>::iterator iter = vec1.begin();
    for(;iter!=vec1.end();iter++){
        cout<<*iter<<endl;
    }

    vec1.clear();//清空
    cout<<"size= "<<vec1.size()<<endl;


    //set 用法
    cout << "----set------!" << endl;
    set<string> set1;
    set1.insert("nihao");
    set1.insert("haha");
    set1.insert("xiaohua");
    set1.insert("liming");

    cout<<"size= "<<set1.size()<<endl;
    set1.erase("haha");
    cout<<"size= "<<set1.size()<<endl;
    //find
    if(set1.find("haha") != set1.end()){
        cout<<"find "<<endl;
    }else{
        cout<<"no find"<<endl;
    }
   //交并差
   // set_union(a.begin(),a.end(),b.begin(),b.end(),insert_iterator<set<int> >(c,c.begin()));
   //set_intersection(a.begin(),a.end(),b.begin(),b.end(),insert_iterator<set<int> >(c,c.begin()));
   //set_difference(a.begin(),a.end(),b.begin(),b.end(),insert_iterator<set<int> >(c,c.begin()));



    return 0;
}
