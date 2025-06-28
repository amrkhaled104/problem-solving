void amooor() {
    int q,n;cin>>q>>n;
    while(q--){
        int m,x;cin>>m>>x;
        switch (m) {
            case 1:
                cout<<((n>>x)&(1))<<endl;
                break;
            case 2:
                cout<<(n|=(1<<x))<<endl;
                break;
            case 3:
                cout<<(n&=~(1<<x))<<endl;
                break;
            case 4:
                cout<<(n^=(1<<x))<<endl;
                break;
        }
    }
}
