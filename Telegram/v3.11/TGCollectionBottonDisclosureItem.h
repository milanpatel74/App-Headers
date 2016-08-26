/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:53:39 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D5AA3D7F-F68B-43D8-8CC1-85DAFE886350/Telegram.app/Telegram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Telegram/Telegram-Structs.h>
#import <Telegram/TGCollectionItem.h>

@class TGModernTextViewModel, NSString;

@interface TGCollectionBottonDisclosureItem : TGCollectionItem {

	TGModernTextViewModel* _textModel;
	BOOL _expanded;
	NSString* _title;
	NSString* _text;
	/*^block*/id _expandedChanged;
	/*^block*/id _followAnchor;

}

@property (nonatomic,retain) NSString * title;              //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSString * text;               //@synthesize text=_text - In the implementation block
@property (assign,nonatomic) BOOL expanded;                 //@synthesize expanded=_expanded - In the implementation block
@property (nonatomic,copy) id expandedChanged;              //@synthesize expandedChanged=_expandedChanged - In the implementation block
@property (nonatomic,copy) id followAnchor;                 //@synthesize followAnchor=_followAnchor - In the implementation block
-(void)bindView:(id)arg1 ;
-(Class)itemViewClass;
-(CGSize)itemSizeForContainerSize:(CGSize)arg1 ;
-(void)itemSelected:(id)arg1 ;
-(id)initWithTitle:(id)arg1 text:(id)arg2 ;
-(void)setExpandedChanged:(id)arg1 ;
-(void)setFollowAnchor:(id)arg1 ;
-(id)expandedChanged;
-(id)followAnchor;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(void)setExpanded:(BOOL)arg1 ;
-(BOOL)expanded;
@end
