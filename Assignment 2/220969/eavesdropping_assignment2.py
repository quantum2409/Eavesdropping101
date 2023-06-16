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

text = "qmnjvsa nv wewc flct vprj tj tvvplvl fv xja vqildhc xmlnvc nacyclpa fc gyt vfvw. fv wgqyp, pqq pqcs y wsq rx qmnjvafy cgv tlvhf cw tyl aeuq fv xja tkbv cqnsqs. lhf avawnc cv eas fuqb qvq tc yllrqr xxwa cfy. psdc uqf avrqc gefq pyat trac xwv taa wwd dv eas flcbq. vd trawm vupq quw x decgqcwt, yq yafl vlqs yqklhq! snafq vml lhvqpawr nqg_vfusr_ec_wawy qp fn wgawdgf."

decrypted_text = map_letters(permutation_decrypt(text))
print(decrypted_text)
