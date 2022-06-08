#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


//Struct
struct adjacent{
    int city, adj1, adj2, adj3;
};

struct Node{
    int val, cost;
    Node* next;
};

struct Edge{
    int src, dst, weight;
};

//Classes 
class cityMap{
    private:
    adjacent cityMap[4];

    public:
    void createMap();
    void printMap();
};

class Graph{
    Node* getAdjacentNode(int value, int weight, Node* head){
        Node* newNode = new Node();
        newNode->val = value;
        newNode->cost = weight;
        newNode->next =head;
        return newNode;
    }
    int N;
    
    public:
    Node **head;

    Graph(Edge edges[], int n, int N){
        head = new Node*[N]();
        this->N = N;

        for (int i = 0; i < N; ++i){
            int src = edges[i].src;
            int dst = edges[i].dst;
            int weight = edges[i].weight;
            Node* newNode = getAdjacentNode(dst, weight, head[src]);
            head[src] = newNode;
            newNode = getAdjacentNode(src, weight, head[dst]);
            head[dst] = newNode;
        }
    }
    //Destruct
    ~Graph(){
        for (int i = 0; i < N; i++){
            delete[] head[i];
            delete[] head;
        }
    }
};

void printList(Node* ptr){
    while (ptr != nullptr){
        cout << " -> " << ptr->val << " ";
        ptr = ptr->next;
    }
    cout << endl;
}

void printList(Node* ptr, int i){
    while(ptr != nullptr){
        cout << "[" << i << ", " << ptr->val << ", " << ptr->cost << " miles]\n";
        ptr = ptr->next;
    }
}

void cityMap :: createMap(){
    for (int i = 0; i < 5; i++){

        cityMap[i].city = i + 1;
        if ((i + 1) == 1){
            cityMap[i].adj1 = 2;
            cityMap[i].adj2 = 3;
            cityMap[i].adj3 = 4;
        }
        else if ((i + 1) == 2){
            cityMap[i].adj1 = 1;
            cityMap[i].adj2 = 3;
            cityMap[i].adj3 = 4;
        }
        else if ((i + 1) == 3){
            cityMap[i].adj1 = 1;
            cityMap[i].adj2 = 2;
            cityMap[i].adj3 = 4;
        }
        else if ((i + 1) == 4){
            cityMap[i].adj1 = 1;
            cityMap[i].adj2 = 2;
            cityMap[i].adj3 = 3;
        }
    }
}
void cityMap :: printMap(){
    cout << "MAP\n" << "(1) Riverside\n"
                    << "(2) Perris\n"
                    << "(3) Moreno Valley\n"
                    << "(4) Hemet\n";
    for (int i = 0; i < 4; i++){
        cout << "City: " << cityMap[i].city << " is adjacent to these cities: <" <<
            cityMap[i].adj1 << ", " << cityMap[i].adj2 << ", " << cityMap[i].adj3 << ">\n";
    }
}

//effective route 
void effectiveRoute(){  //the shortest path displayed
    cout << "The most effective route is 1 -> 2 -> 4 -> 3 ";
}

void printCity(){
    cout << "City: " << endl;
    cout << "(1) Riverside\n";
    cout << "(2) Perris\n";
    cout << "(3) Moreno\n";
    cout << "(4) Hemet" << endl;
}
//mainfunction
int main(){
    int choice;

    cout << "Hello Inland Empire Solar Sales Travel.\n";
    cout << "Choose the following options to start planning your trips:";
    cout <<"\n***********************************************************\n";
    cout << "(1) Planning Trip [Variations per route]\n";
    cout << "(2) Shortest Path\n";
    cout << "(3) Roads\n";  //adjacencies
    cout << "(4) Map\n";    //matrix
    cout << "Enter 5 to exit program: ";

    do{
        cin >> choice;
        cout << endl;

        if (choice < 1 || choice > 5){
            cout << "Error...please enter the following choices\n";
        }
        else{
            switch (choice){ //menu
                case 1:{
                    printCity();
                    
                    cout << "Here are some possible routes to choose:\n";
                    Edge edges[] = {{1,2}, {1, 3}, {1, 4}, {2, 3}, {2, 4}, {3, 4}};

                    int N = 5;
                    int n = sizeof(edges) / sizeof(edges[0]);
                    Graph graph(edges, n, N);

                    for (int i = 1; i < N; i++){
                        cout << i;
                        printList(graph.head[i]);
                    }
                    break;
                }
                case 2:{
                    printCity();
                    effectiveRoute();
                    break;
                }
                case 3:{
                    cityMap cityMap1;
                    cityMap1.createMap();
                    cityMap1.printMap();
                    break;
                }
                case 4:{
                    printCity();

                    Edge edges[] = { {1, 2, 24}, {1, 3, 16}, {1, 4, 33},
                                        {2, 3, 18}, {3, 4, 26}, {4, 2, 30}};
                    int N = 5;
                    int n =sizeof(edges) / sizeof(edges[0]);
                    //constructor
                    Graph graph(edges, n, N);;
                    //print
                    for (int i = 0; i < N; i++){
                        printList(graph.head[i]);
                    }
                    break;
                }
            }
        }
    }

    while (choice == 5);
    cout << "See you soon...Signing out.\n";
    
    return 0;
}