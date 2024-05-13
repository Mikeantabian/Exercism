#include <cctype>
#if !defined(CRYPTO_SQUARE_H)
#define CRYPTO_SQUARE_H
#include <string>

namespace crypto_square {
    class cipher {
    public:
        explicit cipher(const std::string& plaintext) : plaintext(normalize(plaintext)) {}
        
        std::string normalized_cipher_text() const {
            // Check if the plaintext is empty
            if (plaintext.empty()) {
                return "";
            }

            // Calculate the number of columns (c) and rows (r) for the rectangle
            int length = plaintext.length();
            int c = 1;
            int r = 1;
            while (c * r < length) {
                if (c == r) {
                    c++;
                } else {
                    r++;
                }
            }

            // Construct the encoded text by organizing the normalized text into chunks
            std::string encoded_text;
            for (int i = 0; i < c; i++) {
                for (int j = 0; j < r; j++) {
                    int index = j * c + i;
                    if (index < length) {
                        encoded_text.push_back(plaintext[index]);
                    } else {
                        encoded_text.push_back(' ');
                    }
                }
                if (i != c - 1) {
                    encoded_text.push_back(' ');
                }
            }
            return encoded_text;
        }

    private:
        std::string plaintext;

        static std::string normalize(const std::string& text) {
            // Normalize the plaintext by removing spaces and punctuation, and downcasing the characters
            std::string normalized_text;
            for (char ch : text) {
                if (std::isalpha(ch) || std::isdigit(ch)) {
                    normalized_text.push_back(std::tolower(ch));
                }
            }
            return normalized_text;
        }
    };
}  // namespace crypto_square

#endif // CRYPTO_SQUARE_H