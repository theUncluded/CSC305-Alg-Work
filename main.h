#ifndef MAIN_H
#define MAIN_H
#include <iostream>
#include <cstring>
using namespace std;
//user inputs reqs for their partition -> user chooses algorith -> algorithm out
class Partition {
private:
int num_of_processes;
int process_list[5][5]{};
int part_mem[5]{};
string partition_name;
bool state;
public:
Partition() //constructor: no val
{};

int num_of_num_of(){
    return num_of_processes;
}

int insert(int val, int i){
    return process_list[i] =val;
}

//choose an algorith
string algo_choose(){
    string alg = "";
    cout << "Choose an algorithm to manage your memory...\n1)Best Fit\n2)First Fit\n3)Next Fit\n4)Worst Fit\n";
    int choice =0;
    cin >> choice;

    switch(choice){
    case 1:
    return alg= "Best Fit";
    case 2:
    return alg="First Fit";
    case 3:
    return alg="Next First";
    case 4:
    return alg="Worst Fit";
    default:
    return alg="ERROR";
    }
}
 
string status[2] = {"Run","Wait"};
};
// MEM CLASS OR JOB CLASS
class Mem: public Partition {
private:
int job_size[5]{};
public:
Mem() {}
void to_job_size(int amt,int i){
    job_size[i] = amt;
}

void display(string algo_choice){
    cout << algo_choice , " method chosen\n";
    int j=0;
    while(j<20){
        cout << "#";
        if (j==10){
            cout << "This is the " , algo_choice;
        }
        else if (j==19){
            cout << "\n";
        }
    }
    cout << "Job ID\tPartition ID\tWaste\tStatus";
    for(int i=0;i<num_of_num_of()*4;i++){
        
    }
}



};
#endif

//DEPRECATED WORK
/*  Settled for Default Constructor leaving this here in case it doesn't work out
int Partition::num_of_pros(){ //returns user-input of num of processes
    int num;
    cout << "Input number of processes: (Input range 0-100)\n";
    cin >> num;
    if(num<0 || num>100)
        return num;
    else {
        cout << "You're out of range!\n";
        return 0;}
};
*/