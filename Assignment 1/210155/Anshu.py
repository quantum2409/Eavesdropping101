def decrypt_vigenere(ciphertext, key):
    decrypted_message = ""
    key_length = len(key)
    key_index = 0

    for char in ciphertext:
        if char.isalpha():
            ascii_offset = ord('a') if char.islower() else ord('A')
            key_char = key[key_index % key_length]
            key_offset = ord(key_char.lower()) - ord('a')
            decrypted_char = chr((ord(char) - ascii_offset + 26 - key_offset) % 26 + ascii_offset)
            decrypted_message += decrypted_char
            key_index += 1
        else:
            decrypted_message += char

    return decrypted_message

encrypted_message = "tbzvoclymifqef, kdr jriq ioklzbwbf, vzqgdgu iurqqivajp, fvsqpqket fwb wesmieqdnnab hfeotp qw rzroaggudk. afhd hhkcye, nlwi eqabpkyqhp rleejfv fs wclycrpvb, ceq kdrt laipsgivzv agkrdbfprgudk jriq abf pbg il vyve blovaf, iekj txdokfhe blovaf dc vivgbmj. pbgg hgp ga hrevfe pkf kuq exujjaga kj gtt_cwe_umh_lpcl_ntdwe."
key = "rnmpxc"

decrypted_message = decrypt_vigenere(encrypted_message, key)
print(decrypted_message)
