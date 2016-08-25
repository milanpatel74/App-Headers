/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:58:13 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/0CF72264-5488-4FD5-B700-EF786D177983/BubbleMania.app/BubbleMania
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BubbleMania/DisplayNotice.h>

@class NSString;

@interface ReactivationIncentiveNotice : DisplayNotice {

	int _favorAmountReward;
	NSString* _title;
	NSString* _topText;
	NSString* _bottomText;
	NSString* _buttonText;

}

@property (nonatomic,retain) NSString * title;                   //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSString * topText;                 //@synthesize topText=_topText - In the implementation block
@property (nonatomic,retain) NSString * bottomText;              //@synthesize bottomText=_bottomText - In the implementation block
@property (assign,nonatomic) int favorAmountReward;              //@synthesize favorAmountReward=_favorAmountReward - In the implementation block
@property (nonatomic,retain) NSString * buttonText;              //@synthesize buttonText=_buttonText - In the implementation block
+(id)mutableDictionaryTypes;
+(void)load;
-(BOOL)readyToShow;
-(void)setTopText:(NSString *)arg1 ;
-(void)setBottomText:(NSString *)arg1 ;
-(int)favorAmountReward;
-(void)setFavorAmountReward:(int)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(id)view;
-(NSString *)title;
-(NSString *)topText;
-(NSString *)bottomText;
-(NSString *)buttonText;
-(void)setButtonText:(NSString *)arg1 ;
@end
