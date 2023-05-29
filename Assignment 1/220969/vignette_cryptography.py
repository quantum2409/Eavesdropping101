ciphertext = "tbzvoclymifqef, kdr jriq ioklzbwbf, vzqgdgu iurqqivajp, fvsqpqket fwb wesmieqdnnab hfeotp qw rzroaggudk. afhd hhkcye, nlwi eqabpkyqhp rleejfv fs wclycrpvb, ceq kdrt laipsgivzv agkrdbfprgudk jriq abf pbg il vyve blovaf, iekj txdokfhe blovaf dc vivgbmj. pbgg hgp ga hrevfe pkf kuq exujjaga kj gtt_cwe_umh_lpcl_ntdwe."
keyword = "rnmpxc"

j = 0
for i in range(len(ciphertext)):

    if(ciphertext[i]>='a' and ciphertext[i]<='z'):
        print(chr((ord(ciphertext[i]) - ord('a') - (ord(keyword[j % 6]) - ord('a'))) % 26 + ord('a')),end="")
        j +=1

    else:
        print(ciphertext[i],end="")


