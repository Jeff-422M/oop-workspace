#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <stdexcept>

typedef std::vector<int> Records;

class RecordsManager {
private:
    std::fstream _file;
    std::string _filename;

public:
    RecordsManager(std::string filename) : _filename(filename) {}

    void read(Records &records) {
        _file.open(_filename, std::ios::in);
        if (!_file.is_open()) {
            throw std::runtime_error("Error: Unable to open the file: " + _filename);
        }

        std::string line;
        try {
            while (std::getline(_file, line)) {
                try {
                    records.push_back(std::stoi(line));
                } catch (const std::invalid_argument &) {
                    throw std::runtime_error("Error: Invalid data in file: " + _filename);
                } catch (const std::out_of_range &) {
                    throw std::runtime_error("Error: Data out of range in file: " + _filename);
                }
            }
        } catch (...) {
            _file.close();
            throw;
        }
        _file.close();
    }
};

int main() {
    try {
        RecordsManager recordM("test_clean.txt");
        Records myRecords;

        recordM.read(myRecords);

        int sum = 0;
        for (int i = 0; i < myRecords.size(); i++) {
            sum += myRecords[i];
        }
        std::cout << "Sum: " << sum << std::endl;
    } catch (const std::exception &e) {
        std::cerr << e.what() << std::endl;
    }

    return 0;
}
