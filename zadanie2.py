import random

input_range = int(input("Podaj zakres: "))
input_chosen = int(input("Ile liczb z tego chcesz?: "))

chosen = 1

for e in range(1, input_range + 1):
    if e <= (input_range - input_chosen):
        pass
    else:
        chosen = chosen * e



permutation_range = 1
for a in range(1, input_range + 1):
    permutation_range = permutation_range * a

signs = ""
for b in range(1, input_range + 1):
    signs += str(b)
backup = signs
print("Backup: " + backup)

answer = []

attempt_number = 1
while len(answer) <= chosen - 1:

    line = ""
    for c in range(input_chosen):
        sign = random.choice(signs)
        line += sign
        signs = signs.replace(sign, "")

    if line not in answer:
        answer.append(line)
    else:
        pass

    signs = backup
    attempt_number += 1

print("Podejsc: " + str(attempt_number))
for d in range(permutation_range - 1):
    print("Proba nr " + str(d) + ": " + answer[d])
