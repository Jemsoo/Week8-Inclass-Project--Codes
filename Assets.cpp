//
// Created by citygirls on 5/15/24.
//

#include "Assets.h"
// Constructor
Assets::Assets(const std::string& employeeName) : name(employeeName) {}

// Getter for name
const std::string& Assets::getName() const {
    return name;
}

// Getter for tags
const std::vector<std::string>& Assets::getTags() const {
    return tags;
}

// Add a tag
void Assets::addTag(const std::string& tag) {
    tags.push_back(tag);
}

// Remove a tag
void Assets::removeTag(const std::string& tag) {
    auto it = std::find(tags.begin(), tags.end(), tag);
    if (it != tags.end()) {
        tags.erase(it);
    }
}