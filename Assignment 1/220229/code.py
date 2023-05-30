LETTERS = 'ABCDEFGHIJKLMNOPQRSTUVWXYZ'
def main():
  myMessage = """tbzvoclymifqef, kdr jriq ioklzbwbf, vzqgdgu iurqqivajp, fvsqpqket fwb wesmieqdnnab hfeotp qw rzroaggudk. afhd hhkcye, nlwi eqabpkyqhp rleejfv fs wclycrpvb, ceq kdrt laipsgivzv agkrdbfprgudk jriq abf pbg il vyve blovaf, iekj txdokfhe blovaf dc vivgbmj. pbgg hgp ga hrevfe pkf kuq exujjaga kj gtt_cwe_umh_lpcl_ntdwe."""
  myKey = 'RNMPXC'
  translated = decryptMessage(myKey, myMessage)
  print(translated)
def decryptMessage(key, message):
  return translateMessage(key, message)
def translateMessage(key, message):
  translated = []
  keyIndex = 0
  key = key.upper()
  for symbol in message:
    num = LETTERS.find(symbol.upper())
    if num != -1:
        num -= LETTERS.find(key[keyIndex])
        num %= len(LETTERS)
        if symbol.isupper():
            translated.append(LETTERS[num])
        elif symbol.islower():
            translated.append(LETTERS[num].lower())
        keyIndex += 1 # move to the next letter in the key
        if keyIndex == len(key):
            keyIndex = 0
    else:
        translated.append(symbol)
  return ''.join(translated)

if __name__ == '__main__':
  main()
