// First come first serve 

#include<iostream>
using namespace std;
int main(){
    // initialising variables
    int n, bt[20],wt[20],tt[20], at , avwt = 0, avtt = 0;
    int i,j;
    cout<<"Enter number of process(Max limit 20) : ";
    cin>>n;
    // accepting Burst time of processes
    cout<<"Enter Process burst time\n";
    for (i=0;i<n;i++){
        cout<<"P["<<i+1<<"] : ";
        cin>>bt[i];
    }
    
  // calculating waiting time
    wt[0]=0;
    //waiting time for first process is 0
    for (i=1;i<n;i++){
        wt[i]=0;
        for (j=0;j<i;j++)
            wt[i]+=bt[i];
        }
    cout<<"\nProcess\t\tBurst Time\tWaiting Time\tTurnaround Time";
    for (i=0;i<n;i++){
        tt[i]=bt[i]+wt[i];
        avtt+=tt[i];    
        avwt+=wt[i];
        cout<<"\nP["<<i+1<<"]"<<"\t\t"<<bt[i]<<"\t\t"<<wt[i]<<"\t\t"<<tt[i];
    }

  avwt/=i;
	avtt/=i;
	cout<<"\n\nAverage Waiting Time:"<<avwt;
	cout<<"\nAverage Turnaround Time:"<<avtt;
  return 0;
}
