//
// Created by citygirls on 5/15/24.
//

#ifndef WEEK8_INCLASS_PROJECT__CODES_ASSETS_H
#define WEEK8_INCLASS_PROJECT__CODES_ASSETS_H
#include <string>
#include <vector>


class Assets {
private:
    std::string name;
    std::vector<std::string> tags;

public:
    Assets(const std::string& employeeName);
    const std::string& getName() const;
    const std::vector<std::string>& getTags() const;
    void addTag(const std::string& tag);
    void removeTag(const std::string& tag);

};


#endif //WEEK8_INCLASS_PROJECT__CODES_ASSETS_H
