class father
{
    public:
    virtual void test(void);
    void testconst(const int c_father);
};

class son :public father
{
    public:
    virtual void test(void);
   // void testconst(const int c_son);
};