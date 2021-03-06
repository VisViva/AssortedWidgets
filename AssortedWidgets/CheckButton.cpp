#include "CheckButton.h"


namespace AssortedWidgets
{
	namespace Widgets
	{			
        CheckButton::CheckButton(const std::string &_text,bool _check)
            :m_text(_text),
              m_check(_check)
		{
            m_size=getPreferedSize();
            m_horizontalStyle=Element::Fit;
            m_verticalStyle=Element::Fit;

            mouseReleasedHandlerList.push_back(MOUSE_DELEGATE(CheckButton::mouseReleased));
		}
		
		void CheckButton::mouseReleased(const Event::MouseEvent &e)
		{
            (void) e;
            m_check=!m_check;
		}

		CheckButton::~CheckButton(void)
		{
		}
	}
}
