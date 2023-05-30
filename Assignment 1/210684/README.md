# Assignment 1

Problem Statement:

" Going to meet Larry Page, the founder of [google.com](google.com)? Must be <ins>**_feeling lucky_**</ins> no? Not that easy kid. Decipher the following and whisper the password to start this journey.
```
tbzvoclymifqef, kdr jriq ioklzbwbf, vzqgdgu iurqqivajp, fvsqpqket fwb wesmieqdnnab hfeotp qw rzroaggudk. afhd hhkcye, nlwi eqabpkyqhp rleejfv fs wclycrpvb, ceq kdrt laipsgivzv agkrdbfprgudk jriq abf pbg il vyve blovaf, iekj txdokfhe blovaf dc vivgbmj. pbgg hgp ga hrevfe pkf kuq exujjaga kj gtt_cwe_umh_lpcl_ntdwe.
```
Make sure that you are careful in every step and **_inspect every element_** of the problem. This **_class_** ain't an easy one."

### Solution

We are supposed to perform a ciphrtext-only attack. However, along with that we also have a riddle, so it is more of a puzzle than an attack :).

Since the cipher seemed like a substitution or permutation cipher, we proceeded with the frequency analysis of the cipher text. The frequency analysis revealed an Index of Coincidence of around 0.042. This analysis indicated a Vigenère Cipher.

To use the Vigenere cipher, a key is required, this key is provided from the clues in the problem statement. The approach has been listed in the ```decryption.ipynb``` file.

Thus, using the found key, and assuming Vigenere cipher, decryption was performed which furnished legible text. Puntuaction and spaces where added to the decrypted text to obtain final plaintext message.

### Password

The password is ```the_fun_has_only_begun```.
