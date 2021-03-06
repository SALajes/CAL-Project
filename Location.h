#ifndef CAL_PROJECT_LOCATION_H
#define CAL_PROJECT_LOCATION_H

#include <string>
#include <vector>

enum TYPE {
    GARAGE, DEPOT, DELIVER, UNUSED
};

class Location {
    int x, y, lat, lon, id;
    std::vector<std::string> tags;
    TYPE type;

public:
    Location(int x, int y, int lat, int lon, int id);

    Location(int id);

    void set_tags(std::string tags);

    void add_tag(std::string tag);

    void set_type(TYPE type);

    double getX() { return x; }

    double getY() { return y; }

    void setX(int x) { this->x = x; }

    void setY(int y) { this->y = y; }

    int getID() { return id; }

    std::vector<std::string> getTags();

    TYPE getType();

    bool operator==(const Location& l1);

    bool operator<(const Location& l1);

    Location();
};

#endif //CAL_PROJECT_LOCATION_H
