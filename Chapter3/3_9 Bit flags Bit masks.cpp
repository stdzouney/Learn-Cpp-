#include <iostream>
#include <bitset>
using namespace std;



int main()
{
	//3_9 Bit flags, Bit masks 비트 플래그, 비트 마스크 사용법


	//Bit flags
	unsigned char items_flag = 0;

	cout << bitset<8>(items_flag) << endl;

	const unsigned char opt0 = 1 << 0, opt1 = 1 << 1, opt2 = 1 << 2, opt3 = 1 << 3, opt4 = 1 << 4, opt5 = 1 << 5, opt6 = 1 << 6, opt7 = 1 << 7;

	// item0,3 on
	items_flag |= opt0;
	items_flag |= opt3;
	cout << bitset<8>(items_flag) << endl;

	// item3 lost
	items_flag ^= opt3;
	cout << bitset<8>(items_flag) << endl;

	// has item0 
	if (items_flag & opt0)
		cout << "Has item0" << endl;

	// obtain item 2, 3

	items_flag |= (opt2 | opt3);
	cout << bitset<8>(items_flag) << endl;

	// item 2,3 lost

	if ((items_flag & opt2) && (items_flag % opt3))
	{
		items_flag ^= (opt2 | opt3);
	}
	cout << bitset<8>(items_flag) << endl;




	//Bit masks


	const unsigned int red_mask = 0xFF0000;
	const unsigned int green_mask = 0x00FF00;
	const unsigned int blue_mask = 0x0000FF;

	cout << bitset<32>(red_mask) << endl;
	cout << bitset<32>(green_mask) << endl;
	cout << bitset<32>(blue_mask) << endl;

	unsigned int pixel_color = 0xDAA520;
	cout << bitset<32>(pixel_color) << endl;

	unsigned int red, green, blue;

	red = (pixel_color & red_mask) >> 16;
	green = (pixel_color & green_mask) >> 8;
	blue = (pixel_color & blue_mask);

	cout << "<" << red << "," << green << "," << blue << ">" << endl;

	//Quiz

	unsigned char option_viewed = 0x01;
	unsigned char option_edited = 0x02;
	unsigned char option_liked = 0x04;
	unsigned char option_shared = 0x08;
	unsigned char option_deleted = 0x80;

	unsigned char my_article_flags = 0;


	//viewed
	my_article_flags |= option_viewed;
	cout << bitset<32>(my_article_flags) << endl;
	//liked
	my_article_flags |= option_liked;
	cout << bitset<32>(my_article_flags) << endl;
	//unliked
	my_article_flags ^= option_liked;
	cout << bitset<32>(my_article_flags) << endl;
	//deleted
	my_article_flags |= option_deleted;
	cout << bitset<32>(my_article_flags) << endl;



}