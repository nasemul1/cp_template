void primeSieve(vector<int> &seive){

    seive[2]=1;
    for (ll i = 3; i <= N; i+=2){
        seive[i]=1;
    }

    for (ll i = 2; i <= N; ++i){
        if(seive[i]){
            for (ll j = i*i; j <= N; j+=i){
                seive[j]=0;
            }
        }
    }
}
// Complexity
// O(N log log N)
