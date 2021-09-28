#include "MyForm2.h"
#include "MyForm1.h"
#include "foo.h"

System::Void winform::MyForm2::âèõ³äToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e)
{
    MyForm2^ form = gcnew MyForm2();
    this->Hide();
}

System::Void winform::MyForm2::ïîâåðíóòèñÿÍàçàäToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    MyForm1^ form = gcnew MyForm1();
    this->Hide();
    form->Show();
   
}

System::Void winform::MyForm2::îÏðîãðàì³ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    MessageBox::Show("Àâòîð: Ñòîÿí Îëåêñàíäð \nÃðóïà: ÌÑÑ-3", "Î ïðîãðàì³");
}

System::Void winform::MyForm2::dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e)
{
    
    return System::Void();
}


void winform::MyForm2::lol()
{
    throw gcnew System::NotImplementedException();
}
void winform::MyForm2::ShowC(int N_u, int N_y, double** matrixC,double** matrixG)
{
   //dataGridView1 MATRIX_C 1
    dataGridView1->RowCount = N_u;
    dataGridView1->ColumnCount = N_y;
    for (int i = 0; i <N_u; i++)
    {
        for (int j = 0; j < N_y; j++)
        {
            dataGridView1->TopLeftHeaderCell->Value = "Ìàòðèöÿ 1";

            dataGridView1->Columns[j]->HeaderCell->Value = Convert::ToString(j + 1);

            dataGridView1->Rows[i]->HeaderCell->Value = Convert::ToString(i + 1);

            dataGridView1->Rows[i]->Cells[j]->Value = matrixC[i][j];

        }

    }
    //dataGridView1 MATRIX_G 2
    dataGridView2->RowCount = N_u;
    dataGridView2->ColumnCount = N_y;
    for (int i = 0; i < N_u; i++)
    {
        for (int j = 0; j < N_y; j++)
        {
            dataGridView2->TopLeftHeaderCell->Value = "Ìàòðèöÿ 2";

            dataGridView2->Columns[j]->HeaderCell->Value = Convert::ToString(j + 1);

            dataGridView2->Rows[i]->HeaderCell->Value = Convert::ToString(i + 1);

            dataGridView2->Rows[i]->Cells[j]->Value = matrixG[i][j];

        }

    }

}

System::Void winform::MyForm2::dataGridView2_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e)
{
    return System::Void();
}

System::Void winform::MyForm2::label4_Click(System::Object^ sender, System::EventArgs^ e)
{
   
    return System::Void();
}

