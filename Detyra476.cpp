class Solution {
public:
    
    int findComplement(int num) {
        string binary = bitset<32>(num).to_string();
        string _binary;
        bool foundOne = false;
        
        
        for(int i = 0; i < binary.size() ; i++){
            if(!foundOne && binary.at(i) == '1') foundOne = true;
            if(foundOne){
                _binary += binary.at(i);
            }
        }
        
        for(int i =0; i < _binary.length(); i++){
            _binary.at(i) = _binary.at(i) == '0' ? '1' : '0';
        }
        return stoi(_binary, 0, 2);
    }
};