//#include <iostream>
//#include <algorithm>
//using namespace std;
//int main()
//{
//	int n;
//	int a[10010] = { 0 };
//	cin >> n;
//	for (int i = 0; i < n; i++)
//		cin >> a[i];
//	int k = 0;
//
//	cin >> k;
//	int x, y;
//	while (k--)
//	{
//		cin >> x >> y;
//		cout << upper_bound(a, a + n, y) - lower_bound(a, a + n, x) << '\n';
//	}
//	return 0;
//}

//#include <iostream>
//#include <string>
//using namespace std;
//int main()
//{
//    string s, str;
//    getline(cin, s);
//    getline(cin, str);
//    while (s.find(str)!=-1) {
//        s.erase(s.find(str), str.size());
//    }
//    cout << s;
//    return 0;
//}

//#include <iostream>
//using namespace std;
//int main()
//{
//    int n, k;
//    string a[105];
//    cin >> n >> k;
//    for (int i = 0; i < n; i++)
//        cin >> a[i];
//    for (int i = 0; i < k; i++)
//    {
//        for (int j = 0; j + 1 < n - i; j++)
//        {
//            if (a[j] > a[j + 1])
//                swap(a[j + 1], a[j]);
//        }
//    }
//    for (int i = 0; i < n; i++)
//    {
//        if (i)
//            cout << '\n';
//        cout << a[i];
//    }
//    return 0;
//}

//ElementType Median(ElementType A[], int N)
//{
//    for (int gap = N / 2; gap > 0; gap /= 2) {//ϣ������
//        for (int i = gap; i < N; i++)
//        {
//            for (int j = i - gap; j >= 0 && A[j] > A[j + gap]; j -= gap)
//            {
//                ElementType t = A[j + gap];
//                A[j + gap] = A[j];
//                A[j] = t;
//            }
//        }
//    }
//    return A[N / 2];
//}



//#include <iostream>
//#include <cstdlib>
//using namespace std;
//const int N = 1010;
//void menu();//�˵�
//class Manage;//����ϵͳ��
//class Train_Ticket {//���γ�Ʊ��
//public:
//    friend class Manage;
//    int id;
//    string start_station;
//    string end_station;
//    int depature_time_hour;
//    int depature_time_min;
//    int pass_time;
//    int capacity;
//    int sailed_ticket;
//};
//class Manage {
//public:
//    void add();
//    void show();
//    void search();
//    void buy_ticket();
//    void refund_ticket() {}
//    void save() {}//����
//};
//int n, cnt = 0;
//Train_Ticket t[N];
//Manage p;
//string now = ctime(NULL);
//int main()
//{
//    cin >> n;
//    int ty = 0;
//    while (1) {
//        menu();
//        cin >> ty;
//        while (ty < 1 || ty>6) {
//            cout << "���벻�Ϸ������������룺";
//            cin >> ty;
//        }
//        if (ty == 1)
//        {
//            p.add();
//            p.save();
//        }
//        else if (ty == 2)
//            p.show();
//        else if (ty == 3)
//            p.search();
//        else if (ty == 4)
//            p.buy_ticket();
//        else if (ty == 5)
//            p.refund_ticket();
//        else
//            break;
//    }
//    return 0;
//}
//void menu()
//{
//    cout << "~~~~~~��ӭʹ�ó�Ʊ����ϵͳ!~~~~~~" << '\n';
//    cout << "     =====================     " << '\n';
//    cout << "        1.¼�복Ʊ��Ϣ          " << '\n';
//    cout << "        2.�����Ʊ��Ϣ          " << '\n';
//    cout << "        3.��ѯ��Ʊ��Ϣ          " << '\n';
//    cout << "        4.��Ʊ                 " << '\n';
//    cout << "        5.��Ʊ                 " << '\n';
//    cout << "        6.�˳�ϵͳ             " << '\n';
//    cout << "��ѡ��";
//}
//void Manage::add() {
//    cout << "��Ҫ¼�뼸��������Ϣ��";
//    int k;
//    cin >> k;
//    for (int i = 0; i < k; i++)
//    {
//        cin >> t[i + cnt].id >> t[i + cnt].start_station >> t[i + cnt].end_station;
//        cin >> t[i + cnt].depature_time_hour >> t[i + cnt].depature_time_min;
//        cin >> t[i + cnt].pass_time >> t[i + cnt].capacity >> t[i + cnt].sailed_ticket;
//    }
//    cnt += k;
//}
//void Manage::show() {
//    for (int i = 0; i < cnt; i++)
//    {
//        cout << t[i].id << ' ' << t[i].start_station << ' ' << t[i].end_station << ' ';
//        cout << t[i].depature_time_hour << ':' << t[i].depature_time_min << ' ';
//        cout << t[i].pass_time << ' ' << t[i].capacity << ' ' << t[i].sailed_ticket;
//        cout << '\n';
//    }
//}
//void Manage::search() {
//    cout << "�����κŲ�ѯ��1�����յ�վ��ѯ��2��";
//    int ty;
//    cin >> ty;
//    if (ty == 1)
//    {
//        int tid;
//        cin >> tid;
//        for (int i = 0; i < cnt; i++)
//        {
//            if (t[i].id == tid) {
//                cout << t[i].id << ' ' << t[i].start_station << ' ' << t[i].end_station << ' ';
//                cout << t[i].depature_time_hour << ':' << t[i].depature_time_min << ' ';
//                cout << t[i].pass_time << ' ' << t[i].capacity << ' ' << t[i].sailed_ticket;
//                cout << '\n';
//                break;
//            }
//        }
//    }
//    else {
//        string station;
//        cin >> station;
//        for (int i = 0; i < cnt; i++)
//        {
//            if (t[i].end_station == station) {
//                cout << t[i].id << ' ' << t[i].start_station << ' ' << t[i].end_station << ' ';
//                cout << t[i].depature_time_hour << ':' << t[i].depature_time_min << ' ';
//                cout << t[i].pass_time << ' ' << t[i].capacity << ' ' << t[i].sailed_ticket;
//                cout << '\n';
//                break;
//            }
//        }
//    }
//}
//void Manage::buy_ticket()
//{
//
//}

