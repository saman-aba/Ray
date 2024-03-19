#pragma once
#include <thread>

class joining_thread{
public:
	joining_thread() noexcept = default;

	template<typename Callable,typename ... Args>
	explicit joining_thread(Callable&& func, Args&& ... args):
		_thread(std::forward<Callable>(func), std::forward<Args>(args) ...) 
	{}

	explicit joining_thread(std::thread t) : 
		_thread(std::move(t))
	{}

	joining_thread(joining_thread&& other) noexcept :
	       _thread(std::move(other._thread))
	{}
	
	joining_thread& operator=(joining_thread&& other) noexcept{
		if(joinable())
			join();
		_thread = std::move(other._thread);
		return *this;
	}

	join_thread& operator=(std::thread other) noexcept{
		if(joinable())
			join();
		_thread = std::move(other);
		return *this;
	}

	~joining_thread() noexcept
	{
		if(joinable())
			join();
	}

	void swap(joining_thread& other) noexcept{
		_thread.swap(other._thread);
	}

	std::thread::id get_id() const noexcept{
		return _thread.get_id();

	bool joinable() const noexcept{
		return _thread.joinable();
	}

	void join(){
		_thread.join();
	}

	void detach(){
		_thread.detach();
	}


private:
	std::thread _thread;


};
