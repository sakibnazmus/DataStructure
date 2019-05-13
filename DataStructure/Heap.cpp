#include <iostream>

using namespace std;

template<class T> class Heap
{
private:
	int size;
	int cur_idx;
	T* heap_array;
	int type;

	int compare(T a, T b) {
		if (a < b) return -1 * type;
		return 1 * type;
	}

	void swap(T a, T b) {
		T temp = heap_array[a];
		heap_array[a] = heap_array[b];
		heap_array[b] = temp;
	}

public:
	const static int MAX_HEAP = 1;
	const static int MIN_HEAP = -1;
	Heap(int s, int t) {
		size = s;
		heap_array = new T[size];
		cur_idx = 0;
		type = t;
	}

	void insert(T val) {
		heap_array[cur_idx] = val;
		int idx = cur_idx;
		printf("%d:%d %d:%d\t%d\n", idx, heap_array[idx], (idx - 1) / 2, heap_array[(idx - 1) / 2], cur_idx);
		while (idx != 0 && compare(heap_array[idx], heap_array[(idx - 1) / 2]) > 0)
		{
			swap(idx, (idx - 1) / 2);
			idx = (idx - 1) / 2;
		}
		cur_idx++;
	}

	T extract_min() {
		T temp = heap_array[0];
		heap_array[0] = heap_array[cur_idx];
		int idx = 0;
		while (true)
		{
			if (compare(heap_array[idx], heap_array[(idx * 2) + 1]) > 0) {
				swap(heap_array[idx], heap_array[(idx * 2) + 1]);
			}
			else if (compare(heap_array[idx], heap_array[(idx * 2) + 2]) > 0) {
				swap(heap_array[idx], heap_array[(idx * 2) + 2]);
			}
			else {
				break;
			}
		}
	}

	void print_all()
	{
		for (int i = 0; i < cur_idx; i++)
		{
			printf("%d ", (int)heap_array[i]);
		}
		cout << endl;
	}
};