//C++ O(nlogn) because of the ordering

bool compare(string a, string b) {
    if (a.size() > b.size()) return true;
    if (a.size() < b.size()) return false;
    return (a.compare(b)>0);
}

vector<string> modify(const vector<string> &original, const vector<string> &add, const vector<string> &subs) {

    unordered_set<string> ms;

    for (int i = 0; i < original.size(); i++ ) {
        ms.insert(original[i]);
    }
    for (int i = 0; i < add.size(); i++ ) {
        ms.insert(add[i]);
    }
    for (int i = 0; i < subs.size(); i++ ) {
        ms.erase(subs[i]);
    }

    vector<string> ans(ms.begin(),ms.end());
    sort(ans.begin(),ans.end(),compare);
    return ans;
}

int main() {

    vector<string> o({"one","two","three"});
    vector<string> a({"one","two","five","six"});
    vector<string> d({"two","five"});

    vector<string> ans = modify(o,a,d);

    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }
    cout << endl;

}
