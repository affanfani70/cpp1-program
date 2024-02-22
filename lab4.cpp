// #include<iostream>
// #include<string>
// using namespace std;
// class mammals {
//     public:
//     void show_mammals(){
//         cout<<"I am Mammals "<<endl;
//     }
// };
// class marin_animals{
//     public:
//     void show_marin_animal(){
       
//         cout<<"I am marin animals "<<endl;
//     }
// };
// class Bluewales: public mammals,public marin_animals{
//     public:
//     void show_result(){
//         show_mammals();
//         show_marin_animal();
//     cout<<"I belong to both class "<<endl;
//     }
// };
// int main(){
//     Bluewales m3;
//     m3.show_result();
// }

// ---------->second program<----------

// #include<iostream>
// #include<string>
// using namespace std;
// class fruits{
//     public:
//     static int count;
//     int num;
// };
// int fruits ::count=0;
// class apple: public fruits{
//     public:
//     int apple_num;
//     apple(){
//         apple_num = ++count;
//     }
//     void num_apple(){
//         cout<<"Total Quantity is "<<apple_num<<endl;
//     }


// };
// class mango: public fruits{
//     public:
//     int mango_num;
//     mango(){
//         mango_num = ++count;
//     }
//     void num_mango(){
//         cout<<"Total Quantity is "<<mango_num<<endl;
//     }
// };
//  int main(){
//      mango m1,m2,m3;
//      m1.num_mango();
    
//  }


//--------------->third<--------------
#include<iostream>
#include<string>
using namespace std;
class marks{
    public:
    static int roll_no;
    int roll_No;
    string Name;
    int score;
    marks(){
        roll_No=++roll_no;
    }
    void set_data(){
        cout<<"Enter Your Name "<<Name;
        cin>>Name;
        cout<<"The Name is "<<Name<<endl
            <<"The Roll No. is "<<roll_No<<endl;
    }
};
int marks::roll_no=100;
class physics : public marks{
    public:
    int phys_marks;
    void get_phys(){
        set_data();
        cout<<"Enter the Physics Marks ";
        cin>>phys_marks;
        cout<<"Physics ="<<phys_marks<<endl;
    }
};
class chemistry : public marks{
    public:
    int che_marks;
    void get_che(){
        cout<<"Enter the chemistry Marks ";
        cin>>che_marks;
        cout<<"Chemistry ="<<che_marks<<endl;
    }
};
class mathmetic: public marks{
    public:
    int math_marks;
    void get_math(){
            cout<<"Enter the math Marks ";
            cin>>math_marks;
            cout<<"Mathmetics ="<<math_marks<<endl;

    }
};
class result : public mathmetic,public chemistry,public physics{
    public:
    float average;
    int set_avg(){
        average=(math_marks+che_marks+phys_marks)/3;
        return average;
    }
    void show_result(){
        get_phys();
        get_math();
        get_che();
        cout<<"The average of the student's marks is "<<set_avg()<<endl;
    }
};
int main(){
    // marks s1,s2;
    // s1.set_data();
    result S1,S2;
    S1.show_result();
    S2.show_result();

}