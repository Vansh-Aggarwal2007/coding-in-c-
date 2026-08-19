#include <bits/stdc++.h>
using namespace std;
int main()
{
    string exp;
    stack<int> n;
    cin>>exp;
    int i=0;
    int res;
    while(exp[i]!='\n')
    {
        if(isdigit(exp[i]))
        {
            int num=0;
            while(exp[i]!=',' && exp[i]!='\n')
            {
                num=num*10+(exp[i]-'0');
                i++;
            }
            n.push(num);
            if(exp[i]==',')
            {
                i++;
            }
        }
        else{
            char op=exp[i];
            int a=n.pop();
            int b=n.pop();
            switch(op)
            {
                case '+':
                res=a+b;
                n.push(res);
                break;
                case '-':
                res=a-b;
                n.push(res);
                break;
                case '*':
                res=a*b;
                n.push(res);
                break;
                case '/':
                res=a/b;
                n.push(res);
                break;
            }

        }
        cout<<n.top();
    }
}