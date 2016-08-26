/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:53:37 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D5AA3D7F-F68B-43D8-8CC1-85DAFE886350/Telegram.app/Telegram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Telegram/Telegram-Structs.h>
#import <Telegram/TGCollectionItem.h>

@class NSString;

@interface TGCheckCollectionItem : TGCollectionItem {

	BOOL _isChecked;
	BOOL _alignToRight;
	BOOL _requiresFullSeparator;
	NSString* _title;
	SEL _action;

}

@property (nonatomic,retain) NSString * title;                        //@synthesize title=_title - In the implementation block
@property (assign,nonatomic) BOOL isChecked;                          //@synthesize isChecked=_isChecked - In the implementation block
@property (assign,nonatomic) SEL action;                              //@synthesize action=_action - In the implementation block
@property (assign,nonatomic) BOOL alignToRight;                       //@synthesize alignToRight=_alignToRight - In the implementation block
@property (assign,nonatomic) BOOL requiresFullSeparator;              //@synthesize requiresFullSeparator=_requiresFullSeparator - In the implementation block
-(void)bindView:(id)arg1 ;
-(Class)itemViewClass;
-(CGSize)itemSizeForContainerSize:(CGSize)arg1 ;
-(void)itemSelected:(id)arg1 ;
-(void)setIsChecked:(BOOL)arg1 ;
-(void)setAlignToRight:(BOOL)arg1 ;
-(BOOL)alignToRight;
-(BOOL)requiresFullSeparator;
-(void)setRequiresFullSeparator:(BOOL)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(SEL)action;
-(NSString *)title;
-(void)setAction:(SEL)arg1 ;
-(id)initWithTitle:(id)arg1 action:(SEL)arg2 ;
-(BOOL)isChecked;
@end
