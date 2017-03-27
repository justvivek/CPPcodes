#include<iostream>

int main()
{
	using namespace std;
    unsigned char option_viewed = 0x01;
    unsigned char option_edited = 0x02;
    unsigned char option_favorited = 0x04;
    unsigned char option_shared = 0x08;
    unsigned char option_deleted = 0x80;
 
    unsigned char myArticleFlags(0x00);
    myArticleFlags |= option_viewed;
    if(myArticleFlags & option_deleted){cout<< "Article has been deleted";}
    else {cout << "Article is not deleted";}
    
    myArticleFlags |= option_favorited;
    cout<< "\n----Before-----\n";
    if(myArticleFlags & option_favorited){cout<< "Option favorited is set\n";}
    else cout << "Option favorited is unset\n";
    cout<< "----After-----\n";
    myArticleFlags &= ~option_favorited;
    if(myArticleFlags & option_favorited){cout<< "Option favorited is set\n";}
    else cout << "Option favorited is unset\n";
    
}
