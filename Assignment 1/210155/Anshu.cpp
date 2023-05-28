#include <iostream>
using namespace std;
int main()
{
    string s = "tbzvoclymifqef, kdr jriq ioklzbwbf, vzqgdgu iurqqivajp, fvsqpqket fwb wesmieqdnnab hfeotp qw rzroaggudk. afhd hhkcye, nlwi eqabpkyqhp rleejfv fs wclycrpvb, ceq kdrt laipsgivzv agkrdbfprgudk jriq abf pbg il vyve blovaf, iekj txdokfhe blovaf dc vivgbmj. pbgg hgp ga hrevfe pkf kuq exujjaga kj gtt_cwe_umh_lpcl_ntdwe.";

    int ans[s.length()];

    string key = "imnkcx"; // imnkcx

    int j = 0;
    for (int i = 0; i < s.length(); i++)
    {

        if ((s[i] != ',') && (s[i] != '.') && (s[i] != ' ') && (s[i] != '_'))
        {

            ans[i] = (((s[i] + key[(j % key.length())] - 'a' + 1)) - 'a') % 26 + 'a';
            j++;
        }
        else
        {

            ans[i] = s[i];
        }
    }
    char res[s.length()];

    for (int i = 0; i < s.length(); i++)
    {
        res[i] = ans[i];
    }
    cout << res << "\n";
    return 0;
}