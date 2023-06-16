# Solution

First, I write a code in python which decrypt the text of permutation cipher using the key 43512.

The code is given below.

````python
def permutation_decrypt(line):
    block_size = 5
    key = [4, 3, 5, 1, 2]
    result = ''
    special_chars = []

    for i, char in enumerate(line):
        if not char.isalpha():
            special_chars.append((i, char))

    line = ''.join(char for char in line if char.isalpha())

    num_blocks = len(line) // block_size

    for i in range(num_blocks):
        start_index = i * block_size
        block = line[start_index:start_index + block_size]

        permuted_block = [block[key[j] - 1] for j in range(block_size)]
        result += ''.join(permuted_block)

    remaining_chars = line[num_blocks * block_size:]
    result += remaining_chars

    for pos, char in special_chars:
        result = result[:pos] + char + result[pos:]

    return result

````

Then I mapped each letter according to the mapping given below.

````
'a': 't', 'b': 'v', 'c': 'i', 'd': 'u', 'e': 'c', 'f': 'h', 'g': 'g', 'h': 'p', 'i': 'q', 'j': 'b', 'k': 'j', 'l': 's', 'm': 'k', 'n': 'r', 'o': 'x', 'p': 'd', 'q': 'a', 'r': 'w', 's': 'f', 't': 'l', 'u': 'm', 'v': 'e', 'w': 'o', 'x': 'y', 'y': 'n', 'z': 'z', 'A': 'T', 'B': 'V', 'C': 'I', 'D': 'U', 'E': 'C', 'F': 'H', 'G': 'G', 'H': 'P', 'I': 'Q', 'J': 'B', 'K': 'J', 'L': 'S', 'M': 'K', 'N': 'R', 'O': 'X', 'P': 'D', 'Q': 'A', 'R': 'W', 'S': 'F', 'T': 'L', 'U': 'M', 'V': 'E', 'W': 'O', 'X': 'Y', 'Y': 'N', 'Z': 'Z'
````
The code for doing this is given below.

````python
def map_letters(line):
    mapping = {
        'a': 't', 'b': 'v', 'c': 'i', 'd': 'u', 'e': 'c', 'f': 'h', 'g': 'g', 'h': 'p',
        'i': 'q', 'j': 'b', 'k': 'j', 'l': 's', 'm': 'k', 'n': 'r', 'o': 'x', 'p': 'd',
        'q': 'a', 'r': 'w', 's': 'f', 't': 'l', 'u': 'm', 'v': 'e', 'w': 'o', 'x': 'y',
        'y': 'n', 'z': 'z'
    }

    result = ''

    for char in line:
        if char.isalpha():
            if char.islower():
                result += mapping[char]
            else:
                result += mapping[char.lower()].upper()
        else:
            result += char

    return result

````
Finally I can print out our encrypted message after applying both.

## The final message

breaker of this code will be blessed by the squeaky spirit residing in the hole. go ahead, and find a way of breaking the spell on him cast by the evil jaffar. the spirit of the cave man is always with you. find the magic wand that will let you out of the caves. it would make you a magician, no less than jaffar! speak the password the_magic_of_wand to go through.

## Password

the_magic_of_wand
