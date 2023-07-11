#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main() {
    string cipherText = "qmnjvsa nv wewc flct vprj tj tvvplvl fv xja vqildhc "
                          "xmlnvc nacyclpa fc gyt vfvw. fv wgqyp, pqq pqcs y wsq "
                          "rx qmnjvafy cgv tlvhf cw tyl aeuq fv xja tkbv cqnsqs. "
                          "lhf avawnc cv eas fuqb qvq tc yllrqr xxwa cfy. psdc uqf "
                          "avrqc gefq pyat trac xwv taa wwd dv eas flcbq. vd trawm "
                          "vupq quw x decgqcwt, yq yafl vlqs yqklhq! snafq vml "
                          "lhvqpawr nqg_vfusr_ec_wawy qp fn wgawdgf.";

    string decryptedText;
    int index = 0;
    while (index < cipherText.length()) {
        char characters[5];
        string interstitials[5];
        for (int curIndex = 0; curIndex < 5; curIndex++) {
            if (isalpha(cipherText[index])) {
                characters[curIndex] = cipherText[index];
                // Take all the non-letters with it too
                while (!isalpha(cipherText[index + 1]) && index < cipherText.length() - 1)
                    interstitials[curIndex] += cipherText[++index];
            }
            index++;
        }
        // Concatenate in new order
        decryptedText += characters[3] + interstitials[0] + characters[2] + interstitials[1] +
                        characters[4] + interstitials[2] + characters[0] + interstitials[3] + characters[1] + interstitials[4];
    }

    cipherText = decryptedText;
    string substitutionRules[] = { "Ow", "Aq", "Ta", "Sl", "Ph", "Ev", "Hf", "Gg", "Ud", "Rn", "Km", "Wr", "Dp", "Ic", "Ny", "Bj",
                                   "Fs", "Ce", "Lt", "Yx", "Qi", "Mu", "Jk", "Vb" };

    for (string rule : substitutionRules) {
        size_t pos = cipherText.find(rule[1]);
        while (pos != string::npos) {
            cipherText.replace(pos, 1, string(1, rule[0]));
            pos = cipherText.find(rule[1], pos + 1);
        }
    }

    // Print
    int position = 0;
    bool afterFullStop = false;
    bool replaceSpaces = false;
    for (char c : cipherText) {
        if (!isalpha(c)) {
            if (afterFullStop) {
                cout << c;
            } else {
                if (c == '.') {
                    afterFullStop = true;
                    replaceSpaces = true;
                } else if (c == '_') {
                    cout << ' ';
                } else {
                    if (replaceSpaces) {
                        cout << " " << c;
                        replaceSpaces = false;
                    } else {
                        cout << c;
                    }
                }
            }
            continue;
        }
        cout << c;
        position++;
        if (position == 5) {
            position = 0;
        }
    }

    return 0;
}
