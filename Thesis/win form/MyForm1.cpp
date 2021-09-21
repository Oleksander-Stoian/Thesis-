#include "MyForm1.h"
#include "MyForm2.h"
#include "foo.h"





int x1_y, x2_y, t_y, x1_u, x2_u, t_u,experiment=0, num=1;
int N_u = 0, N_y=0,indexY=0,indexU=0,click=0,n=0,u=0;


System::Void winform::MyForm1::textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e)
{
  
    
}

System::Void winform::MyForm1::textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e)
{
    return System::Void();
}

System::Void winform::MyForm1::textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e)
{
    return System::Void();
}

System::Void winform::MyForm1::button2_Click(System::Object^ sender, System::EventArgs^ e) // button  add Y
{
        if (click == 0)
        {
            Create();
            ++click;
        }
        x1_y = Convert::ToInt32(textBox1->Text);
        x2_y = Convert::ToInt32(textBox2->Text);
        t_y = Convert::ToInt32(textBox3->Text);
        addY(x1_y, x2_y, t_y,experiment,indexY);
        
        ++n;
       /* textBox5->Text = x1_y.ToString();
        textBox6->Text = x2_y.ToString();
        textBox4->Text = t_y.ToString();*/
        label9->Text = n.ToString();
        textBox1->Clear();
        textBox2->Clear();
        textBox3->Clear();
        ++indexY;

}

System::Void winform::MyForm1::button3_Click(System::Object^ sender, System::EventArgs^ e)
{
    
    start(N_u, N_y,experiment);

    double** matrixC = new double* [N_u];
    int i;
    for (i = 0; i < N_u; ++i)
    {
        matrixC[i] = new double[N_y];
    }

    double** matrixG = new double* [N_u];
 
    for (i = 0; i < N_u; ++i)
    {
        matrixG[i] = new double[N_y];
    }
    /*for (int i = 0; i < N_u; i++)
    {
        for (int j = 0; j < N_y; j++)
            matrixC[i][j] = 1;
    }*/
    giveMat(matrixC,matrixG);


    MyForm2^ form = gcnew MyForm2();
    this->Hide();
    form->Show();
    form->ShowC(N_u,N_y, matrixC,matrixG);
   
   
}

System::Void winform::MyForm1::textBox5_TextChanged(System::Object^ sender, System::EventArgs^ e)//X1_u
{
    return System::Void();
}

System::Void winform::MyForm1::textBox6_TextChanged(System::Object^ sender, System::EventArgs^ e)//x2_u
{
    return System::Void();
}

System::Void winform::MyForm1::textBox4_TextChanged(System::Object^ sender, System::EventArgs^ e) // t_U
{
    return System::Void();
}

System::Void winform::MyForm1::button1_Click(System::Object^ sender, System::EventArgs^ e) // button  add U
{
    if (click == 0)
    {
        Create();
        ++click;
    }
    x1_u = Convert::ToInt32(textBox5->Text);
    x2_u = Convert::ToInt32(textBox6->Text);
    t_u = Convert::ToInt32(textBox4->Text);
    addU(x1_u, x2_u, t_u, experiment, indexU);
 
    ++u;
   /* textBox1->Text = x1_u.ToString();
     textBox2->Text = x2_u.ToString();
     textBox3->Text = t_u.ToString();*/
    label12->Text = u.ToString();
    textBox5->Clear();
    textBox6->Clear();
    textBox4->Clear();
    ++indexU;
}

System::Void winform::MyForm1::âèõ³äToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    MyForm2^ form = gcnew MyForm2();
    this->Hide();
    
}

System::Void winform::MyForm1::îÏðîãðàì³ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    MessageBox::Show("Àâòîð: Ñòîÿí Îëåêñàíäð \nÃðóïà: ÌÑÑ-3", "Î ïðîãðàì³");
}

System::Void winform::MyForm1::label9_Click(System::Object^ sender, System::EventArgs^ e)
{
    
}

System::Void winform::MyForm1::label12_Click(System::Object^ sender, System::EventArgs^ e)
{

}

System::Void winform::MyForm1::button4_Click(System::Object^ sender, System::EventArgs^ e)
{
    rand() % 10;
    int x1, x2, t;
    x1=rand() % 10;
    x2= rand() % 10;
    t= rand() % 10;
   
    textBox1->Text = ""+x1;
    textBox2->Text = "" + x2;
    textBox3->Text = "" + t;


}

System::Void winform::MyForm1::button5_Click(System::Object^ sender, System::EventArgs^ e)
{
    rand () % 10;
    int x1, x2, t;
    x1 = rand() % 10;
    x2 = rand() % 10;
    t = rand() % 10;

    textBox4->Text = "" + x1;
    textBox5->Text = "" + x2;
    textBox6->Text = "" + t;
}

//äîäàòè åêñïåðèìåíòè 
System::Void winform::MyForm1::button6_Click(System::Object^ sender, System::EventArgs^ e)
{
   // start(N_y, N_u, experiment,1);
    ++experiment;
    label14->Text = experiment.ToString();
    textBox5->Clear();
    textBox6->Clear();
    textBox4->Clear();
    textBox1->Clear();
    textBox2->Clear();
    textBox3->Clear();
    label12->Text = "0";
    label9->Text = "0";
    if (N_y < n)
    {
        N_y = n;
    }
    if (N_u < u)
    {
        N_u = u;
    }
    n = 0;
    u = 0;
    indexY = 0;
    indexU = 0;
    
}

System::Void winform::MyForm1::label14_Click(System::Object^ sender, System::EventArgs^ e)
{
    label14->Text = experiment.ToString();

}



//void giveMat(double** mat, int N_m, int N_l)
//{
//    double** matrixC = new double* [N_y];
//    int i;
//    for (i = 0; i < N_y; ++i)
//    {
//        matrixC[i] = new double[N_u];
//    }
//
//    for (int i = 0; i < N_m; i++)
//    {
//        for (int j = 0; j < N_l; j++)
//            matrixC[i][j] = mat[i][j];
//    }
//    
//  ShowC(N_u, N_y, matrixC);
//}
