#include<iostream>
using namespace std;
int main()
{
    int c1,c2,c3,mid,final;
    cout<<"**QUIZZES**"<<endl;
    cout<<"Enter first quizz (10) :";
    cin>>c1;
    cout<<"Enter second quizz (10) :";
    cin>>c2;
    cout<<"Enter third quizz (10) :";
    cin>>c3;
    cout<<"**MID**"<<endl;
    cout<<"Enter mid-term (40) :";
    cin>>mid;
    cout<<"**FINAL**"<<endl;
    cout<<"Enter final-term (50) :";
    cin>>final;
    float total1 = static_cast<float>(c1+c2+c3)/3;
    cout<<"Quizz Total :"<<total1<<endl;
    cout<<"Mid-term :"<<mid<<endl;
    cout<<"Final :"<<final<<endl;
    float total2 = total1+mid+final;
    cout<<"Total :"<<total2<<endl;
    cout << "Your Score is " << ((total2>=50) ? "PASS " : "FALED ")<<endl;
return(0);
}