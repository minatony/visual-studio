using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace WindowsFormsAppthayVinh1
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void Button1_Click(object sender, EventArgs e)
        {
            serialPort1.Open();
            btn1.Enabled = false;// sau khi nhan 1 lan thi nut nhan ket noi an
        }

        private void Button2_Click(object sender, EventArgs e)
        {
            Close();// thoat form
        }

        private void Btnngat_Click(object sender, EventArgs e)
        {
            serialPort1.Close();
            btn1.Enabled = true;// hien lai nut nhan ket noi
        }

        private void Btnred_Click(object sender, EventArgs e)
        {
            serialPort1.Write("d");// gui tin hieu a
        }

        private void Btnblue_Click(object sender, EventArgs e)
        {
            serialPort1.Write("x");// gui tin hieu b
        }

        private void Form1_Load(object sender, EventArgs e)
        {

        }

        private void Btnstart_Click(object sender, EventArgs e)
        {
            serialPort1.Write("a");
        }

        private void Btnstop_Click(object sender, EventArgs e)
        {
            serialPort1.Write("b");
        }

        private void Btnyellow_Click(object sender, EventArgs e)
        {
            serialPort1.Write("v");
        }
    }
}
