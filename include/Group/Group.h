#ifndef GROUP_H
#define GROUP_H

class Group {
    protected:
        int size;
        int** operationTable; 
        int identity;
        int* inverses;


        /**
        * @brief Function to verify the closure property of the group
        */
        void verifyClosure();
        
        /**
        * @brief Function to find the identity element of the group
        * @return The identity element
        */
        int findIdentity();
        
        /**
        * @brief Function to find the inverses of all elements in the group
        */
        void findInverses();
        
        /**
        * @brief Function to verify the associativity property of the group
        */
        void verifyAssociativity();


    public:

        /**
         * @brief Default constructor for Group class
         */
        Group();

        /**
        * @brief Constructor for Group class
        * @param table Pointer to the operation table
        * @param n Size of the group
        */
        Group(int** table, int n);
        /**
        * @brief Copy constructor for Group class
        * @param other Reference to another Group object
        */

        Group(const Group& other);
        /**
        * @brief Destructor for Group class
        */
        ~Group();

        /**
        * @brief Overloaded assignment operator for Group class
        * @param other Reference to another Group object
        * @return Reference to the current Group object
        */
        Group& operator=(const Group& other);

        /**
        * @brief Overloaded + operator for direct sum of two groups
        * @param other Reference to another Group object
        * @return New Group object representing the direct sum
        */
        Group operator+(const Group& other) const;

        /**
        * @brief Overloaded == operator to check if two groups are isomorphic
        * @param other Reference to another Group object
        * @return True if the groups are isomorphic, false otherwise
        */
        bool operator==(const Group& other) const;

        /**
        * @brief Overloaded != operator to check if two groups are not isomorphic
        * @param other Reference to another Group object
        * @return True if the groups are not isomorphic, false otherwise
        */
        bool operator!=(const Group& other) const;

        /**
        * @brief Function to print the group
        */
        void print() const;

        /**
        * @brief Function to get the identity element of the group
        * @return The identity element
        */
        int getIdentity() const;

        /**
        * @brief Function to get the order of the group
        * @return The order of the group
        */
        int getOrder() const;

        /**
        * @brief Function to get the operation table of the group
        * @return Pointer to the operation table
        */
        int** getOperationTable() const;

        /**
        * @brief Function to get the inverses of all elements in the group
        * @return Pointer to the array of inverses
        */
        int* getInverses(int a) const;

        /**
        * @brief performs the group operation on two elements
        * @param a First element
        * @param b Second element
        * @return Result of the group operation
        */
        int operate(int a, int b) const;
};

#endif // GROUP_H

