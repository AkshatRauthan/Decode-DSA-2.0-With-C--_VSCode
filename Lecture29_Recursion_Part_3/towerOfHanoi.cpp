#include "iostream"
using namespace std;

// Tower Of Hanoi :-  You Are Given Three Towers. The First Tower Is Having n Disks Of Different Sizes Placed
// In Increasing Order. The Task Is To Move All The n Disks To The Second Tower In The Same Increasing Order.
// During The Transfer You Can Take The Help Of The Third Tower. Remember All The Disks Are To Be Placed
// In Increasing Order In All The Towers. And You Can Only Move The Smallest Disk From Any Tower That Is Always
// Present On The Top It. Also, You Cannot Place A Bigger Disk On Top Of A Smaller Disk.

void Hanoi(int n, char Source, char Helper, char Destination){
    if (n == 0) return;
    Hanoi(n-1, Source, Destination, Helper);
    cout<<"\t\t"<<Source<<"  -->  "<<Destination<<"\n";
    return Hanoi(n-1, Helper, Source, Destination);
}

int main(){
    int n;
    cout<<"\nEnter The Number Of Rings To Be Placed In The Game : \n";
    cin>>n;
    cout<<"\nThe Nomenclature Used In The Solution Is As Follows : ";
    cout<<"\n  A  :  Source Tower";
    cout<<"\n  B  :  Helper Tower";
    cout<<"\n  C  :  Destination Tower";
    cout<<"\n\nThe Solution Of The Given Tower Of HANOI Is As Follows :\n";
    Hanoi(n, 'A', 'B', 'C');
    cout<<"\n\n";
    system("pause");
}