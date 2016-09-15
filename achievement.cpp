#include "achievement.h"

Achievement::Achievement() : m_Title( "NO_TITLE" ), 
                             m_Description( "NO_DESCRIPTION" ),
                             m_Callback( nullptr ) {

}

Achievement::Achievement( Achievement &ach ) : m_Title( ach.m_Title ),
                                               m_Description( ach.m_Description ),
                                               m_Callback( ach.m_Callback ) {

}

Achievement::Achievement( const std::string &title ) : m_Title( title ), 
                                                       m_Description( "NO_DESCRIPTION" ),
                                                       m_Callback( nullptr ) {

}

Achievement::Achievement( const std::string &title, const std::string &desc ) : m_Title( title ),
                                                                                m_Description( desc ),
                                                                                m_Callback( nullptr ) {

}

Achievement::Achievement( const std::string &title, const std::string &desc,
                          achievement_callback_t callback ) : m_Title( title ),
                                                              m_Description( desc ),
                                                              m_Callback( callback ) {

}

bool Achievement::CheckAchievementState() const {
 return m_Callback();
}

void Achievement::RegisterAchievementCallback( achievement_callback_t callback ) {
 m_Callback = callback;
}

void Achievement::RegisterAchievementCallback( const achievement_callback_t &callback ) {
 m_Callback = callback;
}
