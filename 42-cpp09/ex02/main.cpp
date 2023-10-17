/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaciel- <hmaciel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 16:35:47 by hmaciel-          #+#    #+#             */
/*   Updated: 2023/10/17 11:25:55 by hmaciel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <algorithm>
#include <deque>

int K = 5;

static void insertionSort(std::deque<int> &A, int p, int q) {
    for (int i = p; i < q; i++) {
        int tempVal = A[i + 1];
        int j = i + 1;
        while (j > p && A[j - 1] > tempVal) {
            A[j] = A[j - 1];
            j--;
        }
        A[j] = tempVal;
    }
	std::deque<int> temp;
	copy(A.begin() + p, A.begin() + q + 1, temp);
    //int temp[] = Arrays.copyOfRange(A, p, q +1);
}

static void merge(std::deque<int> &A, int p, int q, int r) {
    int n1 = q - p + 1;
    int n2 = r - q;
	std::deque<int> LA;
	std::deque<int> RA;
	copy(A.begin() + p, A.begin() + q + 1, LA);
	copy(A.begin() + q + 1, A.begin() + r + 1, RA);
    //int LA[] = Arrays.copyOfRange(A, p, q +1);
    //int RA[] = Arrays.copyOfRange(A, q+1, r +1);
    int RIDX = 0;
    int LIDX = 0;
    for (int i = p; i < r - p + 1; i++) {
        if (RIDX == n2) {
            A[i] = LA[LIDX];
            LIDX++;
        } else if (LIDX == n1) {
            A[i] = RA[RIDX];
            RIDX++;
        } else if (RA[RIDX] > LA[LIDX]) {
            A[i] = LA[LIDX];
            LIDX++;
        } else {
            A[i] = RA[RIDX];
            RIDX++;
        }
    }
}


static void sort(std::deque<int> &A, int p, int r) {
    if (r - p > K) {
        int q = (p + r) / 2;
        sort(A, p, q);
        sort(A, q + 1, r);
        merge(A, p, q, r);
    } else {
        insertionSort(A, p, r);
    }
}



int main(int argc, char const *argv[])
{
	std::deque<int> A;
	
	A.push_back(2);
	A.push_back(5);
	A.push_back(1);
	A.push_back(6);
	A.push_back(7);
	A.push_back(3);
	A.push_back(8);
	A.push_back(4);
	A.push_back(9);

	sort(A, 0, A.size() - 1);

	std::deque<int>::iterator begin = A.begin();
	std::deque<int>::iterator end = A.end();
	while ( begin != end )
	{
		std::cout << *begin << std::endl;
		begin++;
	}
	//Arrays.stream(A).forEach(i -> System.out.print(i + " "));
	return 0;
}
