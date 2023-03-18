
/*  Reverse the String  */
// #include<bits/stdc++.h>
// using namespace std;

// int main(){

//     string str = "Hello";
//     reverse(str.begin(), str.end());

//     cout << str;

//     return 0;
// }


/*    Substring */
// #include<bits/stdc++.h>
// using namespace std;

// int main(){

//     string str = "survive";
//     cout << str.substr(1,4) << endl;
// }


/*   + operator         */
// #include<bits/stdc++.h>
// using namespace std;

// int main(){

//     string str = "rahul";
//     string str1 = "ray";
    
//     cout << str + str1 << endl;

//     str += str1;

//     cout << str << endl;

//     return 0;
// }


/*   Strcat() => to concatinate   */
// #include<bits/stdc++.h>
// using namespace std;

// int main(){

//     char s1[10] = "Rahul";
//     char s2[10] = "Yadav";

//     strcat(s1, s2);
//     cout << s1 << endl;

//     return 0;
// }


/*  Push_back() ==> push back aby character into the string   */
// #include<bits/stdc++.h>
// using namespace std;

// int main(){

//     string str = "Rahul";
//     char ch = 'Y';

//     str.push_back(ch);
//     cout << str << endl;

//     return 0;
// }


/*    Size()  or length()  => To calculate the string size    */
// #include<bits/stdc++.h>
// using namespace std;

// int main(){

//     string str = "Rahul";
//     cout << str.size() << endl;
//     cout << str.length() << endl;

//     return 0;
// }



/*    to_string    */
// #include<bits/stdc++.h>
// using namespace std;

// int main(){

//     int num = 432;
//     string str = to_string(num);
//     str += "1";
//     cout << str << endl;
//     cout << str[2] << endl;


//     return 0;
// }


/*    Sort the Given string Lexographically  */
// #include<bits/stdc++.h>
// using namespace std;

// string countSort(string str){

//     vector<int> freqArray(26,0);

//     // filed the frequency Array with every character
//     for(int i = 0; i < str.length(); i++){
//         int index = str[i] - 'a';
//         freqArray[index]++;
//     }

//     // created sorted Array
//     int j = 0;
//     for(int i = 0; i < 26; i++){
//         while(freqArray[i]--){
//             str[j++] = i + 'a';
//         }
//     }
//     return str;
// }

// int main(){

//     string str;
//     cin >> str;

//     cout << countSort(str);    

//     return 0;
// }




// /*    Given string is Anagram or Not    */
// #include<bits/stdc++.h>
// using namespace std;

// bool isAnagram(string str, string str1){

//     if(str.length() != str1.length()){
//         return false;
//     }

//     vector<int> freqArray(26, 0);

//     // store the frequency of the character in str and str1
//     for(int i = 0; i < str.length(); i++){
//         freqArray[str[i] - 'a']++;
//         freqArray[str1[i] - 'a']--;
//     }

//     // checking the freq of every character is zero or not
//     for(int i = 0; i < 26; i++){
//         if(freqArray[i] != 0){
//             return false;
//         }
//     }
//     return true;
// }

// int main(){

//     string str, str1;
//     cin >> str >> str1;

//     if(isAnagram(str, str1)){
//         cout << "Strings are Anagram" << endl;
//     }
//     else{
//         cout << "Strings are not Anagram" << endl;
//     }


//     return 0;
// }




/*    Given string are Isomorphic or Not    */
/*    Time complexity is O(n)  and Apace complexity is O(128 + 128) which constant   */
// #include<bits/stdc++.h>
// using namespace std;

// bool isIsomorphic(string str, string str1){

//     if(str.size() != str1.size()){
//         return false;
//     }

//     vector<int> freqArray(128, -1);
//     vector<int> freqArray1(128, -1);

//     for(int i = 0; i < str.size(); i++){
//         if(freqArray[str[i]] != freqArray1[str1[i]]){ // checking if value of character at index i matchwith both array
//             return false;
//         }
//         else{
//             freqArray[str[i]] = freqArray1[str1[i]] = i; // storing position in freq vector for character in index i
//         }
//     }
//     return true;


// }

// int main(){

//     string str, str1;
//     cin >> str >> str1;

//     if(isIsomorphic(str, str1)){
//         cout << "Strings are Isomorphic" << endl;
//     }
//     else{
//         cout << "Strings are not Isomorphic" << endl;
//     }

//     return 0;
// }




/*
    Given an array of strings. WAP to find the longest common prefix string amongest an array of string   
    Input: arr = ["flower", "flight", "flask"];
    Output: "fl";
*/



