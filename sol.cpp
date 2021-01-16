#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int a, b;
	cin >> a >> b;
	// find the midpoint of these two numbers
	int midpoint = ((a + b) % 2 == 0 ? (a + b) / 2 : (a + b) / 2 + 1);
	// get the distance of the first friend from the midpoint
	int distance_of_first_friend = abs(midpoint - a);
	// get the distance of the second friend from the midpoint
	int distance_of_second_friend = abs(b - midpoint);
	// use arithmetic progression to get the total tiredness of the first & second friend
	distance_of_first_friend = (distance_of_first_friend * (distance_of_first_friend + 1)) / 2;
	distance_of_second_friend = (distance_of_second_friend * (distance_of_second_friend + 1)) / 2;
	// print the total tiredness of the first & second friend
	cout << distance_of_first_friend + distance_of_second_friend << '\n';
	return 0;
}
