import sympy
import random

def generate_keypair(bits):
    # Step 1: Choose two large prime numbers, p and q
    p = sympy.randprime(2**(bits//2), 2**(bits//2 + 1))
    q = sympy.randprime(2**(bits//2), 2**(bits//2 + 1))

    # Step 2: Compute n (modulus) and totient (Euler's totient function)
    n = p * q
    totient = (p - 1) * (q - 1)

    # Step 3: Choose an integer e such that 1 < e < totient and e is coprime to totient
    e = random.randint(2, totient - 1)
    while sympy.gcd(e, totient) != 1:
        e = random.randint(2, totient - 1)

    # Step 4: Compute the modular multiplicative inverse of e (private key)
    d = sympy.mod_inverse(e, totient)

    # Public key: (n, e), Private key: (n, d)
    return (n, e), (n, d)

def encrypt(message, public_key):
    n, e = public_key
    # Encrypt the message using modular exponentiation
    ciphertext = pow(message, e, n)
    return ciphertext

def decrypt(ciphertext, private_key):
    n, d = private_key
    # Decrypt the ciphertext using modular exponentiation
    message = pow(ciphertext, d, n)
    return message

# Example usage:
bits = 1024
public_key, private_key = generate_keypair(bits)

# Message to encrypt (an integer for simplicity)
message_to_encrypt = 784

# Encryption
encrypted_message = encrypt(message_to_encrypt, public_key)

# Decryption
decrypted_message = decrypt(encrypted_message, private_key)

print(f"Original Message: {message_to_encrypt}")
print(f"Encrypted Message: {encrypted_message}")
print(f"Decrypted Message: {decrypted_message}")