def encrypt(text, shift):
    result = ""
    for char in text:
        if char == ' ':
            raise ValueError("Spaces are not allowed in the input text.")
        elif char.isalpha():  # Check if the character is a letter
            shift_base = ord('A') if char.isupper() else ord('a')
            result += chr((ord(char) - shift_base + shift) % 26 + shift_base)
        else:
            # Encrypt special characters using their ASCII values
            result += chr((ord(char) + shift) % 128)
    return result

# Test the function
try:
    text = input("Enter the text to encrypt: ")
    shift = int(input("Enter the shift value: "))
    encrypted_text = encrypt(text, shift)
    print(f"Encrypted text: {encrypted_text}")
except ValueError as e:
    print(e)