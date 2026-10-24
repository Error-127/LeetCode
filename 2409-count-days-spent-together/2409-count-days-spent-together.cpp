class Solution {
public:
    int countDaysTogether(string a, string al, string b, string bl) {
            vector<int> arr={31,28,31,30,31,30,31,31,30,31,30,31};
            int days=0;
            int days1=0;
            if(a[0]=='0'){
                int n=a[1]-'0';
                for(int i=0;i<n-1;i++){
                    days+=arr[i];
                }
                string s;
                s.push_back(a[3]);
                s.push_back(a[4]);
                days+=stoi(s);
            }
            else{
                string t;
                t.push_back(a[0]);
                t.push_back(a[1]);
                int n=stoi(t);
                 for(int i=0;i<n-1;i++){
                    days+=arr[i];
                }
                string s;
                s.push_back(a[3]);
                s.push_back(a[4]);
                days+=stoi(s);
            }
          if(al[0]=='0'){
                int n=al[1]-'0';
                for(int i=0;i<n-1;i++){
                    days1+=arr[i];
                }
                string s;
                s.push_back(al[3]);
                s.push_back(al[4]);
                days1+=stoi(s);
            }
            else{
                string t;
                t.push_back(al[0]);
                t.push_back(al[1]);
                int n=stoi(t);
                 for(int i=0;i<n-1;i++){
                    days1+=arr[i];
                }
                string s;
                s.push_back(al[3]);
                s.push_back(al[4]);
                days1+=stoi(s);
            }
            int days2=0;
            int days3=0;
            if(b[0]=='0'){
                int n=b[1]-'0';
                for(int i=0;i<n-1;i++){
                    days2+=arr[i];
                }
                string s;
                s.push_back(b[3]);
                s.push_back(b[4]);
                days2+=stoi(s);
            }
            else{
                string t;
                t.push_back(b[0]);
                t.push_back(b[1]);
                int n=stoi(t);
                 for(int i=0;i<n-1;i++){
                    days2+=arr[i];
                }
                string s;
                s.push_back(b[3]);
                s.push_back(b[4]);
                days2+=stoi(s);
            }
            if(bl[0]=='0'){
                int n=bl[1]-'0';
                for(int i=0;i<n-1;i++){
                    days3+=arr[i];
                }
                string s;
                s.push_back(bl[3]);
                s.push_back(bl[4]);
                days3+=stoi(s);
            }
            else{
                string t;
                t.push_back(bl[0]);
                t.push_back(bl[1]);
                int n=stoi(t);
                 for(int i=0;i<n-1;i++){
                    days3+=arr[i];
                }
                string s;
                s.push_back(bl[3]);
                s.push_back(bl[4]);
                days3+=stoi(s);
            }
            if(days2>days1) return 0;
            if(days3<days) return 0;
            if(days2>=days&&days3<=days1) return days3-days2+1;
            if(days2<=days&&days3>=days1) return days1-days+1;
            if(days<=days2&&days3>=days1) return days1-days2+1;
            if(days2<=days&&days3<=days1) return days3-days+1;
            return 0;
    }
};