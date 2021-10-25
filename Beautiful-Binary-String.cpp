int beautifulBinaryString(string b)
{
    int result = 0;
    
    for (int i = 0; i < b.size(); ++i)
    {
        if (b.substr(i, 3) == "010")
        {
            result++;
            i += 2;
        }
    }    

    return result;
}

