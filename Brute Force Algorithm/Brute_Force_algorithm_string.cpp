#include <iostream>
#include <string>
using namespace std;

int bruceforce(string s1, string s2)
{
    int i = 0, j = 0;
    int index = -1;
    int cnt;
    //cout << s1.size() << " " << s2.size() << endl;
    while(i < s1.size() && j < s2.size()){
        //cnt++;
        if(s1[i] == s2[j]){
            i++;
            j++;
        }
        else{
            i = i - j + 1;
            j = 0;
        }
    }
    cout << "circle count: " << cnt << endl;
    if(j == s2.size()){
        index = i - j + 1;
    }
    return index;
}
int main()
{
    string a = "12343214325789";
    string b = "4325";
    int x = bruceforce(a, b);
    cout << "locate at " << x << endl;
    return 0;
}


//#include<iostream>
//#include<string>
//
//using namespace std;
//
//bool search(string str, string pattern)
//{   
//	int n = str.length();  
//	int m = pattern.length();   
// 
//	for (int i = 0; i <= n - m; i++)   
//	{         
//		int j;      
//		for (j = 0; j < m; j++)
//		{        
//			if (str[i+j] != pattern[j])            
//				break; 
//		}  
//		if (j == m) 
//			return true;   
//	}   
//		return false;
//}
//
//int main()
//{
//	string str = "prodevelopertutrial";
//	string pattern = "rial";
//
//	if(search(str, pattern))
//	{
//		cout<<"The substring is present"<<endl;
//	}
//	else
//	{
//		cout<<"The substring is NOT present"<<endl;		
//	}
//
//	return 0;
//}

