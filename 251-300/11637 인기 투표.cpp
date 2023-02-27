//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//int main()
//{
//	vector <int> major, candidates;
//	int t, ts;
//	cin >> t;
//	while (t--)
//	{
//		int totalVote = 0, maxVote = 0;
//		cin >> ts;
//		candidates.resize(ts);
//		major.clear();
//		for (int i = 0; i < ts; i++) {
//			cin >> candidates[i];
//			totalVote += candidates[i];
//			maxVote = max(maxVote, candidates[i]);
//		}
//		for (int i = 0; i < ts; i++)
//			if (candidates[i] == maxVote)
//				major.push_back(i + 1);
//		if (major.size() > 1) cout << "no winner\n";
//		else if (totalVote / 2 < maxVote) cout << "majority winner " << major[0] << "\n";
//		else cout << "minority winner " << major[0] << "\n";
//	}
//}