#include <iostream>

using namespace std;

struct pq_item
{
    int value;
    int prio;
};

class prio_queue
{
    public:
        prio_queue(){
            size = -1;
        }
        void enqueue(int v, int p){
            size++;
            pq[size].value = v;
            pq[size].prio = p;
        }

        void peek(){
            int index = maxPrioIndex();
            cout << "Element o najwyzszym priorytecie(" << pq[index].prio << ") ma wartosc " << pq[index].value << endl;
        }

        void dequeue(){
            int index = maxPrioIndex();
            cout << "Usunieto element o wartosci: " << pq[index].value << " i priorytecie: " << pq[index].prio << endl;

            for (int i = index; i < size; i++){
                pq[i] = pq[i+1];
            }
            size--;
        }
    private:
        int size;
        pq_item pq[10000];
        int maxPrioIndex(){
            int index = 0;
            int maxPrio = pq[0].prio;
            for(int i = 1; i <= size; i++){
                if (pq[i].prio == maxPrio && pq[i].value > pq[index].value){
                    maxPrio = pq[i].prio;
                    index = i;
                }
                else if (pq[i].prio > maxPrio){
                    maxPrio = pq[i].prio;
                    index = i;
                }
            }

            return index;
        }
    

};


int main()
{
    prio_queue pq;
    
    pq.enqueue(20,1);
    pq.enqueue(25,2);
    pq.enqueue(30,3);
    pq.peek();
    pq.dequeue();
    pq.enqueue(22,4);
    pq.enqueue(55,6);
    pq.peek();
    pq.enqueue(70,5);
    pq.peek();
    pq.dequeue();
    pq.peek();
    return 0;
}