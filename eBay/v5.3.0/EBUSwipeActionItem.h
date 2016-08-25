/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:54:33 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/EDDCC4DC-B551-47FD-8F2D-ADD28D2EEB77/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, EUIButtonStyleInfo;

@interface EBUSwipeActionItem : NSObject {

	NSString* _title;
	EUIButtonStyleInfo* _styleInfo;
	/*^block*/id _actionBlock;

}

@property (nonatomic,copy) NSString * title;                              //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) EUIButtonStyleInfo * styleInfo;              //@synthesize styleInfo=_styleInfo - In the implementation block
@property (nonatomic,copy) id actionBlock;                                //@synthesize actionBlock=_actionBlock - In the implementation block
+(id)buttonStyleInfoWithBackgroundColor:(id)arg1 ;
+(id)itemWithTitle:(id)arg1 styleInfo:(id)arg2 actionBlock:(/*^block*/id)arg3 ;
-(id)initWithTitle:(id)arg1 styleInfo:(id)arg2 actionBlock:(/*^block*/id)arg3 ;
-(void)setStyleInfo:(EUIButtonStyleInfo *)arg1 ;
-(EUIButtonStyleInfo *)styleInfo;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(id)actionBlock;
-(void)setActionBlock:(id)arg1 ;
@end
