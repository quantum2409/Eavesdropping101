1. Convert the ASCII representation of the key "VIcTorY" to binary:
   V: 01010110 I: 01001001 c: 01100011 T: 01010100 o: 01101111 r: 01110010 Y: 01011001

2. Concatenate all the binary values together to obtain the 64-bit key:
   01010110010010010110001101010100011011110111001001011001

3. Perform the initial permutation (IP) on the 64-bit plaintext:
   C: 01000011 H: 0100100 A: 01000001 m: 01101101 p: 01110000 i: 01101001 o: 01101111 n: 01101110

4. Concatenate all the binary values together to obtain the 64-bit plaintext:
   0100001101001000010000010110110101110000011010010110111101101110

5. Encrypt the plaintext using the DES encryption algorithm and the 1-round key schedule in the Feistel network:
