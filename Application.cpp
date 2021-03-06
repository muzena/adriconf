#include "Application.h"

const Glib::ustring &Application::getName() const {
    return name;
}

void Application::setName(Glib::ustring name) {
    this->name = std::move(name);
}

const Glib::ustring &Application::getExecutable() const {
    return executable;
}

void Application::setExecutable(Glib::ustring executable) {
    this->executable = std::move(executable);
}

std::list<ApplicationOption_ptr> &Application::getOptions() {
    return this->options;
}

void Application::addOption(ApplicationOption_ptr option) {
    this->options.emplace_back(option);
}

void Application::setOptions(std::list<ApplicationOption_ptr> options) {
    this->options = std::move(options);
}