using System;
using System.Text;
using System.Windows.Forms;
using System.Runtime.InteropServices;
using System.Threading.Tasks;
using System.Threading;

namespace unregistered_hypercam_lol
{
    public partial class Form1 : Form
    {
        [DllImport("uhc.dll", CallingConvention = CallingConvention.Cdecl)]
        public static extern void HPCwtm(string input_txt);

        private Mutex mutex = new Mutex(false, "HPCwtmMutex"); // No mutex = dead

        public Form1()
        {
            InitializeComponent();
        }

        private void checkBox1_CheckedChanged(object sender, EventArgs e)
        {
            if (checkBox1.Checked)
            {
                Task.Factory.StartNew(() => HPCwtm(textBox1.Text));
                mutex.WaitOne(0);
            } 
            else mutex.ReleaseMutex();
        }
    }
}
