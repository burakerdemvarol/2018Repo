#include "MaxHeap.h"
using namespace std;
int n=0,totalswap=0;
void processVector(vector<int> inp)
{
MaxHeap h(n);
for(int k=0;k<n;k++){
h.insertKey(inp[k]);}
totalswap+=h.getSwapNo();
}

void permutate(std::vector<int>& forpermutate, unsigned int nextIndex)
{ if (nextIndex==forpermutate.size())
  { 
	processVector(forpermutate);
	
    return;
  }
  for (unsigned int i=nextIndex; i<forpermutate.size(); i++)
  { swap(forpermutate[i], forpermutate[nextIndex]);
    permutate(forpermutate, nextIndex+1);
    swap(forpermutate[i], forpermutate[nextIndex]);
  }
}



int main()
{
	 FILE* file = fopen ("input.txt", "r");
  int i=0,j = 0;
  fscanf (file, "%d", &n);  
    MaxHeap h(n);  
	vector<int> datas;
  while (j++<n)
    {  
      
      fscanf (file, "%d", &i);      
	datas.push_back(i);
    }


  fclose (file);        
  permutate(datas, 0);

 unsigned long long factorial = 1;


    for(int i = 1; i <=n; ++i)
    {
        factorial *= i;
    }
float resul=float(totalswap)/float(factorial);
cout << "The total number of swaps is ";
cout << totalswap << endl;
cout << "The average number of swaps per permutation is ";
cout << resul << endl;

if (resul<=2)
cout<<"Taking 20 TL is better option." ;
else
cout<<"10 TL per swap is a better option." ;
   return 0;
}


