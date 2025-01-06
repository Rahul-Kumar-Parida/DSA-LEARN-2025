#include<iostream>
using namespace std;




/*
// Character Array

// 1.............
int main(){
    char arr[]={'a','p','p','l','e'};
    // cout<<arr;
    for(int i=0;i<5;i++)
    cout<<arr[i];
    return 0;
}

//2........
int main(){
    char arr[12];
    cout<<"Input: ";
    cin>>arr;
    cout<<"Output: " << arr;
    return 0;
}

//3.............
int main(){
    char arr[5];
    cout<<"Input: ";
    cin>>arr;
    arr[2]='\0';
    cout<<"Output: " << arr;
    return 0;
}


//String INPUT AND OUTPUT:
int main(){
    string s;
    cin>>s;
    cout<<s;
    return 0;
}


//String Concatenate and length
int main(){
    string s1="Rahul";
    string s2="Parida";
    string s3=s1+" "+s2;
    cout<<s3<<endl;
    return 0;
}

//push and pop operation on string
int main(){
    string s="Rahul";
    s.push_back('3');
    s.pop_back();
    cout<<s;
}


//Uses of getline

int main(){
    // string s1="Rahul Kumar Parida";
    string s2;
    getline(cin,s2);
    cout<<s2;
    return 0;
}


//using escape Character
int main(){
    string s="rohit negi is a \"good\" boy";
    string s1="\\";
    cout<<s<<endl;
    cout<<s1<<endl;
    return 0;
}


//Reverse a string
int main(){
    string s="rahul";
    int st=0;
    int end=s.length()-1;
    while(st<end){
        swap(s[st],s[end]);
        st++;
        end--;
    }
    cout<<s<<endl;
    return 0;
}


//Size of a string
int main(){
    string s="realsarkar";
    int size=0;
    while(s[size]!='\0'){
        size++;
    }
    cout<<size<<endl;
    return 0;
}
*/
//is string Palindrome or not?

int main(){
    string s="namane";
    int l=0;
    int r=s.length()-1;
    while(l<r){
        if(s[l]!=s[r]){
            cout<<"false";
            return 0;
        }
        l++;
        r--;
    }
    cout<<"true";
    return 0;
}