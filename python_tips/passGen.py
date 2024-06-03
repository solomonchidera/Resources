import random
import string

def generate_password(length, use_lowercase, use_uppercase, use_digits, use_special):
    character_sets = []
    if use_lowercase:
        character_sets.append(string.ascii_lowercase)
    if use_uppercase:
        character_sets.append(string.ascii_uppercase)
    if use_digits:
        character_sets.append(string.digits)
    if use_special:
        character_sets.append(string.punctuation)

    if not character_sets:
        return ""
    
    all_characters = ''.join(character_sets)

    password = []
    if use_lowercase:
        password.append(random.choice(string.ascii_lowercase))
    if use_uppercase:
        password.append(random.choice(string.ascii_uppercase))
    if use_digits:
        password.append(random.choice(string.digits))
    if use_special:
        password.append(random.choice(string.punctuation))
    
    password += random.choices(all_characters, k=length - len(password))
    
    random.shuffle(password)
    
    return ''.join(password)

def main():
    length = int(input("Enter the desired password length: "))
    use_lowercase = input("Include lowercase letters? (yes/no): ").lower() == 'yes'
    use_uppercase = input("Include uppercase letters? (yes/no): ").lower() == 'yes'
    use_digits = input("Include digits? (yes/no): ").lower() == 'yes'
    use_special = input("Include special characters? (yes/no): ").lower() == 'yes'
    
    if length < 1:
        print("Password length should be at least 1 character.")
        return

    password = generate_password(length, use_lowercase, use_uppercase, use_digits, use_special)
    if not password:
        print("No character sets selected. Cannot generate password.")
    else:
        print(f"Generated password: {password}")

if __name__ == "__main__":
    main()

