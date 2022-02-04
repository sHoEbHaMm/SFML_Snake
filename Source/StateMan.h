#pragma once
#include<stack>
#include<memory>
#include "State.h"


namespace Engine
{
	class StateMan
	{
	private:
		std::stack<std::unique_ptr<State>> m_stateStack;
		std::unique_ptr<State> m_NewState;

		bool m_add;
		bool m_replace;
		bool m_remove;

	public:
		StateMan();
		~StateMan();

		void Add(std::unique_ptr<State> toAdd, bool replace = false);
		void PopCurrent();
		void ProcessStateChange();
		std::unique_ptr<State>& GetCurrent();
	};
}


