To encrypt the word "CHAmpion" using 1-round DES with the key "VIcTorY", we need to perform the following steps:

Convert the ASCII representation of the key "VIcTorY" to binary:
V: 01010110
I: 01001001
c: 01100011
T: 01010100
o: 01101111
r: 01110010
Y: 01011001

Concatenating all the binary values together, we get the 64-bit key: 01010110010010010110001101010100011011110111001001011001

Perform the initial permutation (IP) on the 64-bit plaintext:
C: 01000011
H: 01001000
A: 01000001
m: 01101101
p: 01110000                                                                                                                                                                                                         i: 01101001
o: 01101111
n: 01101110

Concatenating all the binary values together, we get the 64-bit plaintext: 0100001101001000010000010110110101110000011010010110111101101110

Perform the DES encryption algorithm using the 1-round key schedule and the Feistel network:

Perform the initial permutation (IP) on the plaintext.
Split the 64-bit plaintext into two halves: Left (L0) and Right (R0), each of 32 bits.
Expand the Right half (R0) to 48 bits using the expansion permutation (E).
XOR the expanded Right half (R0) with the 48-bit round key (K1) obtained from the key schedule.
Apply the S-box substitution (S) to the XOR result.
Perform a permutation (P) on the S-box output.
XOR the permuted output with the Left half (L0).
Swap the Left (L0) and Right (R0) halves.