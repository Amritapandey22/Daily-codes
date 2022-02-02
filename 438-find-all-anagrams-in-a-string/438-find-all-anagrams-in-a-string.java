class Solution {
    public List<Integer> findAnagrams(String s, String p) {
        List<Integer>ans = new ArrayList<>();
        int[]freq = new int[128];
        for(int i = 0; i < p.length(); i++){
            freq[p.charAt(i)]++;
        }
        int si = 0, ei = 0, n = s.length(), requirement = p.length();
        while(ei < n){
            if(freq[s.charAt(ei++)]-->0){
                requirement--;
            }
            while(requirement == 0){
                if(ei - si == p.length()){
                    ans.add(si);
                }
                if(freq[s.charAt(si++)]++ == 0){
                    requirement++;
                }
            }
        }
        return ans;
    }
}