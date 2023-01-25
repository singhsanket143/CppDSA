longestConsecutiveSequence(arr) {
    let mp = {}; 
    for(let i = 0; i < arr.length; i++) { 
        mp[arr[i]] = true;
    }
    let ans = -1;
    for(let i = 0; i < arr.length; i++) {
        if(mp[arr[i] - 1]) {
            continue;
        } else {
            let len = 0;
            let x = arr[i];
            while(mp[x]) {
                len++;
                x++;
            }
            ans = Math.max(ans, len);
        }
    }
    return ans;
}