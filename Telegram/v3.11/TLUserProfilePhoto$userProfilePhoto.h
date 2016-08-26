/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:53:37 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D5AA3D7F-F68B-43D8-8CC1-85DAFE886350/Telegram.app/Telegram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Telegram/Telegram-Structs.h>
#import <Telegram/TLUserProfilePhoto.h>

@class TLFileLocation;

@interface TLUserProfilePhoto$userProfilePhoto : TLUserProfilePhoto {

	long long _photo_id;
	TLFileLocation* _photo_small;
	TLFileLocation* _photo_big;

}

@property (assign,nonatomic) long long photo_id;                        //@synthesize photo_id=_photo_id - In the implementation block
@property (nonatomic,retain) TLFileLocation * photo_small;              //@synthesize photo_small=_photo_small - In the implementation block
@property (nonatomic,retain) TLFileLocation * photo_big;                //@synthesize photo_big=_photo_big - In the implementation block
-(int)TLconstructorSignature;
-(int)TLconstructorName;
-(id)TLbuildFromMetaObject:(shared_ptr<TLMetaObject>*)arg1 ;
-(void)TLfillFieldsWithValues:(map<int, TLConstructedValue, std::less<int>, std::allocator<std::pair<const int, TLConstructedValue> > >=_Rb_tree<int, std::pair<const int, TLConstructedValue>, std::_Select1st<std::pair<const int, TLConstructedValue> >, std::less<int>, std::allocator<std::pair<const int, TLConstructedValue> > >=_Rb_tree_impl<std::less<int>, false>=less<int>_Rb_tree_node_base=i_Rb_tree_node_base}_Rb_tree_node_base}_Rb_tree_node_base}}Q}}}Ref)arg1 ;
-(void)setPhoto_id:(long long)arg1 ;
-(void)setPhoto_small:(TLFileLocation *)arg1 ;
-(void)setPhoto_big:(TLFileLocation *)arg1 ;
-(long long)photo_id;
-(TLFileLocation *)photo_small;
-(TLFileLocation *)photo_big;
@end
