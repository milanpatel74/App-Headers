/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:28 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


#import <Messenger/Messenger-Structs.h>
@class UIView;

@interface FBCollageItem : NSObject {

	UIView* _view;
	FBCollageItemRect _rect;

}

@property (nonatomic,retain) UIView * view;                       //@synthesize view=_view - In the implementation block
@property (assign,nonatomic) FBCollageItemRect rect;              //@synthesize rect=_rect - In the implementation block
+(id)collageItemWithRect:(FBCollageItemRect)arg1 ;
-(id)initWithView:(id)arg1 rect:(FBCollageItemRect)arg2 ;
-(CGRect)frameForXRatio:(float)arg1 yRatio:(float)arg2 ;
-(id)description;
-(UIView *)view;
-(void)setView:(UIView *)arg1 ;
-(FBCollageItemRect)rect;
-(void)setRect:(FBCollageItemRect)arg1 ;
@end
