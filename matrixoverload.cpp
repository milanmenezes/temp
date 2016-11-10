#include <iostream>
#include <stdlib.h>
using namespace std;

class matrix
{
    int a[10][10],row,col;

    public:
    void read_order()
    {
        cin>>row>>col;
    }

    void read_matrix()
    {
        int i,j;
        for(i=0; i<row; i++)
            for(j=0; j<col; j++)
                cin>>a[i][j];
    }

    int operator==(matrix ms)
    {
        if(row==ms.row &&col==ms.col)
        {
            cout<<"matrix op possible"<<endl;
            return 1;
        }
        else
        {
            cout<<"matrix op not possible"<<endl;
            return 0;
        }
    }

    matrix operator+(matrix mt)
    {
        matrix temp;
        int i,j;
        for(i=0; i<row; i++)
            for(j=0; j<col; j++)
                temp.a[i][j]=a[i][j]+mt.a[i][j];
        temp.row=row;
        temp.col=col;
        return temp;
    }

    matrix operator-(matrix mq)
    {
        matrix temp;
        int i,j;
        for(i=0; i<row; i++)
            for(j=0; j<col; j++)
                temp.a[i][j]=a[i][j]- mq.a[i][j];
        temp.row=row;
        temp.col=col;
        return temp;

    }

    friend ostream& operator<<(ostream&,matrix);

};

ostream& operator<<(ostream&ct,matrix ml)
{
    int i,j;
    for(i=0; i<ml.row; i++)
    {
        for(j=0; j<ml.col; j++)
            ct<<ml.a[i][j]<<" ";
        cout<<endl;
    }
    return ct;
}

int main()
{
    matrix m1,m2,m3,m4;
    cout<<"enter order of first matrix"<<endl;
    m1.read_order();
    cout<<"enter order of second matrix"<<endl;
    m2.read_order();

    if(m1==m2)
    {
        cout<<"enter elements of first matrix"<<endl;
        m1.read_matrix();
        cout<<"enter elements of second matrix"<<endl;
        m2.read_matrix();

        cout<<"matrix1"<<endl;
        cout<<m1;
        cout<<"matrix2"<<endl;
        cout<<m2;

        m3=(m1+m2);
        m4=(m1-m2);

        cout<<"add of 2 matrix is"<<m3<<endl;
        cout<<"sub of 2 matrix is"<<m4<<endl;
    }
    return 0;
}
