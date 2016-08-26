/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:28 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface FBFriendCenterConfiguration : NSObject {

	NSArray* _menuItems;
	unsigned long long _initialMenuItem;

}

@property (nonatomic,copy) NSArray * menuItems;                               //@synthesize menuItems=_menuItems - In the implementation block
@property (assign,nonatomic) unsigned long long initialMenuItem;              //@synthesize initialMenuItem=_initialMenuItem - In the implementation block
+(id)configurationForFriendCenterWithSession:(id)arg1 initialMenuItem:(unsigned long long)arg2 ;
+(id)_prioritizeMenuItems:(id)arg1 ;
+(BOOL)_showQRCodeInFriendCenter:(id)arg1 ;
+(id)configurationForFriendCenterWithSession:(id)arg1 ;
-(void)setInitialMenuItem:(unsigned long long)arg1 ;
-(unsigned long long)initialMenuItem;
-(void)setMenuItems:(NSArray *)arg1 ;
-(NSArray *)menuItems;
@end
