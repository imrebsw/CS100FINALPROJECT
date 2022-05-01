// Just trying to wrap my head around things we may need
#include <string>
using namespace std;

struct date{
    int day;
    int month;
    int year;
}
struct time{
    int hour;
    int min:
    int sec;
}

class Event{
    private:
        string title;
        string description;
        int classification;
        date dueDate;
        date reminderDate;
        time reminderTime;
    public:
        Event();
        Event(string title, string description, int classification, date dueDate, date reminderDate, time reminderTime)
        ~Event();

        void setTitle(const string s);
        void setDescription(const string s);
        void setClassification(const int i);
        void setDueDate(const date d);
        void setReminderDate(const date d);
        void setReminderTime(const time t);

        const string getTitle();
        const string getDescription();
        const int getClassification();
        const date getDueDate();
        const date getReminderDate();
        const time getReminderTime();
}
