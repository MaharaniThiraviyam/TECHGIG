string firstNFirst(string input1)
{
	//Write code here
	string a="";
	a=input1[0];
	return a;
}




int main() {
    string output;
    string ip1;
    getline(cin, ip1);
    output = firstNFirst(ip1);
    cout << output << endl;
    return 0;
}

