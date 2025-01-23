
    vector<ll> v(10000009);
    double sum = 0;
    for(int i = 1;i <= 10000000;++i)
    {
        sum += log10(i);//de2(i,sum);
        v[i] = sum;
    }//cout << sum;


    int n;cin >>n;
    while (n--)
    {
        int t;
        cin >> t;
        cout << v[t] + 1 << endl;

    }

