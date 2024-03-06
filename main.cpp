#include <iostream>
#include <cstring>
#include "main.h"
using namespace std;

int main(){
int Numjobs; // user defined number of jobs
int NumPartition;// user defined number of jobs
cout << "Enter the amount of Jobs you wish to process...\n";
cin >> Numjobs;
cout << "Enter the amount of Partitions you wish to use...\n";
cin >> NumPartition;

Partition * partitionList = new Partition[NumPartition];
Mem joblist[Numjobs];

cout << "Enter the size of each job in bytes...\n ";
int it;
for(int i=0;i<Numjobs;i++){
    cin >> it;
    joblist[i].byte_size = it;
}

cout << "Enter the size of each partition...\n";
for(int i=0;i<NumPartition;i++){
    cin >> it;
    partitionList[i]
}

cout << "Enter the memory requirements for your partition...\n";
for(int i=0;i<NumPartition;i++){
    cin >> it;
}


return 0;
}