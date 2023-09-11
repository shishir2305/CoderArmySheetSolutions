// operations on priority queue

import java.util.PriorityQueue;

class Geeks {

    // Function to insert element into the queue
    static void insert(PriorityQueue<Integer> q, int k) {
        // Just insert k in q and don't return anything
        q.add(k);
    }

    // Function to find an element k
    static boolean find(PriorityQueue<Integer> q, int k) {

        // If k is in q return true else return false
        return q.contains(k);
    }

    // Function to delete the max element from queue
    static int delete(PriorityQueue<Integer> q) {

        // Delete the max element from q. The priority queue property might be useful
        // here
        return q.poll();
    }

}