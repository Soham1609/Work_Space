#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
#define size 10000

class task_scheduling
{
  int at[size], bt[size], ct[size], tat[size], wt[size], bt1[size],
      priority[size];
  float avg_all_tat[4], avg_all_wt[4];
  string algoNmae[4] = {"FCFS", "SJF", "PRIORITY", "ROUNDROBIN"};
  

public:
  void takeinput(int n)
  {
    cout << "Enter the arrival , burst time and priority of each task : "
         << endl;
    for (int i = 0; i < n; i++)
    {
      cin >> at[i] >> bt[i] >> priority[i];
      bt1[i] = bt[i];
    }
  }

  void bubbleSort(int at[], int bt[], int bt1[], int priority[], int n)
  {
    int i, j;
    for (i = 0; i < n - 1; i++)
      for (j = 0; j < n - i - 1; j++)
        if (at[j] > at[j + 1])
        {
          swap(at[j], at[j + 1]);
          swap(bt[j], bt[j + 1]);
          swap(bt1[j], bt1[j + 1]);
          swap(priority[j], priority[j + 1]);
        }
  }

  void fcfs(float n)
  {
    float total_tat = 0;
    float total_wt = 0;
    bubbleSort(at, bt, bt1, priority, n);
    for (int i = 0; i < n; i++)
    {
      ct[i] = ct[i - 1] + bt[i];
      tat[i] = ct[i] - at[i];
      wt[i] = tat[i] - bt[i];
    }

    for (int i = 0; i < n; i++)
    {
      total_tat += tat[i];
      total_wt += wt[i];
    }

    float avg_tat = total_tat / n;
    float avg_wt = total_wt / n;
    cout << "For FCFS" << endl;
    cout << setw(2) << "    PId    "
         << setw(2) << "       AT    "
         << setw(2) << "     BT    "
         << setw(2) << "      CT    "
         << setw(2) << "      TAT    "
         << setw(2) << "       WT    " << endl;
    for (int i = 0; i < n; i++)
    {
      cout << "     " << i << "     "
           << "    " << setw(4) << at[i] << "        " << setw(4) << bt1[i] << "        " << setw(4) << ct[i]
           << "        " << setw(4) << tat[i] << "        " << setw(4) << wt[i] << "    " << endl;
    }

    cout << "Average tat: " << avg_tat << endl;
    cout << "Average wt: " << avg_wt << endl;

    avg_all_tat[0] = avg_tat;
    avg_all_wt[0] = avg_wt;
    cout << endl;
    cout << endl;
  }

  void sjf(int n)
  {
    float total_tat = 0;
    float total_wt = 0;
    bubbleSort(at, bt, bt1, priority, n);
    for (int i = 0; i < n; i++)
    {
      ct[i] = -1;
    }

    int time = 0;
    int cp = 0;

    while (cp < n)
    {
      int min = 1000000;
      int min_index = -1;

      for (int i = 0; i < n; i++)
      {
        if (at[i] <= time && min > bt[i] && bt[i] != 0)
        {
          min = bt[i];
          min_index = i;
        }
      }

      if (min_index != -1)
      {
        bt[min_index]--;
      }

      time++;

      if (bt[min_index] == 0)
      {
        ct[min_index] = time;
        cp++;
      }
    }

    for (int i = 0; i < n; i++)
    {
      tat[i] = ct[i] - at[i];
      wt[i] = tat[i] - bt1[i];
    }

    for (int i = 0; i < n; i++)
    {
      total_tat += tat[i];
      total_wt += wt[i];
    }

    float avg_tat = total_tat / n;
    float avg_wt = total_wt / n;
    cout << "For SJF" << endl;
    cout << setw(2) << "    PId    "
         << setw(2) << "       AT    "
         << setw(2) << "     BT    "
         << setw(2) << "      CT    "
         << setw(2) << "      TAT    "
         << setw(2) << "       WT    " << endl;
    for (int i = 0; i < n; i++)
    {
      cout << "     " << i << "     "
           << "    " << setw(4) << at[i] << "        " << setw(4) << bt1[i] << "        " << setw(4) << ct[i]
           << "        " << setw(4) << tat[i] << "        " << setw(4) << wt[i] << "    " << endl;
    }

    cout << "Average tat: " << avg_tat << endl;
    cout << "Average wt: " << avg_wt << endl;

    avg_all_tat[1] = avg_tat;
    avg_all_wt[1] = avg_wt;

    for (int i = 0; i < n; i++)
    {
      bt[i] = bt1[i];
    }
    cout << endl;
    cout << endl;
  }

