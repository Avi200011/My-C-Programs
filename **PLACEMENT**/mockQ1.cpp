#include <iostream>
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
	ll skill,n;
	cin>>skill>>n;
	ll questions[n];
	for(int i=0;i<n;i++)
	cin>>questions[i];

	sort(questions,questions+n);
	int flag=1;
	for(ll i=0;i<n;i++)
	{
		if(questions[i]<=skill)
		skill+=questions[i];
		else 
		{
			flag=0;
			break;
		}

	}

	if(flag)
	cout<<"True";
	else 
	cout<<"False";



}