#include <bits/stdc++.h>
using namespace std;
class Node {
public:
    int x;
    Node* next;
    Node* last;
};
int n, m, stratld;
vector<int>ans;
int main()
{
    cin >> n >> stratld >> m;
    stratld %= n;
    Node* first = new Node;//ͷ�ڵ�
    first->x = 1;//ͷ�ڵ��ֵΪ1
    Node* p = first;//����ͷ�ڵ�
    Node* ptr = NULL;//��¼��ʼ�Ľڵ㣬ptr
    Node* t = NULL;//�м�ڵ�t������ѭ������Ĵ���
    if (stratld == 1) {
        ptr = first;
    }
    for (int i = 2; i <= n; i++)
    {
        t = p;//�洢���ڵĽڵ�
        p->next = new Node;//���ڽڵ����һ���ڵ����½��Ľڵ�
        p = p->next;//�ƶ�����һ���ڵ�
        p->last = t;//��һ���ڵ����һ���ڵ�Ϊ���εĽڵ�
        p->x = i;//��ֵ
        if (i == stratld) {
            ptr = p;//Ѱ�ҿ�ʼѭ����λ��
        }
        if (i == n) {
            p->next = first;
            first->last = p;//ĩ��λ����
        }
    }
    ptr = ptr->last;
    for (int i = 1; i <= n; i++)
    {
        for (int k = 0; k < m; k++)//��m����
        {
            ptr = ptr->next;
        }
        ans.push_back(ptr->x);//����m�ĳ��е��¶���
        ptr->last->next = ptr->next;//���к���һ���ڵ����һ���ڵ��Ϊ���нڵ����һ���ڵ�
        ptr->next->last = ptr->last;//���к���һ���ڵ����һ���ڵ��Ϊ���нڵ����һ���ڵ�
    }
    for (int i = 0; i < ans.size(); i++)
        cout << ans[i] << ' ';//����¶���
    return 0;
}