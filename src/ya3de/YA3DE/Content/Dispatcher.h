/*	This file is part of YA3DE.

	YA3DE is free software: you can redistribute it and/or modify
	it under the terms of the GNU General Public License as published by
	the Free Software Foundation, either version 3 of the License, or
	(at your option) any later version.

	YA3DE is distributed in the hope that it will be useful,
	but WITHOUT ANY WARRANTY; without even the implied warranty of
	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
	GNU General Public License for more details.

	You should have received a copy of the GNU General Public License
	along with YA3DE.  If not, see <http://www.gnu.org/licenses/>. */

#ifndef YA3DE_DISPATCHER_H
#define YA3DE_DISPATCHER_H

#include <queue>
#include <mutex>
#include <thread>
#include <vector>
#include <functional>

namespace YADE
{
	class FunctionDispatcher
	{
	public:
		FunctionDispatcher();

		void InitializeAsyncWorkers();
		void EnqueueAsync(std::function<void()> func);
		void Shutdown();
	};
}

#endif
