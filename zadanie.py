import random

input_range = int(input("Podaj zakres: "))
permutation_range = 1
for a in range(1, input_range + 1):
    permutation_range = permutation_range * a

signs = ""
for b in range(1, input_range + 1):
    signs += str(b)
answer = [signs]

attempt_number = 1
while len(answer) <= permutation_range-1:
    print("Podejsc: " + str(attempt_number), end='\r')  # /n następna linia /r zastępuje tą sammą linię

    line = ""
    for c in range(input_range):
        sign = random.choice(signs)
        line += sign
        signs = signs.replace(sign, "")

    if line not in answer:
        answer.append(line)

    signs = answer[0]
    attempt_number += 1

print("Podejsc: " + str(attempt_number))
for d in range(permutation_range):
    print(answer[d])