  void priority_scheduling(int n)
  {
    float total_tat = 0;
    float total_wt = 0;
    bubbleSort(at, bt, bt1, priority, n);

    int time = 0;
    int cp = 0;
    while (cp < n)
    {
      int min = 10000000;
      int min_index = -1;
      for (int j = 0; j < n; j++)
      {

        if (at[j] <= time && min > priority[j] && bt[j] != 0)
        {
          min = priority[j];
          min_index = j;
        }
        //        cout << j << endl;
      }
      //      cout << "Öutside for" << endl;

      if (min_index != -1)
      {
        time += bt[min_index];
        bt[min_index] = 0;
        cp++;
        ct[min_index] = time;
        tat[min_index] = ct[min_index] - at[min_index];
        total_tat += tat[min_index];
        wt[min_index] = tat[min_index] - bt1[min_index];
        total_wt += tat[min_index] - bt1[min_index];
      }
      else
      {
        time++;
      }
    }

    float avg_tat = total_tat / n;
    float avg_wt = total_wt / n;
    cout << "For Priority" << endl;
    cout << setw(2) << "    PId    "
         << setw(2) << "       AT    "
         << setw(2) << "     BT    "
         << setw(2) << "      CT    "
         << setw(2) << "      TAT    "
         << setw(2) << "       WT    " << endl;
    for (int i = 0; i < n; i++)
    {
      cout << "     " << i << "     "
           << "    " << setw(4) << at[i] << "        " << setw(4) << bt1[i] << "        " << setw(4) << ct[i]
           << "        " << setw(4) << tat[i] << "        " << setw(4) << wt[i] << "    " << endl;
    }

    cout << "Average tat: " << avg_tat << endl;
    cout << "Average wt: " << avg_wt << endl;

    avg_all_tat[2] = avg_tat;
    avg_all_wt[2] = avg_wt;

    for (int i = 0; i < n; i++)
    {
      bt[i] = bt1[i];
    }

    cout << endl;
    cout << endl;
  }

  void roundrobin(int n)
  {
    int tq;
    cout << "Enter the time quantum: " << endl;
    cin >> tq;
    float total_tat = 0;
    float total_wt = 0;
    bubbleSort(at, bt, bt1, priority, n);
    int time = 0;
    int cp = 0;
    while (cp < n)
    {
      int presentstate = -1;
      for (int i = 0; i < n; i++)
      {
        if (at[i] <= time && bt[i] != 0)
        {
          if (bt[i] <= tq)
          {
            time += bt[i];
            bt[i] = 0;
            cp++;
            presentstate = i;
            ct[presentstate] = time;
            tat[presentstate] = ct[presentstate] - at[presentstate];
            total_tat += tat[presentstate];
            wt[presentstate] = tat[presentstate] - bt1[presentstate];
            total_wt += tat[presentstate] - bt1[presentstate];
          }
          else
          {
            time += tq;
            bt[i] = bt[i] - tq;
          }
        }
      }
      if(time < at[presentstate])
      {
     time++;
      }

    }
    float avg_tat = total_tat / n;
    float avg_wt = total_wt / n;
    cout << "For RoundRobin" << endl;
    cout << setw(2) << "    PId    "
         << setw(2) << "       AT    "
         << setw(2) << "     BT    "
         << setw(2) << "      CT    "
         << setw(2) << "      TAT    "
         << setw(2) << "       WT    " << endl;
    for (int i = 0; i < n; i++)
    {
      cout << "     " << i << "     "
           << "    " << setw(4) << at[i] << "        " << setw(4) << bt1[i] << "        " << setw(4) << ct[i]
           << "        " << setw(4) << tat[i] << "        " << setw(4) << wt[i] << "    " << endl;
    }

    cout << "Average tat: " << avg_tat << endl;
    cout << "Average wt: " << avg_wt << endl;

    avg_all_tat[3] = avg_tat;
    avg_all_wt[3] = avg_wt;

    for (int i = 0; i < n; i++)
    {
      bt1[i] = bt[i];
    }

    cout << endl;
    cout << endl;
  }

  void compare()
  {
 int min1 = 100000, min2 = 100000;
 int a,b;
 for(int i = 0; i<4; i++)
 {
 if(min1 > avg_all_tat[i])
 {
 min1 = avg_all_tat[i];
 a = i;
 }
 }

 for(int i = 0; i<4; i++)
 {
 if(min2 > avg_all_wt[i])
 {
 min2 = avg_all_wt[i];
 b = i;
 }
 }
    cout << "\t\t"
         << "FCFS\t\t"
         << "SJF\t  "
         << "  PRIORITY\t"
         << "RoundRobin\t" << endl;
    cout << "Average TAT\t" << avg_all_tat[0] << "\t\t" << avg_all_tat[1] << "\t\t" << avg_all_tat[2] << "\t\t" << avg_all_tat[3] << endl;
    cout << "Average WT\t" << avg_all_wt[0] << "\t\t" << avg_all_wt[1] << "\t\t" << avg_all_wt[2] << "\t\t" << avg_all_wt[3] << endl;
    cout<<endl<<endl;
    cout<<algoNmae[a]<<" is more preferable wrt Average TAT"<<endl;
    cout<<algoNmae[b]<<" is more preferable wrt Average WT"<<endl;
  }
};

int main()
{
  int k;
  cout << "Enter the total number of tasks: " << endl;
  cin >> k;

  task_scheduling obj;
  obj.takeinput(k);
  obj.fcfs(k);
  obj.sjf(k);
  obj.priority_scheduling(k);
  obj.roundrobin(k);
  obj.compare();
  return 0;
}