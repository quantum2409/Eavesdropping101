cipher_txt = input()
key = input()
string = ""
count = 0
for i in range(0, len(cipher_txt)):
    if 96 < ord(cipher_txt[i]) < 123:
        string += chr((ord(cipher_txt[i]) - ord(key[count % len(key)]) + 27) % 26 + 96)
        count += 1
    else:
        string += cipher_txt[i]
print(string)
