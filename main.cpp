#include <iostream>

#include<vector>
#include<set>
#include<string>
#include<map>

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

    //map 使用
    cout << "----map------!" << endl;
    map<int,string> mapstu;
    mapstu.insert(pair<int,string>(11,"lihao") );
    mapstu.insert(pair<int,string>(22,"liuhua") );
    mapstu.insert(pair<int,string>(33,"laha") );
    mapstu.insert(pair<int,string>(44,"lio") );

    mapstu.insert(map<int,string>::value_type(55,"xiaojun"));

    mapstu[66]="haha2";

    cout<<"size= "<<mapstu.size()<<endl;
    map<int,string>::iterator stu_iter; //正向迭代器
    for(stu_iter= mapstu.begin(); stu_iter!=mapstu.end();stu_iter++){
        cout<<"key= "<<stu_iter->first<<" value= "<<stu_iter->second<<endl;
    }

    cout<<"反向"<<endl;
    map<int,string>::reverse_iterator rstu_iter; //反向迭代器
    for(rstu_iter= mapstu.rbegin(); rstu_iter!=mapstu.rend();rstu_iter++){
        cout<<"key= "<<rstu_iter->first<<" value= "<<rstu_iter->second<<endl;
    }

    //数组法，但是不建议使用，许多空白的单位也输出了，
    //for(int n=1;n<=mapstu.size();n++){
      //cout<<mapstu[n]<<endl;
    //}
    //find
    map<int,string>::iterator find_iter;
    find_iter= mapstu.find(33);
    if(find_iter ==mapstu.end()){
        cout<<"no find"<<endl;
    }else{
        cout<<"find"<<" the value="<<find_iter->second<<endl;
    }
    //mapstu.clear();
    //cout<<mapstu.empty()<<endl;
    find_iter = mapstu.find(11);
    mapstu.erase(find_iter);
    int n=mapstu.erase(11);
    cout<<n<<endl;
//mapStudent.earse(mapStudent.begin(), mapStudent.end());
            //成片删除要注意的是，也是STL的特性，删除区间是一个前闭后开的集合
    mapstu.erase(mapstu.begin(),mapstu.end());
    cout<<mapstu.size()<<endl;


    return 0;
}
