#pragma once

#include <string>
#include <thread>

typedef std::function<bool()> achievement_callback_t;

struct achievement_print_t {
 explicit achievement_print_t( const int &frameLeft, const int &id ) : FrameLeft( frameLeft ),
                                                                       Index( id ) {
  
 };

 int FrameLeft;
 int Index;
};

class Achievement {
 public:
  explicit Achievement();
  explicit Achievement( Achievement &ach );
  explicit Achievement( const std::string &title );
  explicit Achievement( const std::string &title, const std::string &desc );
  explicit Achievement( const std::string &title, const std::string &desc, achievement_callback_t callback );

  bool     CheckAchievementState() const;

  void     RegisterAchievementCallback( const achievement_callback_t &callback );
  void     RegisterAchievementCallback( achievement_callback_t callback );

 private:
  std::string            m_Title;
  std::string            m_Description;
  achievement_callback_t m_Callback;
};
