namespace Program
{
    class Program
    {
        static void Main()
        {
            do
            {
                Console.Write("Type a statement: ");
                string? statement = Console.ReadLine();
                if (statement != null)
                {
                    char[] delimiters = [' ', ',', '!'];
                    string[] tokens = statement.Split(delimiters, StringSplitOptions.RemoveEmptyEntries);
                    double num1 = Convert.ToDouble(tokens[0]);
                    double num2 = Convert.ToDouble(tokens[2]);
                    switch (Convert.ToChar(tokens[1]))
                    {
                        case '+':
                            Console.WriteLine(num1 + num2);
                            break;
                        case '-':
                            Console.WriteLine(num1 - num2);
                            break;
                        case '*':
                            Console.WriteLine(num1 * num2);
                            break;
                        case '/':
                            Console.WriteLine(num1 / num2);
                            break;
                    }
                }
                else
                {
                    throw new Exception("Empty String");
                }
            } while (true);
        }
    }
}