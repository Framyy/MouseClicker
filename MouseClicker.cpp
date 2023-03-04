#include<stdio.h>
#include<iostream>
#include<windows.h>

using namespace std;

int main()
{
	restart:
	system("title Mouse Clicker v1.0") ;
	system("color 0a");
	float A1;
	cout<<"Github:https://github.com/Framyy/MouseClicker\nEnter the click interval(In seconds):"<<endl;
	cin>>A1;
	if(A1<0.0001)
	{
		cout<<"Interval too small!"<<endl;
		Sleep(2000);
		system("cls");
		goto restart;
	}
	cout<<"Press F1 to start,F2 to stop."<<endl;
    while(1)
    {
        if(GetAsyncKeyState(VK_F1))
        {
            while(1)
            {
                mouse_event(MOUSEEVENTF_LEFTDOWN|MOUSEEVENTF_LEFTUP,0,0,0,0);//Click at current position
                Sleep(A1*1000);
                if(GetAsyncKeyState(VK_F2))
				{
					system("cls");
					goto restart;
				}
            }
        }
    } 
return 0;
}
