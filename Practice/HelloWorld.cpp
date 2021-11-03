#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>

using namespace std;

int main()
{
    vector<double> temps;
    for (double temp; cin >> temp;) {
        temps.push_back(temp);
    }

    // compute mean temp
    double sum;
    for (double temp : temps) {
        sum += temp;
    }
    cout << "Mean Temperature: " << sum / temps.size() << "\n";

    // compute medium temp
    sort(temps);
    cout << "Medium temp: " << temps[temps.size() / 2] << "\n";
}