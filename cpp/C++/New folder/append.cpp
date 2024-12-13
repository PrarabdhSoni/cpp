#include <iostream>
#include <fstream>

struct Record
{
    int id;
    std::string data;
};

int main()
{
    std::ofstream outfile("data.bin", std::ios::binary);
    if (outfile.is_open())
    {
        Record record1 = {1, "Record 1"};
        Record record2 = {2, "Record 2"};
        Record record3 = {3, "Record 3"};
        outfile.write(reinterpret_cast<char *>(&record1), sizeof(Record));
        outfile.write(reinterpret_cast<char *>(&record2), sizeof(Record));
        outfile.write(reinterpret_cast<char *>(&record3), sizeof(Record));
        outfile.close();
    }
    std::ifstream infile("data.bin", std::ios::binary);
    if (infile.is_open())
    {
        int recordNumber;
        infile.seekg((recordNumber - 1) * sizeof(Record));
        Record record;
        infile.read(reinterpret_cast<char *>(&record), sizeof(Record));
        std::cout << "Record" << record.id << ";" << record.data << std::endl;
        infile.close();
    }
    return 0;
}