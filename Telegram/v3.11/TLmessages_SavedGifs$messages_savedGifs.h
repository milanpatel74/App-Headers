/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:53:37 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D5AA3D7F-F68B-43D8-8CC1-85DAFE886350/Telegram.app/Telegram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Telegram/Telegram-Structs.h>
#import <Telegram/TLmessages_SavedGifs.h>

@class NSArray;

@interface TLmessages_SavedGifs$messages_savedGifs : TLmessages_SavedGifs {

	int _n_hash;
	NSArray* _gifs;

}

@property (assign,nonatomic) int n_hash;                  //@synthesize n_hash=_n_hash - In the implementation block
@property (nonatomic,retain) NSArray * gifs;              //@synthesize gifs=_gifs - In the implementation block
-(int)TLconstructorSignature;
-(int)TLconstructorName;
-(id)TLbuildFromMetaObject:(shared_ptr<TLMetaObject>*)arg1 ;
-(void)TLfillFieldsWithValues:(map<int, TLConstructedValue, std::less<int>, std::allocator<std::pair<const int, TLConstructedValue> > >=_Rb_tree<int, std::pair<const int, TLConstructedValue>, std::_Select1st<std::pair<const int, TLConstructedValue> >, std::less<int>, std::allocator<std::pair<const int, TLConstructedValue> > >=_Rb_tree_impl<std::less<int>, false>=less<int>_Rb_tree_node_base=i_Rb_tree_node_base}_Rb_tree_node_base}_Rb_tree_node_base}}Q}}}Ref)arg1 ;
-(int)n_hash;
-(void)setN_hash:(int)arg1 ;
-(void)setGifs:(NSArray *)arg1 ;
-(NSArray *)gifs;
@end

