#include "PmergeMe.hpp"

PmergeMe::PmergeMe()
{
	this->size = 0;
}

PmergeMe::~PmergeMe()
{
	
}

PmergeMe::PmergeMe(const PmergeMe& copy)
{
	this->D = copy.D;
	this->V = copy.V;
	this->size = copy.size;
}

PmergeMe &PmergeMe::operator=(const PmergeMe& copy)
{
	if (this != &copy)
	{
		this->D = copy.D;
		this->V = copy.V;
		this->size = copy.size;
	}
	return (*this);
}

int	is_number(std::string &num)
{
	int i = 0;
	while (i < (int)num.length())
	{
		if (num[i] < '0' || num[i] > '9')
			return (1);
		i++;
	}
	return (0);
}

size_t	PmergeMe::getSize()
{
	return (this->size);
}

double	getTime()
{
	struct timeval t;

	gettimeofday(&t, NULL);	
	return (((double)t.tv_sec * 1000000.0 + (double)t.tv_usec));
}

std::vector<int> generate_sequence(int n)
{
	std::vector<int> sequence;

	sequence.push_back(0);
	sequence.push_back(1);
	int i = 0;


	while (1)
	{
		i = sequence.back() + 2 * sequence[sequence.size() - 2];
		if (i > n)
			break ;
		sequence.push_back(i);
	}
	return (sequence);
}

std::vector<int> sorting_vector(std::vector<int> &container)
{
	std::vector<int> main;
	std::vector<int> pending;
	int i = 0;
	int lost_num = -1;

	if (container.size() == 1)
		return (container);
	
	if ((int)container.size() % 2 != 0)
		lost_num = container.back();
	while (i < (int)container.size() - 1)
	{
		if (container[i] > container[i + 1])
		{
			main.push_back(container[i]);
			pending.push_back(container[i + 1]);
		}
		else
		{
			main.push_back(container[i + 1]);
			pending.push_back(container[i]);
		}
		i = i + 2;
	}
	main = sorting_vector(main);
	
	std::vector<int> jacopsthal_sequence = generate_sequence((int)container.size());
	std::vector<bool> missing_index(pending.size(), false);

	i = 2;
	while (1)
	{
		if (jacopsthal_sequence[i] >= (int)pending.size())
			break ;
		std::vector<int>::iterator it = std::lower_bound(main.begin(), main.end(), pending[jacopsthal_sequence[i]]);
		main.insert(it, pending[jacopsthal_sequence[i]]);
		missing_index[jacopsthal_sequence[i]] = true;
		i++;
	}
	i = 0;
	while (i < (int)pending.size())
	{
		if (missing_index[i] == false)
		{
			std::vector<int>::iterator it = std::lower_bound(main.begin(), main.end(), pending[i]);
			main.insert(it, pending[i]);
		}
		i++;
	}
	if (lost_num != -1)
	{
		std::vector<int>::iterator it = std::lower_bound(main.begin(), main.end(), lost_num);
		main.insert(it, lost_num);
	}
	container = main;
	return (container);
}

std::deque<int> sorting_deque(std::deque<int> &container)
{
	std::deque<int> main;
	std::deque<int> pending;
	int i = 0;
	int lost_num = -1;

	if (container.size() == 1)
		return (container);
	
	if ((int)container.size() % 2 != 0)
		lost_num = container.back();
	while (i < (int)container.size() - 1)
	{
		if (container[i] > container[i + 1])
		{
			main.push_back(container[i]);
			pending.push_back(container[i + 1]);
		}
		else
		{
			main.push_back(container[i + 1]);
			pending.push_back(container[i]);
		}
		i = i + 2;
	}
	main = sorting_deque(main);
	std::vector<int> jacopsthal_sequence = generate_sequence((int)container.size());
	std::deque<bool> missing_index(pending.size(), false);

	i = 2;
	while (1)
	{
		if (jacopsthal_sequence[i] >= (int)pending.size())
			break ;
		std::deque<int>::iterator it = std::lower_bound(main.begin(), main.end(), pending[jacopsthal_sequence[i]]);
		main.insert(it, pending[jacopsthal_sequence[i]]);
		missing_index[jacopsthal_sequence[i]] = true;
		i++;
	}
	i = 0;
	while (i < (int)pending.size())
	{
		if (missing_index[i] == false)
		{
			std::deque<int>::iterator it = std::lower_bound(main.begin(), main.end(), pending[i]);
			main.insert(it, pending[i]);
		}
		i++;
	}
	if (lost_num != -1)
	{
		std::deque<int>::iterator it = std::lower_bound(main.begin(), main.end(), lost_num);
		main.insert(it, lost_num);
	}
	container = main;
	return (container);
}

void    PmergeMe::operation(char **nums)
{
	size_t i = 0;
	std::string number;
	while (nums[i])
	{
		number = nums[i];
		if (is_number(number) || number.length() >= 11 || std::atof(nums[i]) >= 2147483648)
		{
			std::cerr << "Error: issue with this arg '" << number << "'\n";
			return ;
		}
		this->V.push_back(std::atoi(nums[i]));
		this->D.push_back(std::atoi(nums[i]));
		i++;
	}
	this->size = i;
	PmergeMe copy(*this);
	long long	start = getTime();
	this->D = sorting_deque(this->D);
	this->deq_time = getTime() - start;
	start = getTime();
	this->V = sorting_vector(this->V);
	this->vec_time = getTime() - start;
	std::cout << "Before:	";
	for (size_t i = 0; i < this->size; i++)
		std::cout << copy.V[i] << " ";
	std::cout << "\n";
	std::cout << "After:	";
	for (size_t i = 0; i < this->size; i++)
		std::cout << this->V[i] << " ";
	std::cout << "\nTime to process a range of " << this->size << " elements with std::vector :" << this->vec_time << " us\n";
	std::cout << "Time to process a range of " << this->size << " elements with std::deque :" << this->deq_time << " us\n";
}
