#include "ScienceFiction.h"
#include "Drunkard.h"
#include "Tree.h"
int main()
{   
   /* deleteByYear("input.txt", "output.txt", 1999);*/

    std::vector<int> vec1{ 1,2,3,4,5 };
    std::vector<int> vec2{ 0,6,7,8,9 };
    Drunkard drunkard1(vec1, "first", vec2, "second");
    winner result1 = drunkard1.run();
    std::cout << result1.name << " " << result1.moves << '\n';

    std::vector<int> vec3{ 9, 8, 7, 6, 5 };
    std::vector<int> vec4{ 4, 3, 2 ,1, 0 };
    Drunkard drunkard2(vec3, "first", vec4, "second");
    winner result2 = drunkard2.run();
    std::cout << result2.name << " " << result2.moves << '\n';

    std::vector<int> vec5{ 1, 4, 5, 8, 0 };
    std::vector<int> vec6{ 2, 3, 6 ,7, 9 };
    Drunkard drunkard3(vec5, "first", vec6, "second");
    winner result3 = drunkard3.run();
    std::cout << result3.name << " " << result3.moves << '\n';



    //TNode<int>* root;
    //TNode<int>* ls;
    //TNode<int>* rs;
    //TNode<int>* ss;
    //init(ls, 2, new TNode<int>(3), new TNode<int>(4));
    //init(rs, 5, new TNode<int>(6), new TNode<int>(7));
    //init(root, 1, ls, rs);
    //detachLeftSubtree(ls, ss);
    ////  1
    ////2   3

    //prefOrder(root);
    //std::cout << '\n';
    //inOrder(root);
    //std::cout << '\n';
    //postOrder(root);
    //std::cout << '\n';

    //print(root);
    
    




    

    
    return 0;
}


