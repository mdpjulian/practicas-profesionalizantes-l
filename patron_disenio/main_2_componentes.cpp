/**
    Project     : Composite Pattern Example

    Authors     : Erich Gamma, Richard Helm, Ralph Johnson and John Vlissides
**/


///////////////////////////////////////////ICOMPONENT-INTERFACE///////////////////////////////////////////////
///////////////////////////////////////////VERSION CON 1 SOLO COMPONENTE/INTERFAZ///////////////////////////////////////////////

#include <iostream>
#include <vector>
#include <algorithm>

class ListComponent
{
    public:
        virtual ~ListComponent(){};
        virtual void list(int depth) = 0; //operation
       
};
//////////////////////////////////////////////////////////////////////////////////////////////////////////////

/////////////////////////////////////////////COMPOSITE///////////////////////////////////////////////////////
class Folder : public ListComponent
{
    private:
        std::string m_nodeName;
        std::vector<ListComponent*> m_children;

    public:
        Folder(std::string nodeName)
        {
            m_nodeName = nodeName;
        }

        virtual ~Folder(){}
        
        void list(int depth){//operation

            std::string newStr(depth, '-');
            std::cout << newStr << m_nodeName << " depth: " << depth << std::endl;
            for(ListComponent* currentChild : m_children){
            
                if(currentChild != 0){
                
                    currentChild->list(depth + 1);
                }
            }
        }

        void add(ListComponent* component){
            m_children.push_back(component);
        }

        void remove(ListComponent* component){
            m_children.erase(std::remove(m_children.begin(), m_children.end(), component), m_children.end());
        }
};
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////LEAF////////////////////////////////////////////////////////
class File : public ListComponent
{
    private:
        std::string m_nodeName;
        
       

    public:
        File(std::string nodeName){
            m_nodeName = nodeName;
        }

        virtual ~File(){}

        void list(int depth){//operation
            std::string newStr(depth, '-');
            std::cout << newStr << m_nodeName << " depth: " << depth << std::endl;
        }
        
};
//////////////////////////////////////////////////////////////////////////////////////////////////////////////

/////////////////////////////////////////////////MAIN////////////////////////////////////////////////////////
int main()
{
    Folder* folder_01 = new Folder("folder_01");
    Folder* folder_02 = new Folder("folder_02");
    Folder* folder_03 = new Folder("folder_03");
    File* C = new File("file C");

    folder_01->add(folder_02);
    folder_03->add(new File("file A"));
    folder_03->add(new File("file B"));
    folder_03->add(C);
    folder_02->add(folder_03);
    
    folder_01->list(1);

    delete folder_03;
    delete folder_02;
    delete folder_01;
    return 0;
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////