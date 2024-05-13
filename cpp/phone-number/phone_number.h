#if !defined(PHONE_NUMBER_H)
#define PHONE_NUMBER_H
#include <string>
#include <cctype>
#include <stdexcept>

namespace phone_number {
    class phone_number {
    public:
        phone_number(const std::string& phoneNumber) : number_(cleanPhoneNumber(phoneNumber)) {}

        std::string number() const {
            return number_;
        }

        std::string area_code() const {
            return number_.substr(0, 3);
        }

        operator std::string() const {
            return "(" + area_code() + ") " + number_.substr(3, 3) + "-" + number_.substr(6);
        }

    private:
        std::string number_;

        std::string cleanPhoneNumber(const std::string& phoneNumber) const {
            std::string cleanedNumber;

            // Remove all non-digit characters
            for (char c : phoneNumber) {
                if (std::isdigit(c)) {
                    cleanedNumber += c;
                }
            }

            // Remove leading '1' if present (country code)
            if (cleanedNumber.size() == 11 && cleanedNumber[0] == '1') {
                cleanedNumber.erase(0, 1);
            }

            // Validate number of digits
            if (cleanedNumber.size() != 10 || cleanedNumber[0] < '2' || cleanedNumber[3] < '2') {
                throw std::domain_error("Invalid phone number");
            }

            return cleanedNumber;
        }
    };
}  // namespace phone_number

#endif // PHONE_NUMBER_H